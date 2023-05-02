#include "diamond.h"

Diamond::Diamond()
{
    if (!mTexture.loadFromFile("Diamond.png")) // Gets the texture for the file
    {
        std::cout << "Error opening file\n";
        exit(1);
    }
    mDiamond.setTexture(mTexture); // sets the texture

    sf::Vector2f Position;
    Position.x = 0;
    Position.y = 0;
    mDiamond.setPosition(Position); 
    mDiamond.setScale(0.5, 0.5);  
    mDiamond.setOrigin(50, 50);
    // set the origin at the dead center
    // mDiamond.setOrigin()
    found = false;
    // visible = false;
}

void Diamond::DiamondFound(Diamond &diaObj, sf::Vector2f place)
{
    // Needs to accept a integer to see if function has already ran.
    // Replace this with a diamone image
    // sf::RectangleShape Pause(sf::Vector2f(512, 256));
    // Pause.setFillColor(sf::Color::Black);
    // Pause.setPosition(0, 0);f

    // sf::Texture diamond;

    // int exit=trap;
    // std::cout <<exit;
        sf::Vector2f diaTile; 
        // diaTile.x = 7;
        // diaTile.y = 0;
        // diaTile.x = rand() %16;
        // diaTile.y = rand() %8;
        if (diaTile.x == 2 || diaTile.x == 7 || diaTile.x == 13){
            diaTile.x += 1;
        }
        if(diaTile.y == 2){
            diaTile.y += 1;
        }

        // diaTile.x = 5;
        // diaTile.y = 5;

        if(place == diaTile)
        // needs to accept a spot; This is where a random spot is selected!

            // I want to make a diamond appear visually for 1-2 seconds on the square Jones is on (place).
            // Look at how Jones Position was initialized

            // // diaTile.x = rand() %16;
            // // diaTile.y = rand() %8;
            // // diaTile.x = 5;
            // // diaTile.y = 5;
            // if (diaTile.x == 2 || diaTile.x == 7 || diaTile.x == 13){
            //     diaTile.x += 1;
            // }
            // if(diaTile.y == 2){
            //     diaTile.y += 1;
            // }
            diaObj.setPosition ((diaTile.x * 32)+16, (diaTile.y * 32)+16);
            // window.draw(diaObj);
        }


void Diamond::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(mDiamond, states);
}
void Diamond::setPosition(float x, float y)
{
    mDiamond.setPosition(x,y);
}

