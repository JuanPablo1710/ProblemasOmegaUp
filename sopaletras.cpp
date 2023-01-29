#include <iostream>
#include <vector>
using namespace std;

vector<string> v;

bool resuelve(string s, int n, int m){
	int l = s.length();

	for(int i = 0; i < n; i++){
		for(int j = 0; j + l <= m; j++){

			int cn = 0;

			for(int k = j; k < j+l; k++){
				
				if(v[i][k] == s[k-j]) cn++;

				if(cn == l) return true;
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = m-1; j - l + 1>= 0; j--){

			int cn = 0;

			for(int k = j; k >= j-l+1 ; k--){
				
				if(v[i][k] == s[j-k]) cn++;

				if(cn == l) return true;
			}
		}
	}

	for(int j = 0; j < m; j++){
		for(int i = 0; i+l <= n; i++){

			int cn = 0;

			for(int k = i; k < i+l; k++){

				if(v[k][j] == s[k-i])cn++;

				if(cn == l) return true;

			}
		}
	}

	for(int j = 0; j < m; j++){
		for(int i = n-1; i-l+1 >= 0; i--){

			int cn = 0;

			for(int k = i; k >= i-l+1; k--){

				if(v[k][j] == s[i-k])cn++;

				if(cn == l) return true;

			}
		}
	}

	return false;
}

int main() {
	
	int n, m;
	cin >> n >> m;

	v.resize(n);

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	int q;
	cin >> q;
	string s;

	while(q--){
		cin >> s;

		if(resuelve(s, n, m)) cout << "si" << '\n';
		else cout << "no" << '\n';
	}

	return 0;
}
