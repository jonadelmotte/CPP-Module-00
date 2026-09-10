/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:33:50 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/10 12:13:09 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ex 01 ::
//que des chiffres en phonnumber
//pas de cases vides (\N ' ' (TT TYPES D'ESPAVES))
//ctrl d


#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
                argv[i][j] = (char)toupper(argv[i][j]);
            std::cout << argv[i];
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
