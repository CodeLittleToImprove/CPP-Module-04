
#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal()
	:_type("AAnimal")
{
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Copy constructor
AAnimal::AAnimal(const AAnimal &other)
	:_type(other._type)
{
	std::cout << getClassName() << " Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// Destructor
AAnimal::~AAnimal(void)
{
	std::cout << getClassName() << " Destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}

std::string AAnimal::getClassName() const
{
	return "AAnimal";
}

