#include <stdio.h>
#include <string.h>
int main()
{
    int ara1[10000],ara=0,str1[50],str2[50],i,j,n;
    while(scanf("%d",&n)!=EOF){
    for(i=1;i<=n/2;i++){
        scanf("%s",str2);
        if(strcmp(str2,"denote")==0){
         scanf("%d",&ara1[i]);
        ara=ara+ara1[i];
        }
        scanf("%s",str2);
        if(strcmp(str2,"report")==0){
         printf("%d\n",ara);
            }
        }
    }
    return 0;
}
