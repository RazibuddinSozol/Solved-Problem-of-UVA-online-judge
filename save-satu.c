#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,d,c=0,count=0;
    char ara[50];
    char ara2[50];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",ara);

        if(strcmp(ara,"donate")==0){
            scanf("%d",&d);
            c=c+d;
            }
        else
            printf("%d\n",c);
    }
    return 0;
}
