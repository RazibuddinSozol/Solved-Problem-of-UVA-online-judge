#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=1;
    cin>>a;
    while(a--){
        d=0;
        cin>>b>>c;
        for(int i=b;i<=c;i++){
            if(i%2!=0){
               d=d+i;
            }
        }
        printf("Case %d: ",e++);
        cout<<d<<endl;
    }
    return 0;
}
