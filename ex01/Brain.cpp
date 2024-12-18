#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}
Brain::Brain(const Brain& brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for(int x =0;x<100;x++)
        ideas[x] = brain.ideas[x];
        
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "Brain assignation operator called" << std::endl;
    for(int x =0;x<100;x++)
        ideas[x] = brain.ideas[x];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
    
}


#endif