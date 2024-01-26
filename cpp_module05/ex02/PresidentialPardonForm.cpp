/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:23:20 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/21 01:23:20 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Default", 25, 5)
{
    target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): AForm("PresidentialPardonForm", 25, 5)
{
    target = copy.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
    target = copy.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == true)
    {
        if (executor.getGrade() <= this->getGrade_e())
            std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
        else
        {
            std::cout << this->target << " has been pardoned unsuccessfully" << std::endl;
            throw AForm::GradeTooLowException();
        }
    }
    else
        std::cout << this->target << "isn't signed" << std::endl;
}