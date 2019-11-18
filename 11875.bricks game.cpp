#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=1,d,ara[10];
    cin>>a;
    while(a--){
         cin>>b;
         for(int i=0;i<b;i++){
             cin>>ara[i];
         }
        sort(ara,ara+b);
        printf("Case %d: ",c++);
        cout<<ara[b/2]<<endl;
    }
    return 0;
}
