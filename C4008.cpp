/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4008 cpp
*/

#include "C4008.hpp"

C4008::C4008()
{
}

C4008::~C4008()
{
}

nts::Tristate C4008::compute(std::size_t pin)
{
    return (nts::TRUE);
}

void C4008::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4008::dump() const
{

}
