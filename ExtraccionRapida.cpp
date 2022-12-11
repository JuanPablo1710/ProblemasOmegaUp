#include <iostream>
#include <queue>
using namespace std;

struct nodo{
    int posicion;
    int pasos = 0;
    int acumulados = 0;
};

int main(){

    int m, n;
    cin >> n >> m;

    bool visitados[n+1] = {false};

    queue<nodo> cola;

    nodo padre, hijo;
    padre.posicion = n;

    cola.push(padre);

    while(!cola.empty()){
        padre = cola.front();
        cola.pop();

        if(padre.posicion == m){
            cout << padre.pasos << endl;
            return 0;
        }

        hijo = padre;

        if(hijo.acumulados == 0 || hijo.acumulados == 1){
            hijo.acumulados++;
            hijo.posicion--;
            hijo.pasos++;
            cola.push(hijo);
            continue;
        }

        hijo = padre;

        if(hijo.posicion - hijo.acumulados >= m){
            hijo.pasos = padre.pasos + 1;
            hijo.posicion -= hijo.acumulados;
            hijo.acumulados *= 2;
            if(!visitados[hijo.posicion]){
                cola.push(hijo);
                visitados[hijo.posicion] = true;
            }
        }

        hijo = padre;

        hijo.pasos++;
        hijo.posicion--;
        hijo.acumulados++;
        if(!visitados[hijo.posicion]){
            cola.push(hijo);
            visitados[hijo.posicion] = true;
        }
    }

    return 0;
}
