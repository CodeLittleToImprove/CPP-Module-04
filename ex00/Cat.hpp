#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string const &type);
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();
		void makeSound() const;
		std::string getClassName() const;
};
#endif