
#include "Dog.hpp"

// Default constructor
Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other)
	:Animal(other)
{
	_brain = new Brain(*other._brain);
	std::cout << getClassName() << " Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}

	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	delete _brain;
	std::cout << getClassName() << " Destructor called" << std::endl;
}

void Dog::makeSound()  const
{
	std::cout <<"Angry " << this->_type << " Noises WOOF" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea) const
{
	if (_brain)
		_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	if (_brain)
		return _brain->getIdea(index);
	return "";
}

std::string Dog::getClassName() const
{
	return "Dog";
}

