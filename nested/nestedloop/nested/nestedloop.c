/*print 1 to 5 table. 

#include<stdio.h>
int main() 

{
	for(int i=1; i<=5; i++)
	{
	   for(int j=1; j<=10; j++)
	   {

		printf("%d\n",j*i);
	   }
	   printf("\n");
	}
	return 0;
}*/



/*take 10 number from user and print their product.


#include<stdio.h>
int main()
{
int p=1;
	for(int i=1; i<=10; i++)
	{
	p=p*i;
	printf("%d",p);
	}
	return 0;
}  */


/*1
  12
  123
  1234
  12345
  
  #include<stdio.h>
  int main()
  {
  	for(int i=1; i<=5; i++)
  	{
  		for(int j=1; j<=i; j++)
  		{
  		printf("%d",j);
  		}
  		printf("\n");
  	}
  	return 0;
  }   */
  
/*develop a flowchart to show how to find all the perfect number under 100.  	
  
  #include<stdio.h>
  int main()
  {
  for(int i=1; i<=100; i++)
  {     
        int s=0;
  	for(int a=1; a<i;)
  	{
  		if(i%a==0){
  			s=s+a;
  			}
  		a++;
  		    
        }
        if(s==i){
        printf("perfect %d\n",i);
        }
    }
       return 0;
     }  */
     
     
/*  1
    22
    333
    4444
    55555  
    
    
    #include<stdio.h>
    int main()
    {
    	for(int i=1; i<=5; i++)
    	{
    		for(int j=1; j<=i; j++)
    		{
    		printf("%d",i);
    		}
    		printf("\n");
    	}
    	return 0;
    }   */
    
/*54321
  5432
  543
  54
  5  
  
  #include<stdio.h>
  int main()
  {
  	for(int i=1; i<=5; i++)
  		{
  	          for(int j=5; j>=i; j--)
  	          {
  	          printf("%d",j);
  	          }
  	          printf("\n");
  	        }
  	        return 0;
  } */
  
  
/*12345
  1234
  123
  12
  1   
  #include<stdio.h>
  int main()
  {
  	for(int i=5; i>=1; i--)
  	{
  		for(int j=1; j<=i; j++)
  		{
  		printf("%d",j);
  		}
  		printf("\n");
  	}
  	return 0;
  }  */
  
/*55555
  4444
  333
  22
  1  
  
  #include<stdio.h>
  int main()
  {
  	for(int i=5; i>=1; i--)
  	{
  		for(int j=1; j<=i; j++)
  		{
  			printf("%d",i);
  		}
  		printf("\n");
         }
         return 0;
   }   */
   
   
 /*5
   44
   333
   2222
   11111   
   
   
   #include<stdio.h>
   int main()
   {
   int a=5;
   	for(int i=1; i<=5; i++)
   	{      
   	     for(int j=1; j<=i; j++)
   		{
   		   printf("%d",a);
                     
   		}
   		printf("\n");	
   		 a--;
        }
        return 0;
    }   */
    
    
/*  *****
    ****
    ***
    **
    *   
    
    #include<stdio.h>
    int main()
    {
    	for(int i=5; i>=1; i--)
    	{
    		for(int j=1; j<=i; j++)
    		{
    			printf("*");
    		}
    		printf("\n");
    	}
    	return 0;
    }  */
    
    
 /* 55555
    5555
    555
    55
    5   
    
    
    
    #include<stdio.h>
    int main()
    {
    	for(int i=5; i>=1; i--)
    	{
    		for(int j=1; j<=i; j++)
    		{
    			printf("5");
    		}
    		printf("\n");
    	}
    	return 0;
    }  */
    
/*  1
    21
    321
    4321
    54321  
    
  #include<stdio.h>
  int main()
  {
  int s=0;
  int m=1;
  	for(int i=0; i<=5; i++)
  	{
  		for(int j=1; j<=i; j++)
  		{
  			printf("%d",m);
  			m=m-1;
  		}
  		printf("\n");
  		s=s+1;
  		m=s;
  	}
  	return 0;
  }    */
  
  
/*1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15  
  
  
  #include<stdio.h>
  int main()
  
  {
       int a=1;
  	for(int i=1; i<=5; i++)
  	{
  	 
  		for(int j=1; j<=i; j++)
  		{
  			printf("%d ",a);
  			a=a+1;
  			
  		}
  		printf("\n");
  	}
  	return 0;
  }  */
  
  
/*1
  234
  56789   
  
  #include<stdio.h>
  int main()
  {
  int a=1;
  int m=1;
  int n=3;
  	for(int i=1; i<=n; i++)
  	{
  		for(int j=1; j<=a; j++)
  		{
  			printf("%d",m);
  			m=m+1;
  		}
  		printf("\n");
  		a=a+2;
  	}
  	return 0;
  }   */
  
  
