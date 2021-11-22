#include<stdio.h>
#include<stdlib.h>
int divededby(int a,int b)
{
	int div;
	while(b==0)
	{
		printf("la divesion sur 0 est impossible, entrez un nombre different de 0 \n");
		scanf("%d",&b);
	}
	div=a/b;
	return div;
}


bool  isPremier()
{

	int N,i,p;
	printf("entrez un nombre \n");
	scanf("%d",&N);
	 for(i=2;i<N;i++)
	 {
	  if(N%i==0)
	  {
	  	p=false;
	 	 break;
	  }
	  
	  else
	  {
	  	p=true;
	  }
	  	
	  	
	 }
	 return p;
}

int main()
{
	int a,b;
	printf("entrez un nombre entier a \n");
	scanf("%d",&a);
	printf("entrez un nombre entier b \n");
	scanf("%d",&b);
	
	printf("la division de %d sur %d est %d \n",a,b,divededby(a,b));
	
	
	
if (isPremier( )==true)
 printf("le nombre est premier");
 else
 printf("le nombre est non premier");
	
	
	
	
	
}
