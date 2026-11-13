#include <stdio.h>
int produit(int a,int b){
	return a*b;
}

float moyenne(int a, int b){
 return (a+b)/2.0 ;
}

int main(){
	int x,y;
	printf("Projet collaboratif\n");
	printf("entrer la valeur de x =");
	scanf("%d",&x);
	printf("entrer la valeur de y =");
        scanf("%d",&y);
	printf("le produit egale =%d\n",produit(x,y));
        printf("la moyenne egale =%.2f",moyenne(x,y));
	return 0;
}
