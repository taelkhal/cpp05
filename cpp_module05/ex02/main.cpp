/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:35:03 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/21 01:35:03 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() 
{
    try
    {
        Bureaucrat bureaucrat("Bureaucrat", 4);
        RobotomyRequestForm robotomyForm("John Doe");
        // PresidentialPardonForm pardonForm("Jane Doe");
        // ShrubberyCreationForm shrubberyForm("taha");

        // shrubberyForm.beSigned(bureaucrat);
        robotomyForm.beSigned(bureaucrat);
        // pardonForm.beSigned(bureaucrat);

        // shrubberyForm.execute(bureaucrat);
        robotomyForm.execute(bureaucrat);
        // pardonForm.execute(bureaucrat);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}