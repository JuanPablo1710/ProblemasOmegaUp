#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v;

int cuenta(int i, int j, int n, int m){
	int k = v[i][j];
	int cn = 1;
	int resi = i, resj = j;

	while(true){
		if(i > 0 && v[i-1][j] == k+1){
			i--;
			k++;
			cn++;
			continue;
		}

		if(i+1 < n && v[i+1][j] == k+1){
			i++;
			k++;
			cn++;
			continue;
		}

		if(j > 0 && v[i][j-1] == k+1){
			j--;
			k++;
			cn++;
			continue;
		}

		if(j+1 < m && v[i][j+1] == k+1){
			j++;
			k++;
			cn++;
			continue;
		}

		return cn;
	}
}


int main(){

	int n, m, mx = -1;
	cin >> n >> m;

	v.resize(n, vector<int>(m));

	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> v[i][j];

	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++){
        mx = max(cuenta(i, j, n, m), mx);
    }

	cout << mx;

	return 0;
}
