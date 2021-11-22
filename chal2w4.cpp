#include<stdio.h>
void echange()
{
	int a,b,c;
	printf("entrez la valeur de a \n");
	scanf("%d",&a);
		printf("entrez la valeur de b \n  ");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("la valeur de b est %d \n la valeur de a est %d",b,a);
	
}

int main()
{
	echange();
}
