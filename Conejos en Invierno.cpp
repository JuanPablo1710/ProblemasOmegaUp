#include <iostream>
using namespace std;

string hayConejos(string cadena){
	int longitud = cadena.length();

    for(int k=0; k < longitud; k++){
        if(cadena[k] == 'c') return "Puede haber conejos";
    }

    return "No se observaron conejos";
}

int main(){

	int n;
	cin >> n;

	for(int k = 0; k < n; k++){
		string cadena;
		cin >> cadena;
		cout << hayConejos(cadena) << endl;
	}

	return 0;
}
