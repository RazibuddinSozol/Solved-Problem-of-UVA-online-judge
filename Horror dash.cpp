#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ara[10001];
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        for(int j=0;j<b;j++){
            cin>>ara[j];
        }
        sort(ara,ara+b);
        cout<<"Case "<<i+1<<": "<<ara[b-1]<<endl;
    }
    return 0;
}
