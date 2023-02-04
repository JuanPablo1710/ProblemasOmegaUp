#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
vector<int> nv;

int main() {
	
	int n;
	cin >> n;

	v.resize(n);
	nv.resize(n);

	for(int i = 0; i < n; i++) cin >> v[i];

	for(int i = 0; i < n; i++){

		int mn = 0;

		for(int j = 0; j < i; j++){
			if(v[j] < v[i]) mn++;
		}

		for(int j = i+1; j < n; j++){
			if(v[j] > v[i]) mn++;
		}

		nv[i] = mn;
	}

	int it, mx = -9999999999;

	for(int i = 0; i < n; i++){
		if(nv[i] > mx){
			mx = nv[i];
			it = i;
		}
	}

	cout << it;

	return 0;
}
