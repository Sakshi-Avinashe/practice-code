/*#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
		int i=1;
	while (i<=n){
		int j=1;
	while(j<=i){
		printf("* ");
		j++;
	}
	printf("\n");
	i++;
	}
return 0;
}  */


/*#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n ");
	scanf("%d",&n);
	int i=n;
	while(i>0){
	int j=1;
	while(j<=i){
		printf("*");
		j++;
	}
	printf("\n");
	i--;
	}
	return 0;
} */




/*Write a program to print a solid square pattern of N rows and N columns using the asterisk character (*), where integer N is given as an inp  

#include<stdio.h>
int main()
{
int n;
printf("enter the number of rows and coloun ");
scanf("%d",&n);

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		printf("*");
		}
		printf("\n");	
		}
		
		return 0;
}  */


/* given an integer number (N) as input. Write a program to print the right-angled triangular pattern of N lines using an asterisk(*) character.   

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
		printf("*");
		}
	printf("\n");
	}
	
return 0;
}   */


/*Given an integer number (N) as input. Write a program to print the sum of first N natural numbers. 


#include<stdio.h>
int main()
{
int n;
int s=0;
scanf("%d",&n);
	for(int i=0; i<=n; i++){
	s=s+i;
	}
	{
	printf("%d",s);
	}
return 0;
} */


/*Given an integer N, write a program which reads N inputs and prints them.  

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
	int k;
	scanf("%d",&k);
	printf("%d",k);
	}
	return 0;
}    */

 /*Given an integer N, write a program which reads N inputs and prints the sum of the given input integers.
 
 
 #include<stdio.h>
 int main()
 {
 int n;
 int s=0;
 scanf("%d",&n);
 	for(int i=1; i<=n;i++){
 	int k;
 	scanf("%d",&k);
 	s=s+k;
 	
 	}
 	
 	printf("%d",s);
 	return 0;
 }  */
 
 
 /*Write a program to print integers from N to 1.
 
 
 #include<stdio.h>
 int main()
 {
 int n;
 scanf("%d",&n);
 	for(int i=1; n>=i; n=n-1){
 	printf("%d",n);
 	}
 	
 	return 0;
 }  */
 
 /*Write a program to print a rectangle pattern of
M rows and N columns using the plus character (+).
Note: There is a space after each plus + character.  

#include<stdio.h>
int main()
{
int m,n;
scanf("%d%d",&m,&n);
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
	printf("+");
	}
	{
	printf("\n");
	}
	}
	return 0;
}  */

 	
/*N, write a program which reads N inputs and prints the product of the given input integers.  

#include<stdio.h>
int main()
{
int p=1;
int n;
scanf("%d",&n);
	for(int i=1; i<=n; i++){
	int k;
	scanf("%d",&k);
	p=p*k;
	}
	printf("%d",p);
	return 0;
}  */

/*Given an integer number
N as input. Write a program to print the double triangular pattern of N lines using an asterisk(*) character as shown below.  
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);

      //print upper triangle
	for(int i=1; i<=n; i++){
	for(int c=1; c<=i; c++){
	printf("* ");
	}
	{
	printf("\n");
	}
	}

       /* //print lower triangle
	for(int i=n-1; i>=1; i--){
	for( int c=1; c<=i; c++){
	printf("* ");
	}
	printf("\n");
	} 
	
	
	
	for(int i=1; i<=n; i++){
	for(int c=1; c<=i; c++){
	printf("* ");
	}
	{
	printf("\n");
	}
  }
	
	return 0;
}  */

 
/*Write a program to print the factorial of N.
Factorial is the product of all positive integers less than or equal to N.   


#include<stdio.h>
int main()
{
int n,r;
scanf("%d",&n);
	for(int i=1; n>=i; n--){
	r=n*i;
	printf("%d",r);
	}
    return 0;
    }  */
    
    
/* write a program to print first 10 integer and their square 

#include<stdio.h>
int main()
{
int n,e;
scanf("%d",&n);
	for(int i=1; i<=n; i++){
	e=i*i;
	printf("%d ",e);
	}
	return 0;
}  */

/*write while loop statement to print the following series;
10,20,30,40.......300.  

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
	for(int m=10; m<=n; m=m+10){
	m=m*1;
	printf("%d",m);
	}
	return 0;
}  */

 /*write a program to print the first 10 natural number order.  
 
 #include <stdio.h>
 int main()
{
int n,i;
scanf("%d",&n);
	for(int i=1; n>=i; n=n-i){
	
	printf("%d",n);
	}
	return 0;
}  */

