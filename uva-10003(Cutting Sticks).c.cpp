#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int l,n,ar[1000];
    while(cin>>l&&l){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        cout<<"The minimum cutting is "<<ar[0]+ar[n-1]+l<<"."<<endl;;
    }
    return 0;
}
