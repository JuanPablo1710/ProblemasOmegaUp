#include <iostream>
#include <queue>
#include <set>
using namespace std;

struct nodo{
	int valor;
	int pasos = 0;
};

int main(){

	int a, b, n;
	cin >> a >> b >> n;

	queue<nodo> numeros;
	set<int> visit;

	nodo padre, hijo;
	padre.valor = 1;
	numeros.push(padre);
	visit.insert(padre.valor);
	visit.insert(0);

	while(!numeros.empty()){

		padre = numeros.front();
		numeros.pop();

		//cout << padre.valor << endl;

		if(padre.valor == n){
			cout << padre.pasos << endl;
			return 0;
		}

		hijo = padre;
		hijo.valor = padre.valor * a;

		if((hijo.valor < 9999) && (visit.find(hijo.valor) == visit.end())){
			hijo.pasos++;
			numeros.push(hijo);
			visit.insert(hijo.valor);
			//cout << hijo << endl;
		}

		hijo = padre;
		hijo.valor = padre.valor / b;

		if(visit.find(hijo.valor) == visit.end()){
			hijo.pasos++;
			numeros.push(hijo);
			visit.insert(hijo.valor);
			//cout << hijo << endl;
		}

	}

	return 0;
}
