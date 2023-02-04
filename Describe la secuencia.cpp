#include <iostream>
#include <vector>
using namespace std;

vector<int> v(10);

int main() {
	
	string s;
	cin >> s;

	int l = s.length(), it = 0;

	while(it < l){
		int cn = 1;
		int d = s[it] - '0';

		while(s[it] == s[it+1]){
			it++;
			cn++;
		}

		it++;

		cout << cn << d;
	}

	return 0;
}
