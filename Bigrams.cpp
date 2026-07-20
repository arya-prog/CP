#include <bits/stdc++.h>
using namespace std;
void solve(){
  int k;
  cin>>k;
  vector<long long> nums(k);
  for(int i=0;i<k;i++){
    long long x;
    cin>>x;
    nums[i] = x;
  }
  sort(nums.begin(), nums.end());
  long long larget = nums[k-1];
  if(larget >= 3) {
    cout << "YES" << endl;
    return;
  }
  if(k-2>=0){

    long long second_largest = nums[k-2];
    if(larget >= 2 && second_largest >= 2) {
      cout << "YES" << endl;
      return;
    }
  }
  cout<< "NO" << endl;
  return;
}
int main() {
  int t;
  cin>>t;
  while(t>0){
    solve();
    t--;  
  }
  return 0;
}
