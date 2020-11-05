#include <iostream>
using namespace std;

class Mage{
	public:
		Mage(int BasePower, int BaseHP){
			Power = BasePower;
			hp = BaseHP;
		}

		int Damage(){
			return Power;
		}

		void GetDamage(int Value){
			cout << "HP: " << hp << endl;
			hp -= Value;
			cout << "HP: " << hp << endl;
		}
		
		void SpellGreet(){
			cout << "Hellow World!" << endl;
		}

	protected:
		int Power, hp;

};

class IceMage : public Mage{
	
	public:
		IceMage(int BasePower, int BaseHP) : Mage(BasePower, BaseHP){
			Power = BasePower + 10;
			hp = BaseHP;
		}
};

class FireMage : public Mage{
	
	public:
		FireMage(int BasePower, int BaseHP) : Mage(BasePower, BaseHP){
			Power = BasePower;
			hp = BaseHP + 10;
		}
};


int main(){
		
	Mage Harry(1, 20);
	Harry.SpellGreet();
	
	
	Mage* CurrentMage;

	FireMage Gandalf(10, 10);
	IceMage Dumbledore(10, 10);
	
	// This is the polimorfism working: 
	CurrentMage = &Gandalf;
	// this way to access the methods from a pointer
	CurrentMage->GetDamage(1);

	CurrentMage = &Dumbledore;
	CurrentMage->GetDamage(1);
	

	return 0;
}
