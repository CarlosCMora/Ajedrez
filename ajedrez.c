#include "funciones.h"

int main(){
	
	coord a,b;
	
	int x;
	x=0;
	while(x!=2){
		x=menu();
		switch(x){
			case 1:
				a=leer();
				b=leer();
				if(a.row==b.row && a.column==b.column){
					printf("Las coordenadas corresponden a la misma casilla.\n");
					break;
				}
				caballo(a, b);
				rey( a,  b);
				reina( a,  b);
				torre( a,  b);
				alfil( a,  b);
				break;
		}
	}
	return 0;
}
