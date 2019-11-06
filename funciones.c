#include "funciones.h"
int menu(){
	int x;
	printf("\tMENU\n 1)Calcular Movimientos\n 2)salir\n\n->");
	scanf("%d", &x);
	return x;
}

coord leer() {
	coord a;
	char b;
	a.column=0;
	a.row=0;
	printf("\tIngresa las coordenadas\n");
	//Lee coordenada de la columna y comprueba si están dentro del rango de A a H.
	while(a.column==0){
		printf(" Ingresa la columna inicial\n");
		scanf(" %c", &b);
		b= toupper(b);
		switch(b){
			case 'A': 
				a.column=1;
				break;
			case 'B':
				a.column=2;
				break;
			case 'C':
				a.column=3;
				break;
			case 'D':
				a.column=4;
				break;
			case 'E':
				a.column=5;
				break;
			case 'F':
				a.column=6;
				break;
			case 'G':
				a.column=7;
				break;
			case 'H':
				a.column=8;
				break;
			default:
				printf("Dato invalido, por favor ingrese de nuevo el dato. 2\n");
				a.column=0;
		}
	}
	//Lee coordenada de la fila y comprueba si están dentro del rango de 1 a 8.
	while(a.row<=0 || a.row>8){
		printf(" Ingresa la fila inicial\n");
		scanf("%d", &a.row);
		if(a.row<=0 || a.row>8){
			printf("Dato invalido, por favor ingrese de nuevo el dato.\n");
		}
	}
	
	return a;
}

void caballo(coord a, coord b){
	if(a.column+2 == b.column || a.column-2 == b.column ){
		if(a.row-1 == b.row || a.row+1 == b.row){
			printf("\n\tEl Caballo puede moverse a la otra casilla\n");
			return 0;
		}
	}else if(a.row+2 == b.row || a.row-2 == b.row ){
		if(a.column-1 == b.column || a.column+1 == b.column){
			printf("\n\tEl Caballo puede moverse a la otra casilla\n");
			return 0;
		}
	}
	printf("\n\tEl Caballo NO puede moverse a la otra casilla\n");
	
}

void rey(coord a, coord b){
	if(b.column == a.column+1 || b.column == a.column-1){
		if(a.row-1 == b.row || a.row+1 == b.row || a.row == b.row){
			printf("\n\tEl Rey puede moverse a la otra casilla\n");	
			return 0;
		}
	}
	else if(a.column==b.column){
		if(a.row+1==b.row || a.row-1==b.row){
			printf("\n\tEl Rey puede moverse a la otra casilla\n");
			return 0;
		}
	}
	
	printf("\n\tEl Rey NO puede moverse a la otra casilla\n");
	
}

void reina(coord a, coord b){
	
	int m;
	if (b.column-a.column==0){
		
	}
	else{
		m=(b.row-a.row)/(b.column-a.column);
	}
	

	if(a.row == b.row || a.column == b.column){
		printf("\n\tLa Reina puede moverse a la otra casilla\n");
	}
	else if(m==1 || m==-1){
		printf("\n\tLa Reina puede moverse a la otra casilla\n");
	}
	else{
		printf("\n\tLa Reina NO puede moverse a la otra casilla\n");
	}
}

void torre(coord a, coord b){
	if(a.row == b.row || a.column == b.column){
		printf("\n\tLa Torre puede moverse a la otra casilla\n");
	}else{
		printf("\n\tLa Torre NO puede moverse a la otra casilla\n");
	}
}

void alfil(coord a, coord b){
	
	int m;
	if (b.column-a.column==0){
			printf("\n\tEl Alfil NO puede moverse a la otra casilla\n");
			return 0;
	}
	else{
		m=(b.row-a.row)/(b.column-a.column);
	}
	
	if(m==1 || m==-1){
		printf("\n\tEl Alfil puede moverse a la otra casilla\n");
	}
	else{
		printf("\n\tEl Alfil NO puede moverse a la otra casilla\n");
	}
	
}


