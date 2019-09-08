#include <stdio.h>
#include <string.h>
int main()
{
    char ara[2000];
    int i=0,j;
    for(i=0;i<14;i++){
        scanf("%s",&ara);

        if(ara=="HELLO"){
            printf("Case %d:English",i+1);
            }
        else if(ara=="HOLA"){
            printf("Case %d:SPANISH",i+1);
        }
        else if(ara=="HALLO"){
            printf("Case %d:GERMAN",i+1);
        }
        else if(ara=="BONJOUR"){
            printf("Case %d:FRENCH",i+1);
        }
        else if(ara=="CIOA"){
            printf("Case %d:ITALIAN",i+1);
        }
        else if(ara=="ZDRAVSTVUJTE")
            printf("Case %d:RUSSION",i+1);
        else {
            printf("UNKNOWN");
        }
    }
    return 0;

}
