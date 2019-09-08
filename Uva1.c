#include <stdio.h>
#include <string.h>
int main()
{
    char quote[50];
    int i,j,len,l;
    scanf("%[^\n]",quote);
    len=strlen(quote);
    printf("%d\n",len);
    for(i=0;quote[i]!='\0';i++){
        if(quote[i]=='"'){
            quote[i]=quote[i]+5;
        }
        else if(quote[i]=='?'){
            quote[i]=quote[i]+33;
        }
    }
    printf("%s\n",quote);
//    printf("%c",j);
    return 0;
}
