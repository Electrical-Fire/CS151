#include "play.h"


playGame::playGame()
{
    found = false;
}

void playGame::runGameJones(MyTiles &MapObj, Diamond &diaObj, int score, sf::RenderWindow &window,
                             Character &Jones, int &trap, sf::Event &event, sf::Clock dtClock, int stepcount, int gridLength, int gridWidth) // moved becuase it is a long line
{
    // std::string message = "Score: ";
    // int score = 0;
    // Score showScore("OpenSans-Regular.ttf", message, score, 416, 0);
    // window.draw(showScore);
    // window.display();
    sf::Vector2f place;
    sf::Vector2f diaTile; 
    // diaObj.diamondFound(diaObj, place, diaTile, found);
    // diaTile.x = rand() %16;
    // diaTile.y = rand() %8;
    diaTile.x = 5;
    diaTile.y = 0;
    if (diaTile.x == 2 || diaTile.x == 7 || diaTile.x == 13){
        diaTile.x += 1;
    }
    if(diaTile.y == 2){
        diaTile.y += 1;
    }
    found = false;
  
    while (window.isOpen())   
    {
        while (window.pollEvent(event))
        {
            place = MapObj.findTileV(Jones.xPos, Jones.yPos, gridLength, gridWidth);
            Jones.moveJones(window, event, gridLength, stepcount);
            usleep(1000);
            Jones.setPosition(Jones.xPos, Jones.yPos);

            if(place == diaTile) {
                found = true;
            }

            // window.draw(diaObj);
            if(found==true)
            {
                time_t start = time(NULL);
                while(time(NULL) < start+0.5)
                {
                    diaObj.setPosition ((diaTile.x * 32)+16, (diaTile.y * 32)+16);
                    if (diaTile.x == 2 || diaTile.x == 7 || diaTile.x == 13){
                        diaTile.x += 1;
                    }
                    if(diaTile.y == 2){
                        diaTile.y += 1;
                    }
                        window.clear();
                        window.draw(MapObj);

                        // Responsible for drawing picture
                        // Create a draw function in the Character class, then it should work without .mCharacter
                        window.draw(Jones);
                        // if found variable true, display diamond. Else do not display it
                        window.draw(diaObj);
                        
                        window.display();
                }
                // Loop till display closed or 15 seconds elapsed
                score++;
                std::cout << "\nDiamond " << score+1;
                diaObj.setPosition(0,0);
                // diaTile.x++; //For testing purposes, shows that the diamond stays put and doesn't bounce around
                diaTile.x = rand() %16;
                diaTile.y = rand() %8;
                if (diaTile.x == 2 || diaTile.x == 7 || diaTile.x == 13){
                    diaTile.x += 1;
                }
                if(diaTile.y == 2){
                    diaTile.y += 1;
                }
                found = false;
            }

            if (event.type == sf::Event::Closed){
                std:: cout<<"\n\n\n\n\n\n\n\nFinal Score: " << score;
                window.close();
            }
        
        // Render the map and the game elements.
        window.clear();
        window.draw(MapObj);

        // Responsible for drawing picture
        // Create a draw function in the Character class, then it should work without .mCharacter
        window.draw(Jones);
        // if found variable true, display diamond. Else do not display it
        window.draw(diaObj);
        
        window.display();
    }

        // int place = MapObj.findTile(Jones.xPos, Jones.yPos, gridLength, gridWidth);
        // int randomTile= rand() %128;
        // std::cout<< place;
        // if(place==randomTile)
        // {
        //     std::cout<< "Diamond Found!";
        //     place = -1;
        // }
        // DiaObj.StopJones(DiaObj, place, 2, Jones.xPos, Jones.yPos, window, Jones, trap, event);
        // End of while loops
}

    

}     
