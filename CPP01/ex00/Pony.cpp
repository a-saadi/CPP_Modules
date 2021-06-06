/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:38:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/06 12:25:14 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string& arg): _name(arg)
{
}

Pony::~Pony()
{
}

std::string Pony::getNamePony()
{
	return this->_name;
}