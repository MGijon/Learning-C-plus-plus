// compile with gcc!
#include <iostream>
#include <fstream>

int main(){

	ofstream MyFile("GameData.txt"); // declare a variable of type ofstream called MyFile

	if(MyFile.is_open()){
		MyFile << "Hello World"; // send information to the opened file
	}else{
		cout << "The file could not be opened" << endl;
	}

	MyFile.close()

	ifstream MyFileRead("GameDate.txt");
	string line; // to save the chain of characteres returned by getline function
	if(MyFileRead.is_open()){
		while(getline(MyFileRead, line)){
			cout << line << endl;
		}
	}else{
		cout << "The file could not be opened" << endl;
	}

	return 0;
}
