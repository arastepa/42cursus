#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137),  target("")\
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : \
Form("ShrubberyCreationForm", 145, 137), target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form(other), \
target(other.getTarget())
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	this->target = other.getTarget();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void ShrubberyCreationForm::setTarget(std::string const target)
{
	this->target = target;
}

void ShrubberyCreationForm::action()
{
	std::ofstream f(this->target.c_str(), std::ofstream::out);
	if (!f.is_open())
	{
		std::cout << "something went wrong" << std::endl;
		return ;
	}
	f << ASCII_TREE;
	f.close();
	std::cout << "file created" << std::endl;	
}
