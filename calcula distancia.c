#include <stdio.h>
#include <math.h>

//fun��o que calcula a distancia
float calculaDistancia (int x1,int y1,int x2,int y2){
return sqrt (pow (x2-x1,2)+pow(y2-y1,2));
}
//main
int main(){
	//defini��o das vari�veis
	int x1,y1,x2,y2;
	float distancia;
	
	//leitura das coordenadas dos pontos
	printf("Informe as coordenadas do ponto A: ");
	scanf("%i i%",&x1,y1);
	printf("Informe as coordenadas do ponto B: ");
	scanf("%i i%",&x2,y2);
	
	//calculo da distancia entre os pontos
	distancia = calculaDistancia(x1,y1,x2,y2);
	
	//mostra o resultado
	printf("Distancia: %f",distancia);
	
}