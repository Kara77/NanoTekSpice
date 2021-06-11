/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** Output cpp
*/

#include "Output.hpp"

Output::Output(std::string name) : _name(name)
{
}

Output::~Output()
{
}

nts::Tristate Output::compute(std::size_t pin)
{
    return (_my_links[1].first->compute(_my_links[1].second));
}

void Output::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void Output::dump() const
{

}