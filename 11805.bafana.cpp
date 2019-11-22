#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ct,e=1;
    cin>>a;
    while(a--){
        cin>>b>>c>>d;
        printf("Case %d: ",e++);
        if(c+d>b){
            ct=(c+d)%b;
            cout<<ct<<endl;
        }
        else
            cout<<c+d<<endl;

    }
    return 0;
}
