#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    double *data;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    data=(double *)calloc(n,sizeof(double));
    if(data==NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    for(i=0;i<n;++i)
    {
        printf("Enter number%d: ",i+1);
        scanf("%lf",data+i);
    }
    for(i=1;i<n;++i)
    {
        if(*data<*(data+i))
        {
            *data=*(data+i);
        }
    }
    printf("Largest number = %.2lf",*data);
    for(i=1;i<n;++i)
    {
        if(*data>*(data+i))
        {
            *data=*(data+i);
        }
    }
    printf("Largest number = %.2lf",*data);
    free(data);
    return 0;
}
