//H. K-th Smallest Number - Small
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
       }
       sort(a, a+n);
       cout << a[k-1] << endl;
    }

return 0;
}
