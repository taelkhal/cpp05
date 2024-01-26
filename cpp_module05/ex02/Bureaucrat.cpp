/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:54:34 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/22 15:09:50 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name), grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy): name(copy.name), grade(copy.grade)
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
    grade = copy.grade;
    return (*this);
}


std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat Grade too low");
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::incrementGrade()
{
    if (grade > 1)
       grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if (grade < 150)
        grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (out);
}

void Bureaucrat::signForm(AForm &form)
{
    if (form.getSigned() == true)
        std::cout << name << " signed " << form.getSigned() << std::endl;
    else
        std::cout << name << " couldn’t sign " << form.getSigned() << " because " << "garde too low" << std::endl;
}

void Bureaucrat::executeForm(AForm const &form)
{
    if (form.getSigned() == true)
    {
        if (form.getGrade_e() > grade)
            throw AForm::GradeTooLowException();
        std::cout << name << " executed " << form.getSigned() << std::endl;
    }
    std::cout << name << "isn't signed" << std::endl;
}
