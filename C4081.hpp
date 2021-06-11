/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4081 hpp
*/

#ifndef C4081_HPP_
#define C4081_HPP_

#include <map>
#include "IComponent.hpp"

class C4081 : public nts::IComponent {

	public:
		C4081();
		~C4081();

		nts::Tristate and_gate(nts::Tristate a, nts::Tristate b);
        nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;
		
	protected:
		std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;

	private:
};

#endif /* !C4081_HPP_ */
