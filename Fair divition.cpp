#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c[105];
    cin>>n;
    for(int i=0;i<n;i++){
     int d=0;
        scanf("%d%d",&a,&b);
        for(int j=0;j<b;j++){
           cin>>c[j];
        }
        for(int j=0;j<b;j++){
           d=d+c[j];
        }
        cout<<d<<endl;
    if(d>a){
    while(1){
       int e=0;
        for(int j=0;j<b;j++){
            if(c[j]>(c[b-1])){
                c[j]=c[j]-1;
                cout<<c[j]<<" ";
              }
           e=e+c[j];
        }
        if(e<a){

               c[0]=c[0]+1;
        }
        if(e==a)
              break;
        }
         for(int i=0;i<b;i++){
          cout<<c[i]<<" ";
          }
    }
      else if(d==a){
        for(int j=0;j<b;j++){
            cout<<c[j]<<" ";
        }
}
    else{
         cout<<"IMPOSIBLE";
    }
    }
return 0;
}
