/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4069.cpp
*/

#include "C4069.hpp"

C4069::C4069()
{
}

C4069::~C4069()
{
}

nts::Tristate C4069::inverter_gate(nts::Tristate a)
{
    if (a == 0)
        return (nts::FALSE);
    else if (a == 1)
        return (nts::TRUE);
    else
        return (nts::UNDEFINED);
}

nts::Tristate C4069::compute(std::size_t pin)
{
    if (pin == 2) {
        return (inverter_gate(_my_links[1].first->compute(_my_links[1].second)));
    } else if (pin == 4) {
        return (inverter_gate(_my_links[3].first->compute(_my_links[3].second)));
    } else if (pin == 6) {
        return (inverter_gate(_my_links[5].first->compute(_my_links[5].second)));
    } else if (pin == 8) {
        return (inverter_gate(_my_links[9].first->compute(_my_links[9].second)));
    } else if (pin == 10) {
        return (inverter_gate(_my_links[11].first->compute(_my_links[11].second)));
    } else if (pin == 12) {
        return (inverter_gate(_my_links[13].first->compute(_my_links[13].second)));
    }
    return (nts::UNDEFINED);
}

void C4069::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4069::dump() const
{

}