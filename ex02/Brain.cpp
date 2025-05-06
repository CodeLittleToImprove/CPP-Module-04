
#include "Brain.hpp"

// Default constructor
Brain::Brain()
{
	std::cout << getClassName() << " Default constructor called" << std::endl;
}

// Copy constructor
Brain::Brain(const Brain &other)
{
	std::cout << getClassName() << " Copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
}

// Copy Assignment operator overload
Brain &Brain::operator=(const Brain &other)
{
	std::cout << getClassName() << " Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

// Destructor
Brain::~Brain(void)
{
	std::cout << getClassName() << " Destructor called" << std::endl;
}


void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	else if (index >= 100)
		std::cout << "Over my max brain capacity X_X" << std::endl;
	else
		std::cout << "You can't have a negative idea right?" << std::endl;
}

const std::string &Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->_ideas[index];
	else
	{
		static const std::string empty = "";
		std::cout << "if my brain would work like C I would a segmentfault because of invalid idea index.\n";
		return empty;
	}
}

std::string Brain::getClassName() const
{
	return "Brain";
}

