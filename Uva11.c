#include <stdio.h>
int main()
{
    int a=1,c=0,n,i,count=0,ara1[1000];
    while(1){
        scanf("%d",&n);
        c=0;
        count=0;
    if(n==0){
         return 0;
    }
    else{
    for(i=0;i<n;i++){
        scanf("%d",&ara1[i]);
        if(ara1[i]==0)
            count++;
        else
           c++;
        }
        printf("Case %d: %d\n",a,c-count);
        a++;
        }
    }
    return 0;
}
