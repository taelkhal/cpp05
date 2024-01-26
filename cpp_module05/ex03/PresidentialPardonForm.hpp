/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:22:01 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/21 01:22:01 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>


class  PresidentialPardonForm: public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);
        virtual ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};

#endif