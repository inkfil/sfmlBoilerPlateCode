/*
    Purpose: To include all Common Header files.
    Classe(s): Enemy.
    Author(s): inkfil.
    Date Added: 22-04-2022
*/

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <include/Shinigami.hpp>

class Enemy: public Entity{
    public:
        Enemy();

    private:
        int enemyId;
        int enemyType;
};

#endif