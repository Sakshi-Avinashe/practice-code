#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of n :");
	scanf("%d",&n);
	int i=1;
	int s=0;
	while(i<n){
		if(n%i==0){
		s=s+i;
		}
		i++;
    	 }
    	 if(s==n){
     		printf("perfect number\n");
     	}
     		else{
     		printf("not perfect number\n");
     	}
   return 0;
   }
     	
