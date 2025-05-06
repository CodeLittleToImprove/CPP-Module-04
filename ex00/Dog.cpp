
#include "Dog.hpp"

// Default constructor
Dog::Dog()
	:_type("Dog")
{
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Parameterized Constructor
Dog::Dog(std::string const &type)
	:_type(type)
{
	std::cout << getClassName() << " Parameterized Constructor called" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other)
	:Animal(other)
{
	std::cout << getClassName() << " Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	std::cout << getClassName() << " Destructor called" << std::endl;
}

void Dog::makeSound()  const
{
	std::cout <<"Angry " << this->_type << " Noises WOOF" << std::endl;
}

std::string Dog::getType() const
{
	return this->_type;
}

std::string Dog::getClassName() const
{
	return "Dog";
}

