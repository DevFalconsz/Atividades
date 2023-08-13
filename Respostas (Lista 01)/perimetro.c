#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float per(float r){
	float p;
	p = 2*3.14*r;
	return p;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r;
	r = 2;
	printf("\n%f", per(r));
	system("PAUSE");	
}
