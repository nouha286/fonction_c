#include<stdio.h>
#include<stdbool.h>

	bool p;
bool isPremier()
{

	int N,i;
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
 if (isPremier( )==true)
 printf("le nombre est premier");
 else
 printf("le nombre est non premier");
 
}
