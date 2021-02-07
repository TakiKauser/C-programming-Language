//E. Isosceles Triangle
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, c;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        if((a==b) && (b!=c))cout << "Yes" << endl;
        else if((a==c) && (a!=b))cout << "Yes" << endl;
        else if((b==c) && (a!=c)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

return 0;
}
