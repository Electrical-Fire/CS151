#include "character.h"
// using namespace cv;

Character::Character()
{
    if (!mTexture.loadFromFile("IndianaJones.png")) // Gets the texture for the file
    {
        std::cout << "Error opening file\n";
        exit(1);
    }

    mCharacter.setTexture(mTexture); // sets the texture

    sf::Vector2u imageSize = mTexture.getSize(); // I think I need to get the image size for later
    std::cout<<imageSize.x;
    //453
     // mCharacter.setTextureRect(sf::IntRect(268,40,307,374));

    sf::Vector2f position;
    position.x = 16;
    position.y = 16;
    mCharacter.setPosition(position.x, position.y); // Sets the postion at 0,0 in the default constructors
    mCharacter.setScale(0.07, 0.07);   // Setting scale at this for now

    mCharacter.setOrigin(169,205);

    xPos = 16;
    yPos = 16;
    facing = 'R';

    // Trying to fix the size of the image and I need to figure ouut how to reduce the size of the 'whitespace' on the figure.

    // unsigned int mHeight = 0;
    // unsigned int mWidth = (imageSize.x / imageSize.y - 100) * mHeight;
    // sf::Vector2u mSize = {mWidth, mHeight};

    // mCharacter.setOrigin(sf::Vector2f(mSize.x * 0.75, 0));
    //mCharacter.setOrigin(sf::Vector2f(mCharacter.getTexture()->getSize().x * 0.25, 0));

    // Sets the Jones Character to a size that is proportional to the internet image and has height of 16

    /* The setOrigin function sets the origin's 'x' coordinate to 75% of the sprite's size, and it's y coorinate
        to zero. This setup gets the character positioned at the center of the squares, and staying in the same
        spot when turning around. */

    // Tells me the origin for the shape for testing
    //std::cout << "Origin: " << mSize.x << ", " << mSize.y <<s std::endl;
}

// Character::Character()
// {   
//     if(!mTexture.loadFromFile("IndianaJonesCanva.png"))
//         {
//             std::cout << "Error opening file\n";
//             exit(1);
//         }

//     mCharacter.setTexture(mTexture);
//     mPosition = {0,0};
//     mCharacter.setPosition(mPosition);

//     // get size of internet image
//     sf::Vector2u imageSize = mTexture.getSize();

//     // Sets the Jones Character to a size that is proportional to the internet image and has height of 16
//     int mHeight = 16;
//     int mWidth = (imageSize.x / imageSize.y) * mHeight;
//     sf::Vector2u mSize = {mWidth, mHeight};
//     /* The setOrigin function sets the origin's 'x' coordinate to 75% of the sprite's size, and it's y coorinate
//         to zero. This setup gets the character positioned at the center of the squares, and staying in the same
//         spot when turning around. */
//     mCharacter.setOrigin(sf::Vector2f(mSize.x * 0.75, 0));
//     std::cout<<"Origin: "<<mSize.x<<", "<< mSize.y<<std::endl;

// }

void Character::moveJones(sf::RenderWindow &window, sf::Event &event, int gridSize, int &stepcount)
{
    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::Right)
        {
            if (xPos < 496)
            {
                if (facing == 'L')
                {
                     //mCharacter.setOrigin(sf::Vector2f(mCharacter.getTexture()->getSize().x * 0.25, 0));
                    //mCharacter.setRotation(180);
                    mCharacter.scale(-1.f, 1.f); // This is a built-in function that flips the image about the edge.
                    // I want it to flip about the center later.
                    facing = 'R';
                }
                xPos = xPos + gridSize;                   
                usleep(9000);
                stepcount++;
            }
        }
        else if (event.key.code == sf::Keyboard::Left)
        {
            if (xPos > 16)
            {
                if (facing == 'R')
                {
                    // mCharacter.setOrigin(sf::Vector2f(mCharacter.getTexture()->getSize().x * -0.25, 0));
                    //  The problem is that the amount of whitespace creates problems.
                    //mCharacter.setRotation(180);
                    mCharacter.scale(-1.f, 1.f); // This is a built-in function that flips the image about the edge.
                    // I want it to flip about the center later.  
                    // may use void cv::flip(InputArray src, OutputArray dst, int flipCode=0)
                    facing = 'R';
                    facing = 'L';
                }
                    xPos = xPos - gridSize;
                    usleep(9000); //delay after moving
                    stepcount++;
            }
        }
        else if (event.key.code == sf::Keyboard::Down)
        {
            if (yPos < 224)
            {
                yPos = yPos + gridSize; //moves it the length of the gridsize
                usleep(9000);

                stepcount++;
            }
        }
        else if (event.key.code == sf::Keyboard::Up)
        {
            if (yPos > 16)
            {
                yPos = yPos - gridSize;
                usleep(9000);
                stepcount++;
            }
        }
    }
}

    // Character(sf::Vector2f position, sf::Vector2f size, sf::Texture texture)
    // {

    // }


// The quick fix is to add -std=c++17 to support this C++ feature.

// The actual fix is to use C++ more effectively, like employing a std::vector plus using emplace_back to create entries as necessary:

// // Malloc the list of conditions to be met
// std::vector<Cond> condList;

// for (int i= 0; i < numConds; ++i) {
//   condList.emplace_back(
//     0, // int offset1
//     nullptr, // bool (*comparator) (void * , void *, AttrType, int); 
//     true, // bool isValue;
//     nullptr, // void* data; 
//     0, // int offset2; 
//     0, // int length; 
//     0, // int length2; 
//     INT // AttrType type; 
//   );
// }

void Character::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(mCharacter, states);
}

void Character::setPosition(float x, float y)
{
    mCharacter.setPosition(x,y);
}
