#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
		virtual std::string getClassName() const;
};
#endif