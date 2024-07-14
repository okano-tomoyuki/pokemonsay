#include <iostream>
#include <string>

#include "pokemonsay.hpp"

int main()
{
    constexpr int POKEMON_NUM = 151;
    for (auto i = 0; i < POKEMON_NUM; i++)
    {
        Pokemonsay::show((Pokemonsay::EnName)i);
    }
}