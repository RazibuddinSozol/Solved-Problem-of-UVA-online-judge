#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int t,tc=1,ar[4000],n,a,x;
    cin>>t;
    while(t--){
        cin>>n>>a;
        int sum=0;
        for(int i=1;i<=n;i++)
            ar[i]=0;
        for(int i=1;i<=a;i++){
            cin>>x;
            for(int j=x;j<=n;j+=x){
                ar[j]=1;
            }
        }
        for(int i=1;i<=n;i++){
            if(i%7!=6&&i%7!=0)
                sum=sum+ar[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
