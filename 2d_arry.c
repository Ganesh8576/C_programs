#include <stdio.h>
#include <conio.h>
void main()
{
    // declare the variable
    int a, i, j, b,k, m, max[50][50], add[50][50], result[50][50];
    printf("enter the size of row : ");
    scanf("%d", &a);
    printf("enter the size of the column ");
    scanf("%d", &b);
    printf("enter you operation \n 1: addatin \n 2: multiplication\n ");
    scanf("%d" , &m);
    switch (m)
    {
    case 1:
    {

        if (a == b)
        {
          printf("enter the frist matrix\n ");
            for (i = 0; i < b; i++)
            {
                
                for (j = 0; j < a; j++)
                {
                    scanf("%d", &max[i][j]);
                }
            }
            for (i = 0; i < b; i++)
            {
                printf("\n");
                for (j = 0; j < a; j++)
                {
                    printf("%d  ", max[i][j]);
                }
            }
            printf("\n enter the second matrix");

            for (i = 0; i < b; i++)
            {
                printf("\n");
                for (j = 0; j < a; j++)
                {
                    scanf("%d", &add[i][j]);
                }
            }
            for (i = 0; i < b; i++)
            {
                printf("\n");
                for (j = 0; j < a; j++)
                {
                    printf("%d  ", add[i][j]);
                }
            }
            // now adding of the two matrix
            for (i = 0; i < b; i++)
            {
                for (j = 0; j < a; j++)
                {
                    // now adding the matrix
                    result[i][j] = max[i][j] + add[i][j];
                }
            }
            printf("\n addition of the matrix is : ");

            for (i = 0; i < b; i++)
            {
                printf("\n");
                for (j = 0; j < a; j++)
                {
                    printf("%d ", result[i][j]);
                }
            }
        }
        else
        {
            printf("your row and column are not equal");
        }
    }
        break;
    case 2 :
    {
        
        
         printf("enter the frist matrix\n ");
            for (i = 0; i < b; i++)
            {
                
                for (j = 0; j < a; j++)
                {
                    scanf("%d", &max[i][j]);
                }
            }
            for (i = 0; i < b; i++)
            {
                printf("\n");
                for (j = 0; j < a; j++)
                {
                    printf("%d  ", max[i][j]);
                }
            }
            printf("\n enter the second matrix");

            for (i = 0; i < b; i++)
            {
                printf("\n");
                for (j = 0; j < a; j++)
                {
                    scanf("%d", &add[i][j]);
                }
            }
            for (i = 0; i < b; i++)
            {
                printf("\n");
                for (j = 0; j < a; j++)
                {
                    printf("%d  ", add[i][j]);
                }
            }
            // now we are  the multiplaying the matrix 
            printf("\n multiplication result: ");
            for ( i = 0; i < b; i++)
            {
                for ( j = 0; j < a; j++)
                {
                    for ( k = 0; k < a; k++)
                    {
                        /* code */
                    
                    
                    result[i][j]  +=  (max[j][k]*add[k][j]);
                    }
                }
                
            }
            // now printing the result the matrix 
            for ( i = 0; i < b; i++)
            {
                printf("\n");
                for ( j = 0; j < a; j++)
                {
                    printf("%d " , result[i][j]);
                }
                
            }
            break;
            
            
    }

    default:
        printf("your opration value is not correct so enter the correct value ");
        break;
    }
}
