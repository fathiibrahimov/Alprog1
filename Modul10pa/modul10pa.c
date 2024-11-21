#include "modul10pa.h"

int kalkulator(int a, int b, char op){
	int c = 404;
	
	switch (op){
		case 'T':
		c = a+b;
		break;
		
		case 'K':
		c = a-b;
		break;
		
		case 'X':
		c = a*b;
		break;
		
		case 'B':
		c = a/b;
		break;
		
		default:
		break;
	}
	
	return c;
}