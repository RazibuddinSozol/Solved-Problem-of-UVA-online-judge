#include <stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&d);
    for(i=0;i<d;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&b>c||c>b&&b>a){
            printf("Case %d: %d\n",i+1,b);
        }
        else if(b>a&&a>c||c>a&&a>b){
            printf("Case %d: %d\n",i+1,a);
        }
        if(b>c&&c>a||a>c&&c>b){
            printf("Case %d: %d\n",i+1,c);
        }
           }
    return 0;
}
