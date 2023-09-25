#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,x,t,n1,n2,hx,b1,b2;
    cin>>t;
    while(t--){
        cin>>n;
    b1=0,b2=0;
    n1=n,n2=n;
    while(n1!=0){
        b1+=n1%2;
        n1=n1/2;
    }
    while(n2!=0){
        hx=n2%10;
        if(hx==3||hx==5||hx==9||hx==6)
            b2=b2+2;
        else if(hx=1||hx==2||hx==4||hx==8)
            b2++;
        else if(hx==7)
            b2=b2+3;
        n2=n2/10;
    }
    cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}
