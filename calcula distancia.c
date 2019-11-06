#include <stdio.h>
#include <math.h>

//função que calcula a distancia
float calculaDistrancia (int x1,inty1,int x2,int y2){
return sqrt (pow (x2-x1,2)+pow(y2-y1,2));
}
//main
int main(){
	//definição das variáveis
	int x1,y1,x2,y2;
	float distancia;
	
	//leitura das coordenadas dos pontos
	printf("Informe as coordenadas do ponto A: ");
	scanf("%i i%",&x1,y1);
	printf("Informe as coordenadas do ponto B: ");
	scanf("%i i%",&x2,y2);
	
}