#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45),  target("")
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : \
Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : Form(other)
{
	*this = other;
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	this->target = other.getTarget();
	return (*this);
}


void RobotomyRequestForm::action()
{
	srand(time(0));
	if (rand())
		std::cout << "dskdlsdlsdklkdld " << this->target << \
	" has been robotomized succesfuly " << std::endl;
	else
		std::cout << "robotomy failed " << std::endl;
}

void RobotomyRequestForm::setTarget(std::string const target)
{
	this->target = target;
}