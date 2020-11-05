#include <iostream>
using namespace std;

class Human{
	public:
		Human(int SpawnAge){
			Age = SpawnAge;
		}
		
		void Think(){
			cout << "Im thinking..." << GetThinkMessage() << endl;
		}

		int Age;
	private:
		int SocialLevel;
		int Inteligence;
		int Luck;

		string GetThinkMessage(){
			if (SocialLevel + Luck > 100){
				return ":D";
			}
			else if (Luck > Inteligence){
				return "Im very Lucky";
			}
			else if (Age > 18){
				return "Im not a child";
			}
			else{
				return "Im not thinking right now";
			}
		}


};

int main(){
	Human Bob(19);
	Bob.Think();
	return 0;
}
