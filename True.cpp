/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** True cpp
*/

#include "True.hpp"

True::True(std::string name, nts::Tristate value): _name(name), _value(nts::TRUE)
{
}

True::~True()
{
}

nts::Tristate True::compute(std::size_t pin)
{
    return (_value);
}

void True::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void True::dump() const
{

}