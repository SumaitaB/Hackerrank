#include<stdio.h>
int main()
{
    int c=0;
    char ch,s[20];
    char sen[100];

    scanf("%c",&ch);
    printf("%c\n",ch);

    scanf("%s",&s);
    printf("%s\n",s);

    scanf(" %[^\t\n]s",&sen);
    printf("%s", sen);

    return 0;
}
