#include<bits/stdc++.h>
using namespace std;
int main()
{
    long mod4,mod100,mod400,mod15,mod55,len,i,lep,gt;
    char yr[1000000];
    int p=0;
    while(cin>>yr){
            if(p!=0)
                printf("\n");
            p=1;
            mod4=mod100=mod400=mod15=mod55=gt=lep=0;
            len=strlen(yr);
            for(i=0;i<len;i++){
                mod4=((mod4*10)+(yr[i]-'0'))%4;
                mod100=((mod100*10)+(yr[i]-'0'))%100;
                mod400=((mod400*10)+(yr[i]-'0'))%400;
                mod15=((mod15*10)+(yr[i]-'0'))%15;
                mod55=((mod55*10)+(yr[i]-'0'))%55;
            }
            if((mod4==0&&mod100!=0)||(mod400==0)){
                printf("This is leap year.\n");
                lep=1;
                gt=1;
            }
            if(mod15==0){
                printf("This is huluculu festival year.\n");
                gt=1;
            }
            if(mod55==0&&lep==1)
                printf("This is bulukulu festival year.\n");
            if(gt==0)
               printf("This is an ordinary year.\n");
    }
    return 0;
}
