#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,i,b,len;
    char ara[20000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",ara);
        len=strlen(ara);
        if((strcmp(ara,"1")==0)||(strcmp(ara,"4")==0)||(strcmp(ara,"78")==0))
          printf("+\n");
        else if(ara[len-1]=='5'&&ara[len-2]=='3')
            printf("-\n");
        else if(ara[0]=='9'&&ara[len-1]=='4')
            printf("*\n");
        else if (ara[0]=='1'&&ara[1]=='9'&&ara[2]=='0')
            printf("?\n");
    }
    return 0;
}
