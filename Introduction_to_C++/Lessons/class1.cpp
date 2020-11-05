#include <iostream>
using namespace std;

class Cat{
	public:
		string Name;
	
	// Constructor
	Cat(){
		Name = "Mooncake";
	}

	// Cat another constructor (not default one)
	Cat(string iName){
		Name = iName;
	}

	void Meow(){
		cout << Name << " Miau!" << endl;
	}
};


int main(){
	Cat MyCat; // first instance of the class
	Cat NewCat("Jose");

	cout << MyCat.Name << endl;
	cout << NewCat.Name << endl;

	MyCat.Meow();

	return 0;
}
