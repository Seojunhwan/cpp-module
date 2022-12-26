/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:49:33 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 04:09:04 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
  private:
    int _contact_index;
    Contact contacts_[8];
    std::string read_line_() const;
    std::string resizing_(std::string str) const;
    void print_minimal_info_() const;
    void print_detail_info_(Contact contact) const;
    void add_contact_();
    void search_contact_() const;

  public:
    PhoneBook();
    ~PhoneBook();

    void run();
};

#endif
