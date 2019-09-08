#include <stdio.h>
int main()
{
    int a,b,c,i,j,t1,t2;
    while(scanf("%d",&a)){
    if(a==0){
        return 0;
    }
    else{
        scanf("%d%d",&b,&c);
        for(i=0;i<a;i++){
            scanf("%d%d",&t1,&t2);
            if(t1>b&&t2>c)
                printf("NE\n");
            else if(t1>b&&t2<c)
                printf("SE\n");
            else if(t1<b&&t2>c)
                printf("NO\n");
            else if(t1<b&&t2<c)
                printf("SO\n");
            else if((t1==b)||(t2==c))
                printf("divisa\n");
        }
    }
    }
    return 0;
}
