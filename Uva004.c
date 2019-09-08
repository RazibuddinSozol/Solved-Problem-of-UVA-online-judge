#include <stdio.h>
int main()
{
    int a,b,c,d,t1,t2,t3,p;
    while(1){
            scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>b){
            t1=a-b;
        }
        else{
            t1=(a-b)+40;
        }
        if(b>c){
            t2=(c-b)+40;
        }
        else{
            t2=(b-c);
        }
        if(c>d){
            t3=(c-d);
        }
        else{
            t3=(c-d)+40;
        }
        p=1080+(t1+t2+t3)*9;
        printf("%d\n",p);
    }
    return 0;
}
