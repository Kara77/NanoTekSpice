/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** Chipset 4081 cpp
*/

#include "C4081.hpp"

C4081::C4081()
{
}

C4081::~C4081()
{
}

nts::Tristate C4081::and_gate(nts::Tristate a, nts::Tristate b)
{
    if (a == nts::TRUE && b == nts::TRUE)
        return (nts::TRUE);
    else if (a == nts::UNDEFINED || b == nts::UNDEFINED)
        return (nts::UNDEFINED);
    else
        return (nts::FALSE);
}

nts::Tristate C4081::compute(std::size_t pin)
{
    if (pin == 3) {
        return (and_gate(_my_links[1].first->compute(_my_links[1].second), _my_links[2].first->compute(_my_links[2].second)));
    } else if (pin == 4) {
        return (and_gate(_my_links[5].first->compute(_my_links[5].second), _my_links[6].first->compute(_my_links[6].second)));
    } else if (pin == 10) {
        return (and_gate(_my_links[8].first->compute(_my_links[8].second), _my_links[9].first->compute(_my_links[9].second)));
    } else if (pin == 11) {
        return (and_gate(_my_links[12].first->compute(_my_links[12].second), _my_links[13].first->compute(_my_links[13].second)));
    }
    return (nts::UNDEFINED);
}

void C4081::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4081::dump() const
{

}