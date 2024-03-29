/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:58:37 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/21 01:37:51 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP


#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class AForm
{
    private:
        std::string const name;
        bool _signed;
        int const grade_s;
        int const grade_e;
    public:
        AForm();
        AForm(std::string const name ,int const grade_s, int const grade_e);
        AForm(AForm const &copy);
        AForm &operator=(AForm const &copy);
        virtual ~AForm();
        std::string const getName() const;
        bool getSigned() const;
        int getGrade_s() const;
        int getGrade_e() const;
        void beSigned(Bureaucrat bureaucrat);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};


#endif
