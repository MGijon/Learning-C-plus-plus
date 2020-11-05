// compile with gcc!
#include <iostream>
using namespace std;

void DrawMap(int playerPosX, int playerPosY, char gameMap[5][5]){
	cout << endl;

	for (int i=0; i<5; i++){
		// columns
		for (int j=0; j<5; j++){
				// rows
				if (i != playerPosY){
					cout << gameMap[j][i];
				}
				else{
					if (j != playerPosX){
						cout << gameMap[j][i];
					}
					else{
						cout << 'H'; // player position
					}
				}
	 	}
	}

	cout << endl;
}

int main(){
	int playerPosX = 0;
	int playerPosY = 0;

	char input = ' ';
	bool gameOver = false;
	char gameMap[5][5] = {
		{'1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1'},
		{'1', '1', '1', '1', '1'}

	};

	cout << "Welcome player" << endl;
	cout << "Move to the right (a) or to the left (d), (w) up, (s) down and press (p) to exit.";

	while (!gameOver){
		cin >> input;

		if (input == 'd' && playerPosX < 4) playerPosX++;
		else if (input == 'a' && playerPosX > 0) playerPosX--;
		else if (input == 'w' && playerPosY > 0) playerPosY++;
		else if (input == 's' && playerPosY < 4) playerPosY--;
		else if (input == 'p') gameOver = true;

		DrawMap(playerPosX, playerPosY, gameMap);
		cout << endl;
	}

	return 0;
}
