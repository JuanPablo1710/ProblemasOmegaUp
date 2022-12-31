#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct par{
	int x;
	int y;
};

bool myfunction (par i,par j) { return (i.x<j.x); }

int binarySearch(par cord[], int target, int m){

	int mn = 0;
	int guess;

	while(mn <= m){

		guess =  (mn+m)/2;

		if(target == cord[guess].x) return guess + 1;
		else if(cord[guess].x < target){
			mn = guess + 1;
		}else{
			m = guess -1;
		}

	}

	return -1;

}

int main(){

	std::cin.tie(nullptr);
  	std::ios_base::sync_with_stdio(false);

	int n, k, x, y;
	cin >> n >> k;

	par cord[n];

    for(int i = 0; i < n; i++){
        cin >> x >> y;

        par act;
        act.x = x;
        act.y = y;

        cord[i] = act;
    }

    sort(cord, cord+n, myfunction);

	for(int i = 0; i < k; i++){
		cin >> x >> y;

		int ia = binarySearch(cord, x, n) -1;
		int ib = ia-1;

		if(ia == -1){
			cout << 1 << '\n';
			continue;
		}

		bool s = false;

		while(cord[ia].x == x){
			if(cord[ia].y == y){
				s = !s;
				break;
			}

			ia++;
		}

		while(cord[ib].x == x && s == false){
			if(cord[ib].y == y){
				s = !s;
				break;
			}

			ib--;
		}

		if(!s) cout << 1 << '\n';
		else cout << 0 << '\n';
	}

	return 0;
}
