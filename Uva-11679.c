#include<stdio.h>
int main()
{
    int ara1[10],ara2[10],b,n,i,d,j,k,count=0;
    scanf("%d%d",&b,&n);
    if(b==0&&n==0)
        return 0;
    else if(1<=b<=20){
        if(1<=n<=20){
            for(i=1;i<=b;i++){
                scanf("%d",&ara1[i]);
            }
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    scanf("%d",&ara2[k]);
                }
            }
            for(k=1;k<=n;k++){
                    d=k;
                if(ara2[k]>n){
                    printf("N\n");
                    break;
                }
                else
                    count++;
                }
                if(count==d)
                   printf("S\n");
        }
    }
    return 0;
}

