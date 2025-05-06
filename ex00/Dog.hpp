#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	protected:
		std::string	_type;
	public:
		Dog();
		Dog(std::string const &type);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound()  const;
		std::string getType() const;
		std::string getClassName() const;
};
#endif