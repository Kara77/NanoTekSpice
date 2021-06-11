/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4069 hpp
*/

#ifndef C4069_HPP_
#define C4069_HPP_

#include <map>
#include "IComponent.hpp"

class C4069 : public nts::IComponent {
	
	public:
		C4069();
		~C4069();

		nts::Tristate inverter_gate(nts::Tristate a);
		nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;

	protected:
		std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;

	private:
};

#endif /* !C4069_HPP_ */
