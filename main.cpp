#include "game.h"
#include "character.h"
#include "dialogue.h"
#include "play.h"
#include <iostream>

int main()
{

    // create the window
    // Clock used to help fix the input

    sf::Clock dtClock;
    sf::RenderWindow window(sf::VideoMode(512, 256), "A Walk in the Park");

    int trap2 = 0;
    int stepcount = 0;

    playGame Adventure;
    // Runs the game
    Adventure.runGameJones(window, trap2, dtClock, stepcount);

    return 0;
}
