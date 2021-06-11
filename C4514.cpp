/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4514 cpp
*/

#include "C4514.hpp"

C4514::C4514()
{
}

C4514::~C4514()
{
}

nts::Tristate C4514::compute(std::size_t pin)
{
    return (nts::TRUE);
}

void C4514::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4514::dump() const
{

}