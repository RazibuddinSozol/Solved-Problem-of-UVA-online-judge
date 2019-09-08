#include <stdio.h>
int main()
{
    int t, n, p,i, max,min,d;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        max=0;
        min=50000;
        for (i=0;i<n;i++)
        {
            scanf("%d",&p);
            if (max<p) max=p;
            if (min>p) min=p;
        }
        d=(max-min)*2;
        printf("%d\n",d);
    }
    return 0;
}

