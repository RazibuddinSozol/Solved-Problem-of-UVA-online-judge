#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,mx,mn,md,k,ara[3];
    cin>>k;
    while(k--){
        cin>>a>>b>>c>>d;
        for(int i=0;i<3;i++){
           scanf("%d",&ara[i]);
        }
        sort(ara,ara+3);
        e=(ara[2]+ara[1])/2;
        f=a+b+c+d+e;
        if(f>=90&&f<=100)
           cout<<"A"<<endl;
        else if(90>f&&f>=80)
           cout<<"B"<<endl;
        else if(80>f&&f>=70)
            cout<<"C"<<endl;
        else if(70>f&&f>=60)
            cout<<"D"<<endl;
        else
            cout<<"F"<<endl;
    }

return 0;
}
