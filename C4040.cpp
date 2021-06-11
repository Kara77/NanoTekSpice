/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4040 cpp
*/

#include "C4040.hpp"

C4040::C4040()
{
}

C4040::~C4040()
{
}

nts::Tristate C4040::compute(std::size_t pin)
{
    return (nts::TRUE);
}

void C4040::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4040::dump() const
{

}