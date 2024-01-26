/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:50:53 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/22 16:50:53 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern()
{
}

Intern::Intern(std::string const name)
{
    (void)name;
}

Intern::Intern(Intern const &copy)
{
    (void)copy;
}

Intern &Intern::operator=(Intern const &copy)
{
    (void)copy;
    return (*this);
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string form, std::string target)
{
    int form_i = 0;
    AForm *f;
    std::string forms[3] = {"shrubbery creation","robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (form == forms[i])
            form_i = i;
    }
    switch (form_i)
    {
        case 0:
            f = new ShrubberyCreationForm(target);
            break;
        case 1:
            f = new RobotomyRequestForm(target);
            break;
        case 2:
            f = new PresidentialPardonForm(target);
            break;
        default:
            std::cout << "Form not found" << std::endl;
    }
    std::cout << "Intern creates " << form << std::endl;
    return (f);
}