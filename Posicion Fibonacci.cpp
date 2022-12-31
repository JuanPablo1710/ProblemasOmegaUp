#include <iostream>
using namespace std;

int binarySearch(unsigned long long doors[], unsigned long long target, int m){

	int mn = 0;
	int guess;

	while(mn <= m){

		guess =  (mn+m)/2;

		if(target == doors[guess]) return guess+2;
		else if(doors[guess] < target){
			mn = guess + 1;
		}else{
			m = guess -1;
		}

	}

	return -1;

}

int main(){

	unsigned long long  n = 12200160415121876738;
	unsigned long long f1 = 1;
	unsigned long long f2 = 1;
	unsigned long long aux;
	unsigned long long fibos[92];
	int c = 0;

	while(n >= f2){
		fibos[c] = f2;
		aux = f2;
		f2 = f1+f2;
		f1 = aux;
		c++;
	}

	unsigned long long k;
    cin >> k;

	if(k == 1){
		cout << 1;
		return 0;
	}

    cout << binarySearch(fibos, k, 92);

	return 0;
}
