#include <iostream>
using namespace std;

int main(){

	int n, v = 0;
	long long suma = 0, g;
	cin >> n;

	cin >> g;
	suma += g;

	for(int k = 1; k < n; k++){
		cin >> g;

		if(g > suma) v++;

		suma += g;
	}

	cout << v;

	return 0;
}
