/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:48:04 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 21:16:17 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _rawBits;
        static const int _fractionalBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &obj);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif