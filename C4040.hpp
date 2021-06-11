/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4040 hpp
*/

#ifndef C4040_HPP_
#define C4040_HPP_

#include <map>
#include "IComponent.hpp"

class C4040 : public nts::IComponent {
	
	public:
		C4040();
		~C4040();

        nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;

	protected:
		std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;

	private:
};

#endif /* !C4040_HPP_ */
