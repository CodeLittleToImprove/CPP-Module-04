
#include "Cat.hpp"

// Default constructor
Cat::Cat()
	:_type("undefined")
{
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Parameterized Constructor
Cat::Cat(std::string const &type)
	:_type(type)
{
	std::cout << getClassName() << " Parameterized Constructor called" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other)
	:_type(other._type)
{
	std::cout << getClassName() << " Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << getClassName() << " Destructor called" << std::endl;
}

void Cat::makeSound()
{
	std::cout <<"Angry Animal " << this->_type << " Noises" << std::endl;
}

std::string Cat::getType() const
{
	return this->_type;
}

std::string Cat::getClassName() const
{
	return "Animal";
}

