#include <stdio.h>
int main()
{
    int i,a,b,c,deg,temp;
    while (scanf("%d%d%d%d",&i,&a,&b,&c))
    {
        if (i==0 &&a==0 && b==0 && c==0) {
            break;
        }
        deg=1080;
        temp=i-a;
        if (temp<0){
            temp=temp+40;
        }
        deg+=temp*9;
        temp=b-a;
        if (temp<0){
            temp=temp+40;
        }
        deg+=temp*9;
        temp=b-c;
        if (temp<0){
            temp=temp+40;
        }
        deg+=temp*9;
        printf("%d\n",deg);
    }
    return 0;
}
