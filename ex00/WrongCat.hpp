#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongCat();
		WrongCat(std::string const &type);
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);
		~WrongCat();
		void makeSound()  const;
		std::string getType() const;
		std::string getClassName() const;
};
#endif