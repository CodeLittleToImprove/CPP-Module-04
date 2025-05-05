#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Cat
{
	protected:
		std::string	_type;
	public:
		Cat();
		Cat(std::string const &type);
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		virtual ~Cat();
		virtual void makeSound();
		std::string getType() const;
		virtual std::string getClassName() const;
};
#endif