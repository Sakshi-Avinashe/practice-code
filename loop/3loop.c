 /*Write a program to print a solid square pattern of N rows and N columns using the asterisk character (*), where integer N is given as an input. 
 
 
 #include<stdio.h>
 int main()
 {
 	int n;
 	char c;
 	for(int i=0; i<n; i++)
	 {
 		c=(("*")*n);
 	}
 	printf("%d",c);
 return 0;
 }
 */
 
 
 #include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

