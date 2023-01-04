#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        vector<int> p(n), p1(n);

        for(int i = 0; i < n; i++) cin >> p[i];

        p1 = p;
        sort(p1.begin(), p1.end());

        for(int i = 0; i < n; i++){
            if(p[i] == p1[n-1]) cout << p[i] - p1[n-2] << " ";
            else cout << p[i] - p1[n-1] << " ";
        }

        cout << '\n';
    }

    return 0;
}
