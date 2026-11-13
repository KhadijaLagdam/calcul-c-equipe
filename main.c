#include <stdio.h>
int produit(int a,int b){
	return a*b;
}
int main(){
	int x,y;
	printf("modification depuit feature/message");
	printf("entrer la valeur de x =");
	scanf("%d",&x);
	printf("entrer la valeur de y =");
        scanf("%d",&y);
	printf("le produit egale =%d",produit(x,y));
	return 0;
}
