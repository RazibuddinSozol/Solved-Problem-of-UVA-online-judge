#include <stdio.h>
#include <string.h>
int main()
{
    int a,i,n;
    char ara[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       scanf("%s",ara);
       if(strlen(ara)==5)
           printf("3\n");
       else if((ara[0]=='t'&&ara[1]=='w')||(ara[0]=='t'&&ara[2]=='o')||(ara[1]=='w'&&ara[2]=='o'))
        printf("2\n");
       else
        printf("1\n");
    }
    return 0;
}
