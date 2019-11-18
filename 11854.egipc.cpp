#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while((scanf("%d%d%d",&a,&b,&c))==3){
        if(a==0&&b==0&&c==0)
        return 0;
        else{
            if(c*c==a*a+b*b||b*b==a*a+c*c||a*a==b*b+c*c)
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
    }
   return 0;
}

