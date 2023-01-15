#include <iostream>
using namespace std;
void tabla(int a){
	for (int i = 1; i <= 10; i++){
		int producto = a*i;
		cout << "<result>";
		cout << a << "*" << i << "=" << producto;
	}
}
int main(){
	int a;
	cin >> a;
	tabla(a);
	return 0;
}