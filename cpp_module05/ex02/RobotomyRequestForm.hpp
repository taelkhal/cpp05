/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:10:53 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/21 01:10:53 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm: public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(RobotomyRequestForm const &copy);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);
        virtual ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};

#endif