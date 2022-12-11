#include <iostream>
using namespace std;

int main(){

	int n, mp = 0, mg = 0, e, e1;
	cin >> n >> e;

	for(int k = 1; k < n; k++){
		cin >> e1;
		if(e1-e < mp) mp = e1-e;
		else if(e1-e > mg) mg = e1-e;
		e = e1;
	}

	cout << mg  << " " <<  abs(mp);


	return 0;
}
