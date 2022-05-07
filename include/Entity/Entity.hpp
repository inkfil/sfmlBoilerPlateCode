/*
    Purpose: Entity class, base class to all other entities such as player, enemy, ....
    Classe(s): Entity.
    Author(s): inkfil.
    Date Added: 22-04-2022
*/

#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <include/Shinigami.hpp>

class Entity{
    public:
        Entity();

    private:
        int entityId;
        int entityType;
};

#endif