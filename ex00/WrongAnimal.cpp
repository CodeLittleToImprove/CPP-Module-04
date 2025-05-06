
#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal()
	:_type("WrongAnimal")
{
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Parameterized Constructor
WrongAnimal::WrongAnimal(std::string const &type)
	:_type(type)
{
	std::cout << getClassName() << " Parameterized Constructor called" << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other)
	:_type(other._type)
{
	std::cout << getClassName() << " Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << getClassName() << " Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << this->_type << " genericNoises" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

std::string WrongAnimal::getClassName() const
{
	return "WrongAnimal";
}

