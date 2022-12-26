/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 03:50:27 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 04:08:33 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_first_name = "";
	_last_name = "";
	_nick_name = "";
	_phone_number = "";
	_darkest_secret = "";
}

Contact::~Contact() {}

void Contact::SetLastName(std::string last_name)
{
	_last_name = last_name;
}
void Contact::SetNickName(std::string nick_name)
{
	_nick_name = nick_name;
}
void Contact::SetFirstName(std::string first_name)
{
	_first_name = first_name;
}
void Contact::SetPhoneNumber(std::string phone_number)
{
	_phone_number = phone_number;
}
void Contact::SetDarkestSecret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

std::string Contact::GetLastName(void) const
{
	return _last_name;
}
std::string Contact::GetNickName(void) const
{
	return _nick_name;
}
std::string Contact::GetFirstName(void) const
{
	return _first_name;
}
std::string Contact::GetPhoneNumber(void) const
{
	return _phone_number;
}
std::string Contact::GetDarkestSecret(void) const
{
	return _darkest_secret;
}
