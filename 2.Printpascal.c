#include <stdio.h>
#include <conio.h>
int main()
{
    int n,row,i;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        int a=1;
        for(i=1;i<=row;i++)
        {
            printf("%d ",a);
            a=a*(row-i)/i;
        }
        printf("\n");
    }
    return 0;
}
