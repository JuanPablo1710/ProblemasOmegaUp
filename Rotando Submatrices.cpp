#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;

int main(){

    int n, m, q, a1, a2, b1, b2;
    cin >> n >> m;

    v.resize(n, vector<int>(m));

    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> v[i][j];

    cin >> q;

    while(q--){
        cin >> a1 >> b1 >> a2 >> b2;
        a1--;
        a2--;
        b1--;
        b2--;

        int lim = a1 + (a2-a1)/2;
        int cn = 0;

        for(int i = a1; i <= lim; i++, cn++) for(int j = b1; j <= b2; j++){

            int tmp = v[i][j];
            v[i][j] = v[a2-cn][j];
            v[a2-cn][j] = tmp;
        }
    }
    

    for(int i = 0; i < n; i++, cout << '\n') for(int j = 0; j < m; j++) cout <<  v[i][j] << " ";

    return 0;
}
