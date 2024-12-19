
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
  

int main()
{
	int x =20;
	Animal *animal[x];
	int	i = 0;
	std::cout <<"///////////////////\n"<< std::endl;
	
	while (i < x)
	{
		if (i < x/2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		++i;
	}

	std::cout <<"\n//////////////////////////\n\n" <<std::endl;

	i = 0;
	while (i < 20)
	{
		animal[i]->makeSound();
		++i;
	}


	std::cout << "\n////////////////\n\n" << std::endl;

	i = 0;
	while (i < 20)
	{
		delete animal[i];
		++i;
	}
	return 0;
}