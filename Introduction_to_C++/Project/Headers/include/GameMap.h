#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap{
  public:
    GameMap();
    ~GameMap();

    MapCell cells[15][10];
    MapCell* PlayerCell; //points the cell where the the player is

    void DrawIntro();
    void DrawVictory();
    void Draw(); // Draw the map
    bool SetPlayerCell(int PlayerX, int Playery);

    bool isGameOver;

  protected:

    void LoadMapFromFile();

  private:
};

#endif // GAME_MAP
