/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:30:08 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/17 10:51:14 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STOI_H
# define STOI_H

#include <sstream>
#include <iostream>

int stoi(const std::string & s);
bool is_num(const std::string s);

#endif