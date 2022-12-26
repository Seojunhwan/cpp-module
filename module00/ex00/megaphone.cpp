/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:24:12 by junseo            #+#    #+#             */
/*   Updated: 2022/11/14 22:24:23 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string str;

    if (argc < 2)
    {
        str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        std::cout << str << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++)
    {
        str = argv[i];
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        std::cout << str;
    }
    std::cout << std::endl;
    return 0;
}