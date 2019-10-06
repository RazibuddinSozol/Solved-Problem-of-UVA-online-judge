#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],i,j,temp;
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);

    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(a[j]>=1 && a[j]<=100){
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
            }
            else
                return 0;
        }
    }
    if((a[0]+a[3])==(a[1]+a[2])||(a[3]==a[0]+a[1]+a[2]))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
