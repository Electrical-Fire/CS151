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
}

void Diamond::diamondFound(Diamond &diaObj, sf::Vector2f place, sf::Vector2f diaTile, bool found)
{
    // diaTile.x = rand() %16;
    // diaTile.y = rand() %8;
    // if (diaTile.x == 2 || diaTile.x == 7 || diaTile.x == 13){
    //     diaTile.x += 1;
    // }
    // if(diaTile.y == 2){
    //     diaTile.y += 1;
    // }
    // found = false;
    // // diaTile.x = 0;
    // // diaTile.y = 1;  

    // Needs to accept a integer to see if function has already ran.
    // Replace this with a diamone image
    // sf::RectangleShape Pause(sf::Vector2f(512, 256));
    // Pause.setFillColor(sf::Color::Black);
    // Pause.setPosition(0, 0);f

    // sf::Texture diamond;

    // int exit=trap;
    // std::cout <<exit;
        
}

void Diamond::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(mDiamond, states);
}
void Diamond::setPosition(float x, float y)
{
    mDiamond.setPosition(x,y);
}

