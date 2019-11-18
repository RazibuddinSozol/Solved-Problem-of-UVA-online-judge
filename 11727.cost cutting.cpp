#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ara[3],c=1;
    cin>>a;
    while(a--){
        for(int i=0;i<3;i++)
            scanf("%d",&ara[i]);
        sort(ara,ara+3);
        printf("Case %d: ",c++);
        cout<<ara[1]<<endl;
    }
    return 0;
}
