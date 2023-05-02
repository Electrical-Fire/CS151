#include "game.h"
bool MyTiles::load(const std::string &tileset, sf::Vector2u tileSize, const int *tiles, unsigned int width, unsigned int height)
    {
        // load the tileset texture
        if (!m_tileset.loadFromFile(tileset))
        {
            return false;
        }

        m_vertices.setPrimitiveType(sf::Quads);
        m_vertices.resize(width * height * 4);

        for (unsigned int i = 0; i < width; ++i)
            for (unsigned int j = 0; j < height; ++j)
            {

                // using this get the current tile number
                int tileNumber = tiles[i + j * width];

                // find its position in the tileset texture
                int tu = tileNumber % (m_tileset.getSize().x, tileSize.x);
                int tv = tileNumber / (m_tileset.getSize().x / tileSize.x);

                // get a pointer to the current tile's quad
                sf::Vertex *quad = &m_vertices[(i + j * width) * 4];

                // define its 4 corners
                quad[0].position = sf::Vector2f(i * tileSize.x, j * tileSize.y);
                quad[1].position = sf::Vector2f((i + 1) * tileSize.x, j * tileSize.y);
                quad[2].position = sf::Vector2f((i + 1) * tileSize.x, (j + 1) * tileSize.y);
                quad[3].position = sf::Vector2f(i * tileSize.x, (j + 1) * tileSize.y);

                // define its 4 texture coordinates
                quad[0].texCoords = sf::Vector2f(tu * tileSize.x, tv * tileSize.y);
                quad[1].texCoords = sf::Vector2f((tu + 1) * tileSize.x, tv * tileSize.y);
                quad[2].texCoords = sf::Vector2f((tu + 1) * tileSize.x, (tv + 1) * tileSize.y);
                quad[3].texCoords = sf::Vector2f(tu * tileSize.x, (tv + 1) * tileSize.y);


            }
            return true;
    }


    void  MyTiles::draw(sf::RenderTarget &target, sf::RenderStates states) const
    {
        // apply the entiy's transform combine with the one that passed by the caller
        states.transform *= getTransform(); // getTransform is defined by sf::Transformable

        states.texture =&m_tileset;

        target.draw(m_vertices, states);
    }



     sf::Vector2f MyTiles::findTileV(int xPosition, int yPosition, int tileLength,int tileWidth) // Gets your position based on the x value and y value of your charcter 
    // and returns the integer number of the tile that you are on. 
    {
        int X = (xPosition)/tileLength;
        int Y = yPosition/tileWidth;
       // std::cout<<xPosition<<std::endl;
       //  std::cout<<yPosition<<std::endl;


        sf::Vector2f yourTile;
        yourTile.x = X;
        yourTile.y = Y;
        return yourTile;
    }


    // int MyTiles::findTile(int xPosition, int yPosition, int tileLength,int tileWidth) // Gets your position based on the x value and y value of your charcter 
    // // and returns the integer number of the tile that you are on. 
    // {
    //     int X = (xPosition)/tileLength;
    //     int Y = yPosition/tileWidth;
    //    // std::cout<<xPosition<<std::endl;
    //    //  std::cout<<yPosition<<std::endl;


    //     Y = Y *16;
    //     int yourTile = (X + Y);
    //   //  std::cout<<X<<std::endl;
    //     //std::cout<<Y<<std::endl;
    //     return yourTile;
    // }
    