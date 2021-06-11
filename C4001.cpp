/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4001 cpp
*/

#include "C4001.hpp"

C4001::C4001()
{
}

C4001::~C4001()
{
}

nts::Tristate C4001::nor_gate(nts::Tristate a, nts::Tristate b)
{
    if (a == nts::FALSE && b == nts::FALSE)
        return (nts::TRUE);
    else if (a == nts::UNDEFINED || b == nts::UNDEFINED)
        return (nts::UNDEFINED);
    else
        return (nts::FALSE);
}

nts::Tristate C4001::compute(std::size_t pin)
{
    if (pin == 3) {
        return (nor_gate(_my_links[1].first->compute(_my_links[1].second), _my_links[2].first->compute(_my_links[2].second)));
    } else if (pin == 4) {
        return (nor_gate(_my_links[5].first->compute(_my_links[5].second), _my_links[6].first->compute(_my_links[6].second)));
    } else if (pin == 10) {
        return (nor_gate(_my_links[8].first->compute(_my_links[8].second), _my_links[9].first->compute(_my_links[9].second)));
    } else if (pin == 11) {
        return (nor_gate(_my_links[12].first->compute(_my_links[12].second), _my_links[13].first->compute(_my_links[13].second)));
    }
    return (nts::UNDEFINED);
}

void C4001::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4001::dump() const
{

}