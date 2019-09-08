#include <stdio.h>
int main()
{
    int t,a,b,i,j;
    scanf("%d",&t);
    for(i=t;i>0;i--){
        scanf("%d%d",&a,&b);
        if(a==0||b==0){
            break;
        }
        else{
            printf("%d\n",(a/3)*(b/3));
        }
    }
    return 0;
}
