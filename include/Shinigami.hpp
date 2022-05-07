/*
    Purpose: To include all Common Header files.
    Classe(s): None.
    Author(s): inkfil.
    Date Added: 22-04-2022
*/

#ifndef SHINIGAMI_HPP
#define SHINIGAMI_HPP

// Standard Headers.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <stdio.h>
#include <stdlib.h>

// SFML Headers.
    // Note: there is a heirarchy [order] to include SFML Headers.
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

// Boost Headers.
    // Boost Log Header.
// #include <boost/log/trivial.hpp>

// cereal Headers

// Shinigami Headers.
#include <include/Core/Core.hpp>
#include <include/Entity/Entity.hpp>
#include <include/Game/Game.hpp>
#include <include/Math/Math.hpp>

#endif