/*write a program to print table of a number entered from the user.  

#include<stdio.h>
int main()
{
int m;
int a;
scanf("%d",&a);
	for(int i=1; i<=10; i++){
	m=i*a;
	printf("%d",m);
	}
	return 0;
	
}  */


/*write a program to find the sum of the digits of a number accepted from the user.   

#include<stdio.h>
int main()
{
int n,a;
int s=0;
scanf("%d",&n);
	for(int i=1; n>0; ){
	a=n%10;
	s=s+a;
	n=n/10;
	}
	printf("%d",s);
return 0;
}  */


   /*write a program to print the reverse the number accepted by user.   
   
   #include <stdio.h>
   int main()
   {
   int n,a;
   int s=0;
   scanf("%d",&n);
   	for (int i=0; n>i;){
   	a=n%10;
   	s=s*10+a;
   	n=n/10;
   	
   	printf("%d\n",s);
   	}
   return 0;
   }   */
   
   
 /*Write a program to print the Fibonacci series till n  terms(accpted from the user)  


#include<stdio.h>
#include<string.h>
int main()
{
int n;
int a=1,m;
int b=0;
scanf("%d",&n);
	while (b<=n){
	printf("%d",b);
	 int m=b+a;
	     b=a;
	     a=m;
	}
	return 0;
}   */

/*Write a program to check whether a number is Armstrong or not. (Armstrong number is a number that is
equal to the sum of cubes of its digits, for example : 153 = 1^3 + 5^3 + 3^3.)   


#include<stdio.h>
int main()
{
	int n,a;
	int s=0;
	scanf("%d",&n);
		while(n>0){
		a=n%10;
		s=s+a*a*a;
		n=n/10;
		}
		printf("%d",s);
return 0;
}   */

	
/*Write a program to print the factorial of a number accepted by the user.   


#include<stdio.h>
int main()
{
int n;
int f=1;
scanf("%d",&n);
	for(int i=1; i<=n; i++){
	f=f*i;
	}
	printf("%d",f);
return 0;
}*/


/*Write a program to check whether a number is palindrome or not. 


 #include <stdio.h>

int main() {
    int n, rev = 0, original;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n; // Store the original number
    
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    
    if (original == rev) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }
    
    return 0;
}
*/
/*Write a python program to sum the sequence:
1 + 1/1! + 1/2! + 1/3! + …….. + 1/n!     


#include<stdio.h>
int main()
{
int n,i;
float s;
int fact=1;
while(i<=n){
   fact=i;
   printf("%d",i);
    s=s+1/fact;
   }
   printf("%f",s);
  return 0;
  }  */




/*Write a program to accept 10 numbers from the user and display it’s average.  

#include<stdio.h>
int main()
{
   int n,i;
   float avg,s=0;
   int count=0;
   scanf("%d",&n);
	for(int i=1; i<=n; i++){
	s=s+i;
	count=count+1;
	}
	avg= s/count;
	printf("%f",avg);
        return 0;
}  */

//loop assignment 4

/*Draw a flowchart to show how to obtain the HCF and LCM of two numbers. (input two numbers from the user)  

#include<stdio.h>
int main()
{
int a,b,m,n,lcm,hcf,rem;
scanf("%d%d",&a,&b);

     	while(n!=0){
     	rem = m % n;
     	m=n;
     	n=rem;
        }
       
        
        hcf=m;
        lcm=(a*b) / hcf;
        
        printf("%d\n%d",hcf,lcm);
        return 0 ;
  }  */

/*construct a flowchart to show how to determine whether a given number is a perfect number.  (Input the number from the user)
Note: A number is said to be a perfect number if the sum of its factors (except itself) equals the number.

#include<stdio.h>
int main()
{
int n,m;
int s=0;
scanf("%d",&n);
for(int i=1; n>=i;){
	m=n%10;
	s=s*10+m;
	n=n/10;
	}
	printf("%d",s);
	return 0;
}  */


/*construct a flowchart for obtaining the sum of a given number of terms (n) for a given value of X in the following mathematical series: (Input X and n from the user)
X+X2/2+X3/3+X4/4  ....upto n terms
X-X33+X55-X77+X99 ....upto n terms
X-12X3+12.34X5-12.34.56X7+ .... upto n terms
X-X33!+X55!-X77!+ .... upto n terms   */


























