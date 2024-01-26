/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:08:56 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/22 17:08:56 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
int main()
{
    try
    {
        Bureaucrat u("hhh", 14);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf->beSigned(u);
		rrf->execute(u);
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}