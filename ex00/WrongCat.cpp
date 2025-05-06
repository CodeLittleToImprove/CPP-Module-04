
#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other)
	:WrongAnimal(other)
{
	std::cout << getClassName() << " Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << getClassName() << " Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << this->_type << " Noises WOEM" << std::endl;
}

std::string WrongCat::getType() const
{
	return this->_type;
}

std::string WrongCat::getClassName() const
{
	return "WrongCat";
}

