/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 04:29:21 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 16:35:46 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
  if (ac != 4)
  {
    std::cout << "Parameter error! Please refer to the usage example!" << std::endl;
    std::cout << "Example : " << av[0] << " <fileName> <string1> <string2>" << std::endl;
    return (1);
  }

  std::string fileName(av[1]);
  std::string string1(av[2]);
  std::string string2(av[3]);
  std::string buffer("");
  std::string result("");

  std::ifstream file(fileName);

  if (!file.is_open())
  {
    std::cout << "File open error! Please check your file" << std::endl;
    return (1);
  }

  while (file.good() && file.is_open())
  {
    char c = file.get();
    if (c >= 0)
      buffer += c;
    else
      break;
  }

  file.close();

  size_t pos1 = 0;
  size_t pos2 = 0;
  while (true)
  {
    pos1 = buffer.find(string1, pos2);
    if (pos1 == std::string::npos)
      break;
    buffer.erase(pos1, string1.length());
    buffer.insert(pos1, string2);
    pos2 = pos1 + string2.length();
  }
  std::ofstream replacedFile(fileName + ".replace");
  replacedFile << buffer;
  replacedFile.close();
}