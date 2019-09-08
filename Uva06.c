#include <stdio.h>
int main()
{
    int t,a,b,i;
    if(t<15){
       scanf("%d",&t);
    for(i=t;i>0;i--){
        scanf("%d%d",&a,&b);
        if(a<b)
            printf("<\n");
        if(a>b)
            printf(">\n");
        if(a==b)
            printf("=\n");
        }
    }
    else
        printf("0");
    return 0;
}
