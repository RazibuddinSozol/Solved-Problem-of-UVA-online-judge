#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while((scanf("%d%d",&a,&b))==2){
        c=a+(a-1)/(b-1);
        cout<<c<<endl;
    }
    return 0;
}
