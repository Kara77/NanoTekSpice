/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4514 hpp
*/

#ifndef C4514_HPP_
#define C4514_HPP_

#include <map>
#include "IComponent.hpp"

class C4514 : public nts::IComponent {
	
	public:
		C4514();
		~C4514();

        nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;

	protected:
		std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;
	
	private:
};

#endif /* !C4514_HPP_ */
