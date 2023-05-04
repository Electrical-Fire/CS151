#ifndef DIAMOND_H
#define DIAMOND_H

#include <SFML/Graphics.hpp>
#include <ctime>
#include <unistd.h>
#include <iostream>
#include <string>
#include<cstdlib>
#include "character.h"

class Diamond : public sf::Sprite
{
    public:
        Diamond(); //Default Constructor
        // virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
        // Increments the score and displays diamond visual effect when Jones lands on a selected square
        void draw(sf::RenderTarget &target, sf::RenderStates states) const;
        void setPosition(float x, float y);

    private:
        sf::Sprite mDiamond;
        sf::Texture mTexture;
        
};

#endif