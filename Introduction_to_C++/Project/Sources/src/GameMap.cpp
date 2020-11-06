#include <iostream>
#include <fstream>
#include "GameMap.h"
using namespace std;

GameMap::GameMap(){
	// Constructor
  PlayerCell = NULL;
  LoadMapFromFile();
  isGameOver == false;
}

GameMap::~GameMap(){
	// Destructor
}

void GameMap::DrawVictory(){
  string line;
  ifstream MyFile("Victory.txt");

  if(MyFile.is_open()){
    while(getline(MyFile, line)){
      cout << line << endl;
    }
    cin >> line;
  }
  else{
    cout << "FATAL ERROR: VICTORY COULD NOT BE LOADED!" << endl;
  }
}

void GameMap::DrawIntro(){
  string line;
  ifstream MyFile("Intro.txt");

  if(MyFile.is_open()){
    while(getline(MyFile, line)){
      cout << line << endl;
    }
    cin >> line;
  }
  else{
    cout << "FATAL ERROR: INTRO COULD NOT BE LOADED!" << endl;
  }
}

void GameMap::Draw(){
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 10; j++){
      cout << cells[i][j].id;
    }
    cout << endl;
  }
}

bool GameMap::SetPlayerCell(int PlayerX, int PlayerY){
  //cout << "Las coordenadas en las que se encuentra el jugador son " << PlayerX << PlayerY;

  if (cells[PlayerY][PlayerX].id == '$'){
    DrawVictory();
    isGameOver == true;
    return true;
  }else{
    if (cells[PlayerY][PlayerX].IsBlocked() == false){

      if (PlayerCell != NULL){
        PlayerCell->id = ' ';
      }

      PlayerCell = &cells[PlayerY][PlayerX];
      PlayerCell->id = '3';

      return true;
    }else{
      return false;
    }
  }
}


void GameMap::LoadMapFromFile(){

  //ofstream FileCreated("Map.txt");

  //if (FileCreated.is_open()){

  //}
  //else{
  //  cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED!" << endl;
  //}

  string line;
  int row = 0;

  ifstream MyFile("Map.txt");

  if(MyFile.is_open()){

    while(getline(MyFile, line)){
      for (int p = 0; p < line.length(); p++){
        if (line[p] == '0'){
          cells[row][p].id = ' '; // in char empty space
        }else{
          cells[row][p].id = line[p];
        }
      }
      row++;
    }

  }
  else{
    cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!" << endl;
  }

}
