#ifndef SCORE_H
#define SCORE_H

#include <SFML/Graphics.hpp>
#include <ctime>
#include <unistd.h>
#include <iostream>
#include <string>
#include<cstdlib>
// #include "button.h"
#include "character.h"

class Score : public sf::Drawable //, public sf::Transformable
{
public:
    Score(); //Default constructor;
    Score(std::string font, std::string message, int score, int xPos, int yPos);
    void setPosition(sf::Vector2f position);
    //change button size to size (what else needs to be changed?)
    void setSize(sf::Vector2f  size);
    //change button color to color (what else needs to be changed?)
    void setColor(sf::Color color);
    //change button label to s (what else needs to be changed?)
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
    // void setText(std::string s);
    // void StopJones(const Dialogue &obj, int place, int tile, int xPos, int yPos, sf::RenderWindow &window, Character &jones, int &trap, sf::Event &event);
    // void displayScore(const Score &obj, int place, int tile, int score, int xPos, int yPos, sf::RenderWindow &window, int &trap, sf::Event &event);

private:
    sf::RectangleShape mRect;
    sf::Text mText;
    sf::Font mFont;
    sf::Color mTextColor;
    sf::Sprite mScore;
    sf::Texture mTexture;
    sf::Color mColor;
    sf::Vector2f mPosition;
    // sf::Uint32 mBtnState;
    // setPosition = place;
    // setSize.x = 50;
    // setSize.y = 20;
};

#endif