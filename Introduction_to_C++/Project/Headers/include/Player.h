#ifndef PLAYER_H
#define PLAYER_H

class Player{
	public:
		Player();
    ~Player();
		void CallInput();
		void ResetToSavePosition();

		int GetX();
		int GetY();
		int GetLastX();
		int GetLastY();

	protected:
    int x, y; // Player positions
		int lastX, lastY; // Last positions of the player
	private:
};

#endif // PLAYER_H
