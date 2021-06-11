/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** Parser cpp
*/

#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <cstddef>
#include <vector>
#include <utility>
#include <map>
#include "Parser.hpp"
#include "Input.hpp"
#include "Output.hpp"
#include "Clock.hpp"
#include "True.hpp"
#include "False.hpp"
#include "C4001.hpp"
#include "C4008.hpp"
#include "C4011.hpp"
#include "C4013.hpp"
#include "C4017.hpp"
#include "C4030.hpp"
#include "C4040.hpp"
#include "C4069.hpp"
#include "C4071.hpp"
#include "C4081.hpp"
#include "C4094.hpp"
#include "C4514.hpp"
#include "C4081.hpp"

Parser::Parser()
{
}

Parser::~Parser()
{
}

void Parser::display_result() 
{
    for (auto i : _all_output)
        std::cout << i->_name << "=" << i->compute() << std::endl;
}

std::vector <Output *> Parser::getOutput() const
{
    return (_all_output);
}

int Parser::getNumber() const
{
    return (_i);
}

/*void Parser::set_my_clock(std::string user_command)
{
    Clock *my_clock = new Clock(_after_space);
    _all_component.insert(std::make_pair(_after_space, my_clock));
    if (_before_equal.compare(my_clock->getName()) == 0) {
        if (_after_equal == "1") {
            my_clock->setValue(nts::TRUE);
        } else if (_after_equal == "0") {
            my_clock->setValue(nts::FALSE);
        } else
            std::cout << "Your value must be 1, 0 or -1" << std::endl;
    } else if (user_command == "simulate") {
        my_clock->inverse_state(my_clock->getValue());    
    } else
        std::cout << "Wrong parameter" << std::endl; 
}*/

void Parser::set_my_input()
{
    Input *my_input = new Input(_after_space);
    _all_component.insert(std::make_pair(_after_space, my_input));
    if (_before_equal.compare(my_input->getName()) == 0) {
        if (_after_equal == "1") {
            my_input->setValue(nts::TRUE);
        } else if (_after_equal == "0") {
            my_input->setValue(nts::FALSE);
        } else if (_after_equal == "-1") {
            my_input->setValue(nts::UNDEFINED);
        } else
            std::cout << "Your value must be 1, 0 or -1" << std::endl;
    } else
        std::cout << "Wrong parameter" << std::endl; 
}

void Parser::read_my_file(std::ifstream *file, char *argv[], std::string user_command) 
{
	while (getline(*file, _line)) {
        if (_line.find_first_of(" \t") != std::string::npos) {
            _found_space = _line.find_first_of(" \t");
            _found_last_space = _line.find_last_of(" \t");
            _found_endline = _line.find_last_of("\n");
            _before_space = _line.substr(0, _found_space);
            _after_space = _line.substr(_found_last_space + 1, _found_endline);
                if (_before_space == "input") {
                    _j++;
                    if (argv[_i] != NULL) {
                        _my_char = argv[_i];
                        _i++;
                        _found_equal = _my_char.find_first_of("=");
                        _before_equal = _my_char.substr(0, _found_equal);
                        _after_equal = _my_char.substr(_found_equal + 1, _found_endline);
                        set_my_input();
                    }
                } else if (_before_space == "output") {
                    _all_component.insert(std::make_pair(_after_space, new Output(_after_space)));
                    _all_output.push_back((Output *)_all_component[_after_space]);
                } else if (_before_space == "clock") {
                    _all_component.insert(std::make_pair(_after_space, new Clock(_after_space)));
                    /*    if (argv[_i] != NULL) {
                            _my_char = argv[_i];
                            _i++;
                            _found_equal = _my_char.find_first_of("=");
                            _before_equal = _my_char.substr(0, _found_equal);
                            _after_equal = _my_char.substr(_found_equal + 1, _found_endline);
                            set_my_clock(user_command);
                        }*/
                } else if (_before_space == "true") {
                    _all_component.insert(std::make_pair(_after_space, new True(_after_space)));
                } else if (_before_space == "false") {
                    _all_component.insert(std::make_pair(_after_space, new False(_after_space)));
                } else if (_before_space == "4001") {
                    _all_component.insert(std::make_pair(_after_space, new C4001()));
                } else if (_before_space == "4011") {
                    _all_component.insert(std::make_pair(_after_space, new C4011()));
                } else if (_before_space == "4030") {
                    _all_component.insert(std::make_pair(_after_space, new C4030()));
                } else if (_before_space == "4071") {
                    _all_component.insert(std::make_pair(_after_space, new C4071()));
                } else if (_before_space == "4081") {
                    _all_component.insert(std::make_pair(_after_space, new C4081()));
                } else if (_before_space == "4069") {
                    _all_component.insert(std::make_pair(_after_space, new C4069()));
                } else if (_line.find_first_of(":") != std::string::npos) {
                    _found_colon = _before_space.find_first_of(":");
                    _found_second_colon = _after_space.find_last_of(":");
                    _before_colon = _before_space.substr(0, _found_colon);
                    _after_colon = _before_space.substr(_found_colon + 1, _found_space);
                    _before_second_colon = _after_space.substr(0, _found_second_colon);
                    _after_second_colon = _after_space.substr(_found_second_colon + 1);
                    _all_component[_before_colon]->setLink(atoi(_after_colon.c_str()), *_all_component[_before_second_colon], atoi(_after_second_colon.c_str()));
                    if (_i < _j) {
                        std::cout << "Invalid number of argument" << std::endl;
                        exit(84);
                    }
                    printf("KO\n");
                    _all_component[_before_second_colon]->setLink(atoi(_after_second_colon.c_str()), *_all_component[_before_colon], atoi(_after_colon.c_str()));
                    printf("OK\n");
                }
        }
    }
    (*file).close();
    if (user_command != "simulate")
        display_result();
}