/*1  2  3  4  5
  6  7  8  9  10
  11 12 13 14 15
  16 17 18 19 20
  21 22 23 24 25   
  
  #include<stdio.h>
  int main()
  {
  int a=1;
  	for(int i=1; i<=5; i++)
  	{	
  		for(int j=1; j<=5; j++)
  		{
  			printf("%d ",a);
  			a++;
  		}
  		printf("\n");
  	}
  	return 0;
  }  */
  	
/*12345
  12345
  12345
  12345
  12345  
  
  #include<stdio.h>
  int main()
  {
  
  int a=1;
  	for(int i=1; i<=5; i++)
  	{	
  		for(int j=1; j<=5; j++)
  		{
  			printf("%d ",j);
  			a++;
  		}
  		printf("\n");
  	}
  	return 0;
  }  */
  
  
/*11111
  22222
  33333
  44444
   
  
  #include<stdio.h>
  int main()
  {
  	for(int i=1; i<=4; i++)
  	{
  		for(int j=1; j<=5; j++)
  		{
  			printf("%d",i);
  		}
  		printf("\n");
  	}
  	return 0;
  }  */
  
  
/******
  *****
  *****
  *****
  *****  
  
  #include<stdio.h>
  int main()
  {
  	for(int i=1; i<=5; i++)
  	{
  		for(int  j=1; j<=5; j++)
  		{
  			printf("*");
  		}
  		printf("\n");
  	}
  	return 0;
  }   */
  
  
/*1
  4  4
  9  9  9
  16 16 16 16   
  
  
  #include<stdio.h>
  int main()
  {
        int k;
  	for(int i=1; i<=4; i++)
  	{
  		for(int j=1; j<=i; j++)
  		{
  		 	k=i*i;
  		 	printf("%d",k);
  		 }
  		 printf("\n");
  	}
  	return 0;
  }   */
  
/*1
  33
  555
  7777
  99999   
  
  #include<stdio.h>
  int main()
  {     int n;
        scanf("%d",&n);
        int a=1;
  	for(int i=1; i<=5; i++)
  	{
  		for(int j=1; j<=i; j++)
  		{
  			printf("%d",a);
  			
  		}
  		a=a+2;
  		printf("\n");
  	}
  	return 0;
  }   */
  
  
/*0
  01
  012
  0123
  01234
  012345   
  
  #include<stdio.h>
  int main()
  {
  	for(int i=0; i<=5; i++)
  	{
  		for(int j=0; j<=i; j++)
  		{
  			printf("%d",j);
  		}
  		printf("\n");
  	}
  	return 0;
  }    */
  
  
/*   1
    21
   321
  4321  
  
  #include<stdio.h>
  int main()
  {
        int a=1;
        int num;
  	for(int i=1; i<=4; i++)
  	{
  	        num=i;
  		for(int j=4; j>i; j--)
  		{
  	           printf("_");
  	        }
  	        	for(int j=i; j>=1; j--)
  	        	{
  			    printf("%d",num);
  			     num--;
  		        }
  		printf("\n");
  	}
  	return 0;
  }   */
  
  
  
/*  A B C D
    A B C D
    A B C D
    A B C D   
    
    
    
    #include<stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    		for(int i=1; i<=n; i++)
    		{
    		        int s=1;
    			for(int j=1; j<=n; j++)
    			{        
    			        int f=s+64;
    			        char ch= (char)f;
    				printf("%c",ch);
    				s++;
    			}
    			printf("\n");
    		}
    		return 0;
    }   */
  
  
         
/*A         
  AB
  ABC
  ABCD	
  
  
  
  #include<stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    		for(int i=1; i<=n; i++)
    		{
    		        int s=1;
    			for(int j=1; j<=i; j++)
    			{        
    			        int f=s+64;
    			        char ch= (char)f;
    				printf("%c",ch);
    				s++;
    			}
    			printf("\n");
    		}
    		return 0;
    }  */
    
    
/*  1
    A B
    1 2 3
    A B C D
    1 2 3 4 5   */
    
 /*
  *    *
   *  *
    * 
   *  *
  *    *
 *      *     
 
 
 #include<stdio.h>
 int main()
 {
 int n;
 scanf("%d",&n);
 	for(int i=1; i<=n; i++)
 	{	for(int j=1; j<=n; j++)
 		{
 		if(i==j || i+j==n+1) {
 			printf("*");
 			}
 		else
 		printf(" ");
 		}
 		printf("\n");
 	}
 	return 0;
 }    */
 /*1
  01
  101
  0101   
 
 
 #include<stdio.h>
 int main()
 {
 int n,a;
 scanf("%d",&n);
 	for(int i=1; i<=n; i++){
 	
            	for(int j=1; j<=i; j++)
 		     {
 		       if((i+j)%2==0) printf("1");
 		       else printf("0");
 		    }
 		    printf("\n");
         }
         return 0;
 }     */
 
