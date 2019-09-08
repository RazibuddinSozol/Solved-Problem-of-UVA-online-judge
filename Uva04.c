#include <stdio.h>
int main()
{
    int i,a,b,c,temp,degr=1080;
    while(scanf("%d%d%d%d",&i,&a,&b,&c)){
        if(i==0&&a==0&&b==0&&c==0){
            break;
        }
        degr=1080;
        temp=i-a;
        if(temp<0){
            temp=temp+40;
        }
        degr=degr+temp*9;
        temp=a-b;
        if(temp<0){
            temp=temp+40;
        }
        degr=degr+temp*9;
        temp=b-c;
        if(temp<0){
            temp=temp+40;
        }
        degr=degr+temp*9;
        printf("%d\n",degr);
    }
    return 0;
}
