#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,aus1,aus2,eng1,eng2,aus,eng;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d%d",&aus1,&eng1,&aus2,&eng2);
        aus = aus1+aus2;
        eng = eng1+eng2;
        if(aus == eng) cout << "TIE" << endl;
        else if(aus > eng) cout << "AUSTRALIA" << endl;
        else cout << "ENGLAND" << endl;
    }

return 0;
}
