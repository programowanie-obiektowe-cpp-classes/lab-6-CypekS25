#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::size_t idx = retval.size(); 
    std::for_each(people.begin(), people.end(), [&](Human& h) {
        h.birthday();                              
        char c = h.isMonster() ? 'n' : 'y'; 
        retval[--idx] = c; // zapis od koñca wektora
    });

    return retval;
}
