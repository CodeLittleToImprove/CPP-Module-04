
#include "Cat.hpp"

// Default constructor
Cat::Cat()
{
	_type = "Cat";
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other)
	:Animal(other)
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

void Cat::makeSound() const
{
	std::cout <<"Angry " << this->_type << " Noises MEOW" << std::endl;
}

std::string Cat::getClassName() const
{
	return "Cat";
}