/*


a = 1+(n-1)-2
  = 2*n-1
       *
      * *
     * * *
    * * * *
   * * * * *     
   
   
   #include<stdio.h>
   int main()
   {
   int n;
   scanf("%d",&n);
   int nst=1;
   	for(int i=1; i<=n; i++)
   	{
   		for(int k=1; k<=n-i; k++){
   			printf(" ");
   			}
   			for(int j=1; j<=nst; j++){
   			printf("*");
   			}
   			nst=nst+2;
   			printf("\n");
         }
        return 0;
      }   */
      
/*      
      1
      121
      12321
      1234321    
      
      #include<stdio.h>
      int main()
      {
        int n;
        scanf("%d",&n);
        
        int nsp =n-1; 	
        for(int i=1; i<=n; i++)
      	{        
      	        int a=i-1;
      		for(int k=1; k<=nsp; k++)
      		{  
      		 printf(" ");
      		}
      		nsp--;
      			for(int j=1; j<=i; j++)
      			{
      				{
      				printf("%d",j);
      				}
      					for(int k=1;k<=i-1;k++)
      					{
      						printf("%d",a);
      						a--;
      					}
      			}
      					printf("\n");
      	 }
      	 return 0;
      	}    */
      	
/*      	
      	   A
      	  ABA
      	 ABCBA
      	ABCDCBA   */
      	
 /*     	
      	  *
      	 ***
      	****
       ******
     	****
     	 ***
     	 **
     	 *	   
      		
      		
 #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nsp = n - 1;
    int nst = 1;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }

        for (int k = 1; k <= nst; k++) {
            printf("*");
        }

        nsp--;
        nst += 2;

        printf("\n");
    }

    // Lower half of the diamond
    nsp = 1;
    nst = 2 * n - 3;

    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }

        for (int k = 1; k <= nst; k++) {
            printf("*");
        }

        nsp++;
        nst -= 2;

        printf("\n");
    }

    return 0;
}  */

/*     
 #include<stdio.h>
 int main()
 {       
        int n;
        scanf("%d",&n);
 	int nsp = n-1;
 	int nst = 1; 
 	
 	for(int i=1; i<2*n+1; i++){
 			printf("*");
 		
    }
    printf("\n");
 	for(int i=1; i<=n; i++){
 		for(int j=1; j<=nst; j++){
 			printf("*");
   }
 			for(int k=1; k<=nsp; k++){
 				printf(" ");
 			}
 				for(int l=1; l<=nst; l++){
 					printf("*");
 				}
 			      nst--;
 			      nsp+=2;
 			      printf("\n");
 		
       }
 	return 0;
 }	 */									
      
      
   		
 /*
 #include<stdio.h>
 int main()
 {
 int n;
 scanf("%d",&n);
 
 	int nst = n;
 	int nsp = 1;
 	for(int i=1; i<=n; i++)
 	{
 	
 	printf("%d",i);
 	}
 	printf("\n");
 	
 	for(int i=1; i<=n*n-1; i++){
 	int a=1;
 		for(int j=1; j<=nst; j++)
 		{
 			printf("%d",a);
 			a++;
 		}
 		for(int k=1; k<=nsp; k++)
 	{
 	
 	printf(" ");
 	a++;
 	}
 	for(int m=1; m<=nst; m++){

 	printf("%d",a);
 	 a++;
 	 }
 		nst--;
 		nsp+=2;
 		printf("\n");
 	}
 	return 0;
 }   */
 
 
 /*		
 4444444
 4333334
 4322234
 4321234
 4322234
 4333334
 4444444    
 
 #include<stdio.h>
 int main()
 {
    int n;
    scanf("%d",&n);
    int min= 0;
    	for(int i=1; i<=2*n-1; i++)
    	{
    		for(int j=1; j<=2*n-1; j++)
    		{
    			int a=i;
    			if(i>n) a= 2*n -i;
    				
    				int b=j;
    				if(b>n) b=2*n -j;
    					if(a<b) min= a;
    					else min = b;
    					printf("%d",n+1-min);
    		}
    					printf("\n");
    	  }
    	  return 0;
   }  */
   
// printing heart.   
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<n; j++)
        {
            if (j<=n-i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        for (int j=1; j<n; j++)
        {
            if (j<=n-i)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for (int i=0; i<=n+1; i++)
    {
        printf("* ");
    }
    printf("\n");
    for (int i=0; i<=n+2; i++)
    {
        for (int j=0; j<i; j++)
        {
            printf(" ");
        }
        for (int j=0; j<n+2-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}    


	
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
  
  
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
