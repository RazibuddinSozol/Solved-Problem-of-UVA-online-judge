#include <stdio.h>
int main()
{
    char ara[100];
    int a,b,c,i,j,max,min;
    scanf("%d",&c);
        for(b=0;b<c;b++){
            scanf("%d",&a);
                for(i=0;i<a;i++){
                    scanf("%d",&ara[i]);
    }
    max=ara[0];
     for(i=0;i<a;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }
    min=ara[0];
    for(i=0;i<a;i++){
        if(ara[i]<min){
            min=ara[i];
        }
    }
    printf("%d\n",(max-min)*2);
    }
    return 0;
}
