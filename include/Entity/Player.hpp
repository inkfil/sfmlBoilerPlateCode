/*
    Purpose: configuration attributes of Game.
    Classe(s): None.
    Author(s): inkfil.
    Date Added: 22-04-2022
*/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <include/Shinigami.hpp>

class Player: public Entity{
    public:
        Player();

    private:
        int playerId;
        int playerType;
};

#endif