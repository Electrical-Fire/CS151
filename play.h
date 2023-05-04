#ifndef PLAY_H
#define PLAY_H

#include <SFML/Graphics.hpp>
#include <ctime>
#include <unistd.h>
#include <iostream>
#include <string>
#include<cstdlib>
#include "game.h"
#include "score.h"
#include "diamond.h"
#include "ctime"
    

    //void move(sf::RenderWindow &window,sf::Event &event,int &xPos,int &yPos,int gridSize,int &stepcount);

class playGame //: sf::Drawable
{
    public:
    playGame();
    void runGameJones(MyTiles &MapObj, Diamond &diaObj, int score, sf::RenderWindow &window,
                             Character &Jones, int &trap, sf::Event &event, sf::Clock dtClock, int stepcount, int gridLength, int gridWidth);

    private:    //I need to create variables so I don;t need to use main
        // sf::Event m_event;
        // int m_Gridsize;
        // int m_stepcount;
        // int mTrap;
        // Dialogue Dia1;
        MyTiles map1;
        bool found;
        // bool visible;
        
};


#endif
