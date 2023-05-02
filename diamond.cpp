#include "diamond.h"

Diamond::Diamond()
{
    if (!mTexture.loadFromFile("Diamond.png")) // Gets the texture for the file
    {
        std::cout << "Error opening file\n";
        exit(1);
    }
    mDiamond.setTexture(mTexture); // sets the texture

    found = false;
    visible = false; 

    sf::Vector2f Position;
    Position.x = 0;
    Position.y = 0;
    mDiamond.setPosition(Position); 
    mDiamond.setScale(0.5, 0.5);  
    mDiamond.setOrigin(50, 50);
    // set the origin at the dead center
    // mDiamond.setOrigin()
}

void Diamond::DiamondFound(Diamond &diaObj, sf::Vector2f place, sf::Vector2f diaTile, int xPos, int yPos, sf::RenderWindow &window, Character &jones, int &trap, sf::Event &event)
{
    // Needs to accept a integer to see if function has already ran.
    // Replace this with a diamone image
    // sf::RectangleShape Pause(sf::Vector2f(512, 256));
    // Pause.setFillColor(sf::Color::Black);
    // Pause.setPosition(0, 0);f

    // sf::Texture diamond;

    // int exit=trap;
    // std::cout <<exit;
    if (trap == 0)
    {
        if(place == diaTile)
        {
            found = true;
        }
        // needs to accept a spot; This is where a random spot is selected!
        if (found == true)
        {
            // I want to make a diamond appear visually for 1-2 seconds on the square Jones is on (place).
            // The usleep() function will be used for this.
            // Look at how Jones Position was initialized
            // Outputting infinite times right now, use a boolean found variable to fix that
             
             // This sets the diamond position to the center of the square Jones is on
            diaObj.setPosition( (diaTile.x * 32)+16, (diaTile.y * 32)+16);
            window.draw(diaObj);
            found = false;

            trap = -1;
        }
    }
}


void Diamond::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(mDiamond, states);
}
void Diamond::setPosition(float x, float y)
{
    mDiamond.setPosition(x,y);
}

