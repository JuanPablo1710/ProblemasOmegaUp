#include "cluedo.h"

// Main
//	int Teoria(int c, int u, int a)

void ResolverCaso() {
	int a = 1, b = 1, c = 1;
	int fn = Teoria(a, b, c);

	while(fn != 0){
		if(fn == 1) a++;
		else if(fn == 2) b++;
		else c++;

		fn = Teoria(a, b, c);
	}

	return;
}
