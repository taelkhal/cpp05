/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:26:34 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/21 01:40:50 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default", 145, 137)
{
    target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy): AForm("ShrubberyCreationForm", 145, 137)
{
    target = copy.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
    target = copy.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == true)
    {
        if (executor.getGrade() <= this->getGrade_e())
        {
            std::ofstream file;
            std::string name = target + "_shrubbery";
            file.open(name.c_str());
            if (!file.is_open())
                throw std::runtime_error("Error: file open");
            file << "       _-_" << std::endl;
            file << "    /~~   ~~\\" << std::endl;
            file << " /~~         ~~\\" << std::endl;
            file << "{               }" << std::endl;
            file << " \\  _-     -_  /" << std::endl;
            file << "   ~  \\\\ //  ~" << std::endl;
            file << "_- -   | | _- _" << std::endl;
            file << "  _ -  | |   -_" << std::endl;
            file << "      // \\\\" << std::endl;
            file << std::endl;
        }
        else
        {
            std::cout << this->target << " has been shrubbed unsuccessfully" << std::endl;
            throw AForm::GradeTooLowException();
        }
    }
    else
        std::cout << this->target << "isn't signed" << std::endl;
}