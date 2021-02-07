//Make Equal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,k,x = 0, y = 0,cnt = 0;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&a,&b,&k);
        x = max(a,b);
        y = min(a,b);
        cnt = 0;
        if((x-y)%k == 0){
            cnt = (x-y)/k;
            cout << cnt << endl;
        }
        else cout << "-1" << endl;
    }

return 0;
}
