/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:11:20 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/21 01:11:20 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Default", 72, 45)
{
    target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy): AForm("RobotomyRequestForm", 72, 45)
{
    target = copy.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
    target = copy.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == true)
    {
        if (executor.getGrade() <= this->getGrade_e())
        {
            std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
        }
        else
        {
            std::cout << this->target << " has been robotomized unsuccessfully 50% of the time" << std::endl;
            throw AForm::GradeTooLowException();
        }
    }
    else
        std::cout << this->target << "isn't signed" << std::endl;
}