#include "Player.h"

#include <iostream>
using namespace std;

Player::Player(){
	// Constructor
	x = 2;
	y = 2;
}

Player::~Player(){
	// Destructor
}

void Player::CallInput(){
	char UserInput = ' ';
	cin >> UserInput;

	switch(UserInput){
		case 'w':
		  lastY = y;
			y--;
			//cout << "El jugador se mueve arriba" << endl;
			break;
		case 's':
			lastY = y;
			y++;
			//cout << "El jugador se mueve abajo" << endl;
			break;
		case 'a':
			lastX = x;
			x--;
			//cout << "El jugador se mueve hacia la izquierda" << endl;
			break;
		case 'd':
			lastX = x;
			x++;
			//cout << "El jugador se mueve hacia la derecha" << endl;
			break;
		default:
			//cout << "Non-valid input" << endl;
			break;
	}
}

void Player::ResetToSavePosition(){
	x = lastX;
	y = lastY;
}

int Player::GetX(){
	return x;
}

int Player::GetY(){
	return y;
}

int Player::GetLastX(){
	return lastX;
}

int Player::GetLastY(){
	return lastY;
}
