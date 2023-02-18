#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;

int main(){

    int n, m;
    cin >> n >> m;

    v.resize(n, vector<int>(m));

    int jderecha= m-1, jizquierda = 0, iarriba = 0, iabajo = n-1, nm = 1;

    while(nm < n*m){

        for(int j = jizquierda; j <= jderecha && nm < n*m; j++){
            v[iarriba][j] = nm;
            nm++;
        }

        iarriba++;

        for(int i = iarriba; i <= iabajo && nm < n*m ; i++){
            v[i][jderecha] = nm;
            nm++;
        }

        jderecha--;

        for(int j = jderecha; j >= jizquierda && nm < n*m ; j--){
            v[iabajo][j] = nm;
            nm++;
        }

        iabajo--;

        for(int i = iabajo; i >= iarriba && nm < n*m ; i--){
            v[i][jizquierda] = nm;
            nm++;
        }

        jizquierda++;

    }

    for(int i = 0; i < n; i++, cout << '\n') for(int j = 0; j < m; j++){
        if(v[i][j] == 0) cout << nm << " ";
        else cout << v[i][j] << " ";
    }

    return 0;
}
