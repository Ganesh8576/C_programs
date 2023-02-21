#include<stdio.h>
#include<conio.h>
#include<math.h>
void  main()
{
    int a , i, arr[50];
    printf ("now we are the wirting the program of the arry");
    printf("enter the size of the array \n my name is shivam ");
    scanf("%d" , &a);
   // scanf("%d",&arr[a]);
   for (i = 0; i < a; i++)
    {
        printf("enter the value of the matrix = ");
        scanf("%d",&arr[i]);
       
    }
    
    for ( i = 0; i < a; i++)
    {
        printf("your value is %d = %d\n4" , i , arr[i]);
    }
    
    
}
