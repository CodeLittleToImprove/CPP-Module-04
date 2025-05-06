
#include "Cat.hpp"

// Default constructor
Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other)
	:AAnimal(other)
{
	_brain = new Brain(*other._brain);
	std::cout << getClassName() << " Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}

	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	delete _brain;
	std::cout << getClassName() << " Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout <<"Angry " << this->_type << " Noises MEOW" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea) const
{
	if (_brain)
		_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	if (_brain)
		return _brain->getIdea(index);
	return "";
}

std::string Cat::getClassName() const
{
	return "Cat";
}

