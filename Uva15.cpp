#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ara[50],ara2[50];
    int i,j,n;
    for(i=1;;i++){
        scanf("%s",ara);
        if(strcmp(ara,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(strcmp(ara,"Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n",i);
        else if(strcmp(ara,"*")==0)
            return 0;
    }
    return 0;
}

