#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0,r;
    printf("Enter number:");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
