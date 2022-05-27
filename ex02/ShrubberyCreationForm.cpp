/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:52:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:45 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/***********************
*	Constructors & Destructor
***********************/

ShrubberyCreationForm::ShrubberyCreationForm(void):
	AForm("Shrubbery Creation Form", 145, 137),
	target("Random Target")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
	AForm("Shrubbery Creation Form", 145, 137),
	target(src.target)
{
	*this = src;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	AForm("Shrubbery Creation Form", 145, 137),
	target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	this->target = src.target;
	return (*this);
}

/***********************
*	Boolean Operators
***********************/

/***********************
*	Arithmetic Operators
***********************/

/***********************
*	Stream Operators
***********************/

/***********************
*	Getter & Setters
***********************/

/***********************
*	Methods
***********************/

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade() || !this->isSigned())
		throw GradeTooLowExeption();
	std::ofstream	outfile(this->target + "_shrubbery"); //Fichier .replace
}