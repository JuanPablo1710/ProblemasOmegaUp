#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
	
	string s;
	cin >> s;
	bool flag = false;

	for(int i = 0; i < s.length(); i++){

		if(s[i] == '*'){
			flag = !flag;
			continue;
		}

		if(flag) cout << (char)(toupper(s[i]));
		else cout << s[i];
	}

	return 0;
}
