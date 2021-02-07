//I. Alternative Strings
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, i = 0;
    string str;
    scanf("%d", &t);
    while(t--){
        cin >> str;
        for(i = 0; i < str.size(); i++){
            if (str[i]>='a' && str[i]<='z')
                str[i] = str[i] - 32;
            else if(str[i]>='A' && str[i]<='Z')
                str[i] = str[i] + 32;
        }
        cout << str << endl;
    }

return 0;
}
