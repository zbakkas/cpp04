#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    
}
WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal)
{
    type = wronganimal.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
    type = wronganimal.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{

}


std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"no sound\n";
}