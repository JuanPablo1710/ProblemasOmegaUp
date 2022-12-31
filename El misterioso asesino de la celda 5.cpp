#include <iostream>
using namespace std;

int main() {
	
	int l, a, n, cn = 0;
	cin >> l >> a >> n;
	bool c[l][a];

	for(int i = 0; i < l; i++) for(int k = 0; k < a; k++) c[i][k] = true;

	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;

		c[x-1][y-1] = false;
	} 

	l--;
	a--;

	for(int i = 0; i < l; i++){
		for(int k = 0; k < a; k++){
			if(c[i][k] && c[i][k+1] && c[i+1][k] && c[i+1][k+1]) cn++;
		}
	}

	cout << cn;

	return 0;
}
