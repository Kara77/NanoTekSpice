/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4094 cpp
*/

#include "C4094.hpp"

C4094::C4094()
{
}

C4094::~C4094()
{
}

nts::Tristate C4094::compute(std::size_t pin)
{
    return (nts::TRUE);
}

void C4094::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4094::dump() const
{

}