#include <iostream>
#include <queue>
using namespace std;

struct punto{
    int v;
    int x;
    int y; 
};

int main(){

    int n, m, xv, yv;
    cin >> n >> m >> xv >> yv;
    xv--;
    yv--;

    int t[n][m];

    for(int i = 0; i < n; i++) for(int k = 0; k < m; k++) cin >> t[i][k];

    queue<punto> cola;
    punto padre;
    padre.v = t[xv][yv];
    padre.x = xv;
    padre.y = yv;

    t[xv][yv] = 1001;

    cola.push(padre);

    while(!cola.empty()){
        padre = cola.front();
        punto hijo = padre;
        cola.pop();

        // arriba
        hijo.x++;
        if(hijo.x <= n && t[hijo.x][hijo.y] != 1001){
            if(t[hijo.x][hijo.y] < hijo.v){
                hijo.v = t[hijo.x][hijo.y];
                cola.push(hijo);
                t[hijo.x][hijo.y] = 1001;
            }
        }
        hijo = padre;

        // abajo
        hijo.x--;
        if(hijo.x >= 0 && t[hijo.x][hijo.y] != 1001){
            if(t[hijo.x][hijo.y] < hijo.v){
                hijo.v = t[hijo.x][hijo.y];
                cola.push(hijo);
                t[hijo.x][hijo.y] = 1001;
            }
        }
        hijo = padre;

        //derecha
        hijo.y++;
        if(hijo.y < m && t[hijo.x][hijo.y] != 1001){
            if(t[hijo.x][hijo.y] < hijo.v){
                hijo.v = t[hijo.x][hijo.y];
                cola.push(hijo);
                t[hijo.x][hijo.y] = 1001;
            }
        }
        hijo = padre;

        //izquierda
        hijo.y--;
        if(hijo.y >= 0 && t[hijo.x][hijo.y] != 1001){
            if(t[hijo.x][hijo.y] < hijo.v){
                hijo.v = t[hijo.x][hijo.y];
                cola.push(hijo);
                t[hijo.x][hijo.y] = 1001;
            }
        }
        hijo = padre;

        //arriba derecha
        hijo.x++;
        hijo.y++;
        if(hijo.x < n && hijo.y < m && t[hijo.x][hijo.y] != 1001){
            if(t[hijo.x][hijo.y] < hijo.v){
                hijo.v = t[hijo.x][hijo.y];
                cola.push(hijo);
                t[hijo.x][hijo.y] = 1001;
            }
        }
        hijo = padre;

        //arriba izquierda
        hijo.x++;
        hijo.y--;
        if(hijo.x < n && hijo.y >= 0 && t[hijo.x][hijo.y] != 1001){
            if(t[hijo.x][hijo.y] < hijo.v){
                hijo.v = t[hijo.x][hijo.y];
                cola.push(hijo);
                t[hijo.x][hijo.y] = 1001;
            }
        }
        hijo = padre;

        //abajo derecha
        hijo.x--;
        hijo.y++;
        if(hijo.x >= 0 && hijo.y < m && t[hijo.x][hijo.y] != 1001){
            if(t[hijo.x][hijo.y] < hijo.v){
                hijo.v = t[hijo.x][hijo.y];
                cola.push(hijo);
                t[hijo.x][hijo.y] = 1001;
            }
        }
        hijo = padre;

        //abajo izquierda
        hijo.x--;
        hijo.y--;
        if(hijo.x >= 0 && hijo.y >= 0 && t[hijo.x][hijo.y] != 1001){
            if(t[hijo.x][hijo.y] < hijo.v){
                hijo.v = t[hijo.x][hijo.y];
                cola.push(hijo);
                t[hijo.x][hijo.y] = 1001;
            }
        }
    }


    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            if(t[i][k] == 1001) cout << 'X' << " ";
            else cout << t[i][k] << " ";
        }

        cout << '\n';
    }

}
