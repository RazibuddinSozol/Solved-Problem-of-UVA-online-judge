#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int ar[3001],dif[3001],n,flag;
    while(cin>>n){
            flag=0;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n-1;i++){
        dif[i]=abs(ar[i+1]-ar[i]);
    }
    sort(dif,dif+n-1);
    for(int i=0;i<n-1;i++){
        if(dif[i]!=i+1){
           flag=1;
           break;
        }
    }
    if(flag==1)
        cout<<"Not jolly"<<endl;
    else
        cout<<"Jolly"<<endl;
    }
    return 0;
}
