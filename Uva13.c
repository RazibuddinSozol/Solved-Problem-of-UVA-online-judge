#include<stdio.h>
int main()
{
    int ara[50],n,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        for(i=1;i<=3;i++){
            scanf("%d",&ara[i]);
            }
            if(ara[1]<=20&&ara[2]<=20&&ara[3]<=20){
                 printf("Case %d: good\n",j);
            }
            else{
                printf("Case %d: bad\n",j);
            }
        }
    return 0;
}
