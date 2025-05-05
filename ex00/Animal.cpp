
#include "Animal.hpp"

// Default constructor
Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Animal::Animal(const Animal &other)
	:_atribute(other._atribute)
{
	std::cout << "Copy constructor called" << std::endl;
	// this->member = other.member;
}

// Copy Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	// if (this != &other)
	// 	this->member = other.member();
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string Animal::getType()
{
	return this->type;
}

std::string Animal::getClassName() const
{
	return "Animal";
}

