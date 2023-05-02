#include "dialogue.h"

Dialogue::Dialogue()
{
    sf::Font font;

    if (!font.loadFromFile("OpenSans-Regular.ttf"))
    {
        std::cout << "Error loading font";
        exit(2);
    }
    mFont = font;

    // mTest = message;
    mText.setFont(mFont);
    mText.setCharacterSize(10);
    mText.setString("Default Message");
    mText.setFillColor(sf::Color::White);
    mText.setPosition(0, 0);
}

Dialogue::Dialogue(std::string fontType, std::string message, int xPos, int yPos)
{
    sf::Font font;

    if (!font.loadFromFile(fontType))
    {
        std::cout << "Error loading font";
        exit(2);
    }
    mFont = font;

    // mTest = message;
    mText.setFont(mFont);
    mText.setCharacterSize(10);
    mText.setString(message);
    mText.setFillColor(sf::Color::White);
    mText.setPosition(xPos, yPos);
}

void Dialogue::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(mRect, states);
    target.draw(mText, states);
}

void Dialogue::StopJones(const Dialogue &obj, int place, int tile, int xPos, int yPos, sf::RenderWindow &window, Character &jones, int &trap, sf::Event &event)
{
    // Needs to accept a integer to see if function has already ran.

    // Replace this with a diamone image
    // sf::RectangleShape Pause(sf::Vector2f(512, 256));
    // Pause.setFillColor(sf::Color::Black);
    // Pause.setPosition(0, 0);

    // sf::Texture diamond;

    // int exit=trap;
    // std::cout <<exit;
    if (trap == 0)
    {
        // needs to accept a spot; This is where a random spot is selected!
        if (place == tile)
        {
            // I want to make a diamond appear visually for 1-2 seconds on the square Jones is on (place).
            // The usleep() function will be used for this.
            // Look at how Jones Position was initialized
            // diamond.loadFromFile("Diamond.png");

            // variable
            // int cease = 0;
            // window.draw(Pause); // How do I allow the function to draw something to window.


            // window.draw(obj);   // Accepts dialogue would need to pass an object to itself
            int setPosition;
            sf::Vector2f setSize;
            setPosition = place;
            setSize.x = 50;
            setSize.y = 20;

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
        }
    }
}

