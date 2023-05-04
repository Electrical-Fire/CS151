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
}

void Diamond::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(mDiamond, states);
}
void Diamond::setPosition(float x, float y)
{
    mDiamond.setPosition(x,y);
}

