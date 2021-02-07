#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t, n, x = 0, res = 0;
    int a[100001];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        sort (a,a+n);
        x = (a[0] + a[n-1]) /2;
        if(((a[0] + a[n-1]) %2) == 0) res = x;
        else res = x + 1;
        cout << res << endl;
    }

return 0;
}
