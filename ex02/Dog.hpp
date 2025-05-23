#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound()  const;
		std::string getIdea(int index) const; //optional
		void setIdea(int index, const std::string &idea) const; //optional
		std::string getClassName() const;
};
#endif