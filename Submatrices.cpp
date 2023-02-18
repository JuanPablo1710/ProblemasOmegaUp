#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;
vector<vector<int>> v2;
vector<vector<int>> res;

int main(){

    int n, m;
    cin >> n >> m;

    v.resize(n, vector<int>(m));
    res.resize(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> v[i][j];

    int r, c;
    cin >> r >> c;

    v2.resize(r, vector<int>(c));
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) cin >> v2[i][j];

    int nr = n-r, mc = m-c, rc = r*c;
    bool flag;

    for(int i = 0; i <= nr; i++){
        for(int j = 0; j <= mc; j++){

            flag = true;

            for(int k = i; k < i+r && flag; k++) for(int h = j; h < j+c; h++){
                if(v[k][h] != v2[k-i][h-j]){
                    flag = false;
                    break;
                }
            }

            if(flag){
                for(int k = i; k < i+r; k++) for(int h = j; h < j+c; h++){
                    res[k][h] = 1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++, cout << '\n') for(int j = 0; j < m; j++) cout <<  res[i][j] << " ";

    return 0;
}
