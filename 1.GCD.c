#include <stdio.h>
#include <math.h>
unsigned int GCD(int i,int j);
int main()
{
    int a,b;
    printf("Enter the two integers:\n");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d\n",a,b,GCD(a,b));
    return 0;
}
unsigned int GCD(int i,int j)
{
    if(j!=0)
        return GCD(j,i%j);
    else
        return i;
}
