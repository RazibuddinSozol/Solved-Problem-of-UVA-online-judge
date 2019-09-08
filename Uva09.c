#include <stdio.h>
int main()
{
    int a,b,p,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
    scanf("%d",&b);
    p=((((((b*567)/9)+7492)*235)/47)-498);
    if(p<0)
        p=(p)*(-1);
    printf("%d\n",(p%100)/10);
    }
    return 0;
}
