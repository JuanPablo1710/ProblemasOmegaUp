#include <iostream>
using namespace std;

long long convertir(long long n, long long b){

	long long res = 0, cf = 1;

	while(n > 0){

		res += cf*(n%b);
		cf *= 10;
		n /= b;
	}

	return res;

}

bool espalindromo(long long n){
	
	long long n1 = n;
	long long cp = 0;

	while(n1 != 0){
		cp *= 10;
		cp += n1%10;

		n1 /= 10;
	}

	if(cp == n) return true;
	else return false;

}

int main() {
	
	long long n;
	cin >> n;

	for(int i = 2; i < 11; i++){
		long long cnv = convertir(n, i);

		if(espalindromo(cnv)){
			cout << i << " " << cnv;
			return 0;
		}
	}

	cout << -1 << " " << 0;

	return 0;
}
