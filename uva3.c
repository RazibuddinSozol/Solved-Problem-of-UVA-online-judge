#include <stdio.h>
int main()
{
    char a[10];
    while(scanf("%[^\n]",a)){
        printf("%s\n",a);
    }
    return 0;
}
