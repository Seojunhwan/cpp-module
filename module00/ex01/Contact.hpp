/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 03:50:24 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 04:08:37 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string _last_name;
		std::string _nick_name;
		std::string _first_name;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		Contact();
		~Contact();

		void SetLastName(std::string last_name);
		void SetNickName(std::string nick_name);
		void SetFirstName(std::string first_name);
		void SetPhoneNumber(std::string phone_number);
		void SetDarkestSecret(std::string darkest_secret);

		std::string GetLastName(void) const;
		std::string GetNickName(void) const;
		std::string GetFirstName(void) const;
		std::string GetPhoneNumber(void) const;
		std::string GetDarkestSecret(void) const;
};

#endif
