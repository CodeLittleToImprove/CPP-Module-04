
#include "Animal.hpp"

// Default constructor
Animal::Animal()
	:_type("Animal")
{
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Parameterized Constructor
Animal::Animal(std::string const &type)
	:_type(type)
{
	std::cout << getClassName() << " Parameterized Constructor called" << std::endl;
}

// Copy constructor
Animal::Animal(const Animal &other)
	:_type(other._type)
{
	std::cout << getClassName() << " Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << getClassName() << " Destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout <<"Angry " << this->_type << " Generic Noises" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}

std::string Animal::getClassName() const
{
	return "Animal";
}

