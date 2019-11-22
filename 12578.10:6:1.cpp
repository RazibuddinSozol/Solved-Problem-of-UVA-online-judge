#include<bits/stdc++.h>
using namespace std;
int main()
{
    double b,c,d,e,pi=acos(-1),cr;
    int a;
    scanf("%d",&a);
    while(a--){
//        cr=0;
//        c=0;
        scanf("%lf",&b);
        c=(0.2*b);
        cr=(0.6*b)*b-pi*c*c;
        printf("%0.2lf %0.2lf\n",pi*c*c,cr);
    }
    return 0;
}
