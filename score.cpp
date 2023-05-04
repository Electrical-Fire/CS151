#include "score.h"

Score::Score()
{
    if (!mTexture.loadFromFile("button.png"))
    {
        std::cout << "Error opening file\n";
        exit(1);
    }
    mScore.setTexture(mTexture);

    // get size of image
    sf::Vector2u imageSize = mTexture.getSize();
    // change origing to the center of the image (maks rotation easy)
    mScore.setOrigin(imageSize.x / 2, imageSize.y / 2);
    // set position
    // mBtnState = normal;

    // mScore.setPosition(xPos, yPos);
    // mBtnState = normal;

    mScore.setPosition(mPosition.x, mPosition.y);
    // choose color
    mColor = sf::Color::Black;
    mScore.setColor(mColor);
    // set size as a ration of original size
    mScore.setScale(0.5, 0.5);

    mTextColor = sf::Color(0, 250, 0); // sf::Color::Green;
    // mTextHover = sf::Color::Red;

    // Make lable
    if (!mFont.loadFromFile("college.ttf"))
    {
        std::cout << "Error opening file\n";
        exit(2);
    }
    mText.setFont(mFont);
    // choose the font size based on button size (I choose half)
    unsigned int fontSize = mScore.getGlobalBounds().height / 2;
    mText.setCharacterSize(fontSize);
    // set lable
    mText.setString("Push me!");
    // set origing to the middle
    mText.setOrigin(mText.getGlobalBounds().width / 2, mText.getGlobalBounds().height / 2);
    // set position at the midle of the button
    mText.setPosition(imageSize.x / 2, imageSize.y / 2);
    // choose colors
    mText.setFillColor(mTextColor);
}

Score::Score(std::string fontType, std::string message, int score, int xPos, int yPos)
{
    if (!mTexture.loadFromFile("button.png"))
    {
        std::cout << "Error opening file\n";
        exit(1);
    }
    mScore.setTexture(mTexture);

    // get size of image
    sf::Vector2u imageSize = mTexture.getSize();
    // change origing to the center of the image (maks rotation easy)
    mScore.setOrigin(imageSize.x / 2, imageSize.y / 2);
    // set position
    // mPosition.x = 300;
    // mPosition.y = 100;
    xPos = 300;
    yPos = 100;
    // mBtnState = normal;

    mScore.setPosition(xPos, yPos);
    // choose color
    mColor = sf::Color::Black;
    mScore.setColor(mColor);
    // set size as a ration of original size
    mScore.setScale(0.5, 0.5);

    mTextColor = sf::Color(0, 250, 0); // sf::Color::Green;
    // mTextHover = sf::Color::Red;

    // Make lable
    if (!mFont.loadFromFile("college.ttf"))
    {
        std::cout << "Error opening file\n";
        exit(2);
    }
    mText.setFont(mFont);
    // choose the font size based on button size (I choose half)
    unsigned int fontSize = mScore.getGlobalBounds().height / 2;
    mText.setCharacterSize(fontSize);
    // set lable
    // set origing to the middle
    mText.setOrigin(mText.getGlobalBounds().width / 2, mText.getGlobalBounds().height / 2);
    // set position at the midle of the button
    mText.setPosition(imageSize.x / 2, imageSize.y / 2);
    // choose colors
    mText.setFillColor(mTextColor);
}

void Score::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(mRect, states);
    target.draw(mText, states);
}
void Score::setPosition(sf::Vector2f position)
{
    mScore.setPosition(position);
    mText.setPosition(position.x,position.y -mScore.getGlobalBounds().height/20);
}
void Score::setSize(sf::Vector2f size)
{
    sf::Vector2u imageSize = mTexture.getSize();

    mScore.setScale(size.x / imageSize.x, size.y / imageSize.y);
    unsigned int fontSize = mScore.getGlobalBounds().height / 2;
    mText.setCharacterSize(fontSize);
    mText.setOrigin(mText.getGlobalBounds().width / 2, mText.getGlobalBounds().height / 2);\
}

void Score::setColor(sf::Color color)
{
    mScore.setColor(color);
}

// void displayScore(const Score &obj, int place, int tile, int score, sf::RenderWindow &window, int &trap, sf::Event &event)
// {
//     sf::RectangleShape Pause(sf::Vector2f(64, 32));
//     Pause.setFillColor(sf::Color::Black);
//     Pause.setPosition(416, 0);
//     if(place == tile)
//     {
//         score++;
//     }
// }
// void Dialogue::StopJones(const Dialogue &obj, int place, int tile, int xPos, int yPos, sf::RenderWindow &window, Character &jones, int &trap, sf::Event &event)
// {
    // Needs to accept a integer to see if function has already ran.

    // Replace this with a diamone image
    // sf::RectangleShape ScoreBoard(sf::Vector2f(512, 256));
    // Pause.setFillColor(sf::Color::Black);
    // Pause.setPosition(0, 0);

    // sf::Texture diamond;

    // int exit=trap;
    // std::cout <<exit;
    // if (trap == 0)
    // {
        // needs to accept a spot; This is where a random spot is selected!
        // if (place == tile)
        // {
            // I want to make a diamond appear visually for 1-2 seconds on the square Jones is on (place).
            // Look at how Jones Position was initialized
            // diamond.loadFromFile("Diamond.png");

            // variable
            // int cease = 0;
            // window.draw(Pause); // How do I allow the function to draw something to window.


            // window.draw(obj);   // Accepts dialogue would need to pass an object to itself
            // int setPosition;
            // sf::Vector2f setSize;
            // setPosition = place;
            // setSize.x = 50;
            // setSize.y = 20;

            // Button Option("testing", setPosition, setSize, sf::Color::Red);
            // window.draw(Option);
            // window.display();

            // while (cease == 0)
            // {
            //     while (window.pollEvent(event))
            //     {
            //         // Option.update(event, window);
            //         // window.draw(Option);
            //         window.display();
            //         usleep(1000);
            //         if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) // Need to pass a key as a function.
            //         {
            //             // trap = -1;
            //             // std::cout<<trap;
            //             jones.setPosition(xPos, yPos);
            //             cease = 1;
            //         }
            //     }
            // }
//         }
//     }
// }

