#include<stdio.h>
int main()
{
    int i,j,k,p,q=1,h;
    scanf("%d",&h);
    p=h/2;
    if(h%2==1)
    {
        p+=1;
    }

    for(i=1; i<=p; i++)
    {


        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");

        printf(" ");

        for(k=1; k<=i; k++)
        {
            if(h%2!=0&&i==p)break;
            printf("* ");

        }
        printf("\n");
    }



    return 0;
}
