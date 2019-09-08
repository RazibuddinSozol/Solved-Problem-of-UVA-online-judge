#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int cases=0;
    string str;
    while(1)
    {
        cases++;
        cin>>str;
        if(str=="HELLO")
            printf("Case %d: ENGLISH\n", cases);
        else if( str=="HOLA")
            printf("Case %d: SPANISH\n", cases);
        else if( str=="HALLO")
            printf("Case %d: GERMAN\n", cases);
        else if( str=="BONJOUR")
            printf("Case %d: FRENCH\n", cases);
        else if( str=="CIAO")
            printf("Case %d: ITALIAN\n", cases);
        else if( str=="ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n", cases);
        else if( str=="#")
            break;
        else
            printf("Case %d: UNKNOWN\n", cases);
    }
    return 0;
}
