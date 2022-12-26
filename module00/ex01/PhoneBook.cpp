/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:45:39 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 04:09:02 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

static const char *SequenceMessageTable[5] = {
	"Enter first name: ",
	"Enter last name: ",
	"Enter nickname: ",
	"Enter phone number: ",
	"Enter darkest secret: "
};

PhoneBook::PhoneBook()
{
	_contact_index = 0;
}

PhoneBook::~PhoneBook() {}

std::string PhoneBook::read_line_() const
{
	std::string line;

	std::getline(std::cin, line);
	if (std::cin.eof() || std::cin.fail())
	{
		std::cout << std::endl
				  << "Exit!" << std::endl;
		exit(1);
	}
	if (line.length() == 0)
		throw std::exception();
	if (line.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") != std::string::npos)
		throw std::exception();
	return line;
}

std::string PhoneBook::resizing_(std::string str) const
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return str;
}

void PhoneBook::print_minimal_info_() const
{
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|";
	std::cout << std::setw(10) << "phone" << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << resizing_(contacts_[i].GetFirstName()) << "|";
		std::cout << std::setw(10) << resizing_(contacts_[i].GetLastName()) << "|";
		std::cout << std::setw(10) << resizing_(contacts_[i].GetNickName()) << "|";
		std::cout << std::setw(10) << resizing_(contacts_[i].GetPhoneNumber()) << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::print_detail_info_(Contact contact) const
{
	std::cout << "First name: " << contact.GetFirstName() << std::endl;
	std::cout << "Last name: " << contact.GetLastName() << std::endl;
	std::cout << "Nick name: " << contact.GetNickName() << std::endl;
	std::cout << "Phone number: " << contact.GetPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.GetDarkestSecret() << std::endl;
}

void PhoneBook::add_contact_()
{
	std::string input;
	int index = _contact_index % 8;

	for (int i = 0; i < 5; i += 1)
	{
		try
		{
			std::cout << SequenceMessageTable[i];
			input = read_line_();
			switch (i)
			{
				case 0:
					contacts_[index].SetFirstName(input);
					break;
				case 1:
					contacts_[index].SetLastName(input);
					break;
				case 2:
					contacts_[index].SetNickName(input);
					break;
				case 3:
					contacts_[index].SetPhoneNumber(input);
					break;
				case 4:
					contacts_[index].SetDarkestSecret(input);
					break;
			}
		}
		catch (const std::exception &e)
		{
			std::cout << "Invalid input!" << std::endl;
			i -= 1;
		}
	}
	_contact_index++;
}

void PhoneBook::search_contact_() const
{
	try
	{
		int index;
		std::string input;

		print_minimal_info_();
		std::cout << "Enter index: ";
		input = read_line_();
		if (input.length() != 1)
		{
			throw std::exception();
		}
		if (input[0] < '0'|| input[0] > '7')
		{
			throw std::exception();
		}
		index = input[0] -= '0';
		if (index >= _contact_index)
		{
			std::cout << "[WAR] No contact!" << std::endl;
		}
		print_detail_info_(contacts_[index]);
	}
	catch (const std::exception &e)
	{
		std::cout << "Invalid index" << std::endl;
		search_contact_();
	}
}

void PhoneBook::run()
{
	std::string command;
	while (true)
	{
		try
		{
			std::cout << "Commands: [ ADD | SEARCH | EXIT ]" << std::endl;
			std::cout << "Enter command: ";
			command = read_line_();
			if (command == "EXIT")
			{
				std::cout << "Bye~" << std::endl;
				break;
			}
			else if (command == "ADD")
				add_contact_();
			else if (command == "SEARCH")
				search_contact_();
			else
				std::cout << "Unknown command" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Invalid Input!" << std::endl;
		}
	}
}
