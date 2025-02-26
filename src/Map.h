#ifndef MAP_H
#define MAP_H

#include <string>
#include "graphics/Shader.h"
#include "MapObject.h"
#include "SpriteRandSet.h"
#include "graphics/Texture.h"
#include "graphics/SpriteBatch.h"

class WorldMap
{
    const int m_mapHeight;
    const int m_mapWidth;
    const unsigned int m_screenWidth;
    const unsigned int m_screenHeight;
    char** m_tileMap;
public:
    WorldMap(const unsigned int screenWidth, const unsigned int screenHeight,
             const int mapHeight, const int mapWidth);

    virtual ~WorldMap();
    
    void initialize(char** array);
    
    void setRandomSprites(const char*** spriteSet, SpriteRandSet& spriteObj);
    
    char getMapKey(const int i, const int j);

    int getRandomNumber(int min, int max);

    const int getMapHeight();
    const int getMapWidth();

    void render(MapObject** mapObjects, SpriteBatch& batch, Sprite& sprite, const int rowOffset, const int columnOffset,
                int randId, int randIdNextLevel);

    void drawMap(float coordX, float coordY, SpriteBatch& batch, Sprite& sprite);
};

#endif
