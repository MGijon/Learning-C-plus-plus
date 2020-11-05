// 
#include <iostream>
using namespace std;

bool IsPlayerDead(int hp){
	if (hp <= 0){
		return true;
	} else 
	{
		return false;
	}
}

int main(){
	int TotalLife = 3;
	if (IsPlayerDead(TotalLife)){
	       cout << "Game Over" << endl;
	}

	return 0;
}


