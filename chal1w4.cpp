#include<stdio.h>
#include<stdlib.h>

int add(int a, int b)
{
	int somme;
    somme=a+b;
    
return somme;	
}

int main()
{
	int a,b;
	printf("entrez un nombre a \n");
	scanf("%d",&a);
	
	printf("entrez un nombre b \n");
	scanf("%d",&b);
	
	printf("la somme est %d",add(a,b));
}
