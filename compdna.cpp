#include<bits/stdc++.h>
using namespace std;
//Contributer : Isha Bansal
int fun(string s){
    int n =s.length();
    int ans = 0;
    vector<int>cnt(26,0);
    int i = 0, j = 0;

    while (i < n) {
        if (j < n && (cnt[s[j] - 'a']== 0)) {

            cnt[s[j] - 'a']++;

            ans += (j - i + 1);
            j++;
        }

        else {
            cnt[s[i] - 'a']--;
            i++;
        }
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<fun(s);
}
