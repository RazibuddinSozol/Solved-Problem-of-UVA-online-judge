#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,p,f[500001],ara2[20],ara1[20];
    int i,j;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4){
            int pls=0;
          for(int i=0;i<c;i++){
            cin>>ara1[i];
            for(int j=0;j<d;j++)
                cin>>ara2[j];
                sort(ara2,ara2+d);
            for(int j=0;j<d;j++){
                if((ara2[0]>=a)&&(a*ara1[i]<=b)){
                    f[pls++]=a*ara1[i];
                    }
            }
          }
          if(pls==0)
             cout<<"stay home"<<endl;
        else{
            sort(f,f+pls);
            cout<<f[0]<<endl;
            }

   }
   return 0;
}
