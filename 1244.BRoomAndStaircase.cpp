#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin >> n;
  string str;
  cin >> str;
  int ans = n;
  int count = 0;
  for(int i = 0; i < n; i++){
    count++;
    if(str[i] == '1'){
      ans = max(ans, (i+1)*2);
      count++;
    }
  }
  ans = max(ans, count);
  reverse(str.begin(), str.end());
  for(int i = 0; i < n; i++){
    count++;
    if(str[i] == '1'){
      ans = max(ans, (i+1)*2);
      count++;
    }
  }
  cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}