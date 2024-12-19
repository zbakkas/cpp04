#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
     std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal)
{
     std::cout << "WrongAnimal copy constructor called" << std::endl;
    type = wronganimal.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    type = wronganimal.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
     std::cout << "WrongAnimal destructor called" << std::endl;
}


std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"no sound\n";
}