// g++ -c -I ../Headers/include src/*.cpp main.cpp && g++ -o proyect.out *.o

#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"
using namespace std;

int main(){

	GameMap map;
	Player Hero;

	map.DrawIntro();
	map.Draw();

	//cout << "Inicio del juego";

	while(map.isGameOver == false){
		// get the movement from the user
		Hero.CallInput();
		cout << "Select yout next movement: (a), (d), (w), (s)" << endl;
		// update hero`s position
		if(map.SetPlayerCell(Hero.GetX(), Hero.GetY())){
			// draw the map
			map.Draw();
		}else{
			Hero.ResetToSavePosition();
			map.Draw();
		}


	}

	return 0;
}
