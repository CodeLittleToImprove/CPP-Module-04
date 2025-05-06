#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();
		void makeSound() const;
		std::string getIdea(int index) const; //optional
		void setIdea(int index, const std::string &idea) const; //optional
		std::string getClassName() const;
};
#endif