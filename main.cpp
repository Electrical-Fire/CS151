#include "game.h"
#include "character.h"
#include "score.h"
#include "play.h"
#include <iostream>
 
 
int main()
{
     srand(time(NULL));

    // create the window
    sf::Clock dtClock;
    // float dt = 0.f;
    // Clock used to help fix the input
    sf::RenderWindow window(sf::VideoMode(512, 256), "Tilemap");

    // Creating a shape that can be used
    Character jones;
    Diamond diamond;
    
    // define the level with an array of tile indices
    sf::View view;
    view.setSize(512, 256);
    view.setCenter(window.getSize().x / 2.f, window.getSize().y / 2.f);


    // int random = rand() %128;
    // std::cout<<random;
    int trap2 = 0;
    int stepcount =0;

    // std::string message = "Score: ";
    // int score = 0;
    // Score showScore("OpenSans-Regular.ttf", message, score, 416, 0);
    // Dialogue pit("OpenSans-Regular.ttf", message, 0, 0);

    // const int level[] =
    // {
    //     4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    //     4, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 2, 4, 0, 0, 0,
    //     1, 1, 4, 4, 4, 4, 4, 9, 3, 3, 3, 31, 3, 35, 3, 3,
    //     23, 1, 0, 4, 2, 3, 3, 3, 3, 13, 1, 1, 1, 4, 4, 4,
    //     4, 1, 1, 4, 3, 3, 60, 25, 4, 55, 1, 1, 1, 2, 4, 4,
    //     4, 4, 1, 41, 3, 4, 18, 2, 4, 4, 1, 1, 1, 1, 2, 4,
    //     2, 4, 1, 4, 3, 4, 26, 2, 2, 4, 1, 1, 1, 1, 1, 1,
    //     4, 4, 1, 4, 3, 2, 2, 2, 4, 4, 4, 4, 1, 1, 1, 1,
    // };

        const int level[] =
    {
        4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4, 4, 4,
        55, 55, 55, 55, 55, 4, 4, 3, 4, 4, 55, 55, 55, 55, 55, 55,
        4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 23, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 23, 4, 4,
        4, 4, 23, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 23, 4, 4,
        4, 4, 23, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 23, 4, 4,
        4, 4, 23, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 23, 4, 4,
    };

    
    // create the tilemap from the level definition

    // Need to move this


    float gridLength = 32;
    float gridWidth = 32;
    // float viewspeed = 1;
    MyTiles map;

    if (!map.load("rpg_textures.png", sf::Vector2u(gridLength, gridWidth), level, 16, 8))
    {
        return -1;
    }

    // jones.setPosition(xJones, yJones);
    /* The setOrigin function sets the origin's 'x' coordinate to 75% of the sprite's size, and it's y coorinate
        to zero. This setup gets the character positioned at the center of the squares, and staying in the same
        spot when turning around. */
    // jones.setOrigin(sf::Vector2f(jones.getTexture()->getSize().x * 0.75, 0));
    // std::cout<<"Origin: "<<jones.getOrigin().x<<", "<< jones.getOrigin().y<<std::endl;

    sf::RectangleShape Pause(sf::Vector2f(512, 256));
    Pause.setFillColor(sf::Color::Black);
    Pause.setPosition(0, 0);

    // run the main loop
        sf::Event event;
        playGame test;

        int score = 0; // The scoreboard begins at 0
        //Runs the game
        test.runGameJones(map,diamond,score,window,jones,trap2,event,dtClock,stepcount,gridLength,gridWidth);     

    //std::cout<<tileNum;
    return 0;

   }
