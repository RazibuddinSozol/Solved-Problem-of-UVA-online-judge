#include <stdio.h>
int main()
{
    int n,m,p=0;
    for(n=1;n<=10;n=n+1){
        for(m=1;m<=10;m=m+1){
            p=n+p;
              printf("%d X %d = %d\n",n,m,p);
              if(m==10){
                p=0;
              }
        }
    }
    return 0;
}
