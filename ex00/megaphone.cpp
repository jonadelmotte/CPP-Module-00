/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:33:50 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/09 14:20:20 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ne pas mettre les espaces entre les args
//ex 01 ::
//que des chiffres en phonnumber
//pas de cases vides (\N ' ' (TT TYPES D'ESPAVES))
//ctrl d
//display tt les contacts quand on marque SEARCH
//puis display tt les info de l'index


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
            if (argv[i] != NULL)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}