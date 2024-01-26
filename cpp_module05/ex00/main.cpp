/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:16:32 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/25 00:52:52 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("b", 3);
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }    
}