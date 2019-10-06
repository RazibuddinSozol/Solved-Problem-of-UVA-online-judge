#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,i,y,cnt;
    while((scanf("%d %d",&x,&y))!=EOF){
        int mx = 0;
        cout<<x<<" "<<y<<" ";
        if(y>x)
        swap(y,x);
        for( i = y; i <= x; i++){
        int n = i;
        cnt = 1;
            while(n > 1){
                if(n%2!=0){
                    n = 3*n+1;
                }
                else {
                    n=n/2;
                }
                cnt++;
            }
            if(cnt >= mx)
                mx = cnt;
        }
       cout<< mx << endl;
    }
    return 0;
}
