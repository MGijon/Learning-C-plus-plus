#include <iostream>
using namespace std;
int main(){
	// introducimos una cantidad de sugundos y debemos escribir "H:M:S":
	int S,M,H, temporal;
	cin >> temporal;
	S = temporal % 60;
	M = (temporal - S)/60;
	temporal = M % 60;
	H = (M - temporal) % 60;
	cout << "<result>";
	cout << H << ":" << M << ":" << S;
	return 0;
}