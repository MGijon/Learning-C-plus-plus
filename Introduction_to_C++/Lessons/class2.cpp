#include <iostream>
using namespace std;

class Dog{
	// its name can be read but not overwriten
	public:
		string mBarkType;
		Dog(string Name, string BarkType){
			mName = Name;
			mBarkType = BarkType;
		}

		string GetName(){
			return mName;
		}
		
		void SetName(string NewName){
			mName = NewName;
		}

	private:
		string mName;
};

int main(){
	Dog FirstDog("Asterix", "Woof woof");

	cout << FirstDog.GetName() << endl;
	
	FirstDog.SetName("Obelix");
	cout << FirstDog.GetName() << endl;

	return 0;
}

