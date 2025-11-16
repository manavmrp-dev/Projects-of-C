#include<stdio.h>
int main(){
    printf("\t\t\t\t\t\t\tMatrix Multiplication\n");
    printf("\t\t\t\t\t\t\t\tBy Manav\n");
    Start:
    int i,j,Multiplication=0;
    printf("Enter Order of Matrix 1 :-\t");
    scanf("%d %d",&i,&j);

    int Matrix1[i][j];

        for(int a=0;a<i;a++)
        {
            for(int b=0;b<j;b++)
            {
                printf("Enter Value of The Element %d%d :-\t",a+1,b+1);
                scanf("%d",&Matrix1[a][b]);
            }
        }
            printf("\n\n\n");
            printf("Matrix 1 :-\n");

        for(int a=0;a<i;a++)
        {
            printf("|\t");
            for(int b=0;b<j;b++)
            {
                printf("%d\t",Matrix1[a][b]);
            }
            printf("|\n");
        }
        printf("\n\n\n");


    int k,l;
    printf("Enter Order of Matrix 2 :-\t");
    scanf("%d %d",&k,&l);

    int Matrix2[k][l];
    for(int a=0;a<k;a++)
    {
        for(int b=0;b<l;b++)
        {
            printf("Enter Value of The Element %d%d :-\t",a+1,b+1);
            scanf("%d",&Matrix2[a][b]);
        }
    }
    printf("\n\n\n");
    printf("Matrix 2 :-\n");

    for(int a=0;a<k;a++)
        {
            printf("|\t");
            for(int b=0;b<l;b++)
            {
                printf("%d\t",Matrix2[a][b]);
            }
            printf("|\n");
        }
        printf("\n\n\n");

        int R_Matrix[i][l];


    if(j==k)
    {
        for(int a=0;a<i;a++)
        {
            for(int c=0;c<l;c++)
            {
                for(int b=0;b<j;b++)
                {
                    Multiplication += Matrix1[a][b] * Matrix2[b][c];
                    
                }



                
                        R_Matrix[a][c] = Multiplication;
                    





                printf("Value of Element %d%d is %d\n",a+1,c+1,Multiplication);
                Multiplication = 0;
            }
            
        }

            printf("\n\n\n");
            printf("Resultant Matrix :-\n");
            for(int e=0;e<i;e++)
                {
                    printf("|\t");
                    for(int f=0;f<l;f++)
                    {
                        printf("%d\t",R_Matrix[e][f]);
                    }
                    printf("|\n");
                }
                printf("\n\n\n");





        printf("Order of Resultent Matrix is %d*%d",i,l);
        int a;
        printf("\n\nIf You Want to Multiplay Matrix Again press 1 :-\t");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\n");
            goto Start;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        int a;
        printf("\n\nMatrix Multiplication is invalid\n\n");
        printf("Matrix Multiplication is Possible When number of Columns of Matrix 1 = number of Rows of Matrix 2\n\n");
        printf("If You Want to Change The Order Start Again by Pressing 1 :-\t");
        scanf("%d",&a);
        if(a==1)
        {
            goto Start;
        }
        else
        {
            return 0;
        }
    }


}
