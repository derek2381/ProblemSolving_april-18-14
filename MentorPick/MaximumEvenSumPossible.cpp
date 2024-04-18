#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);


    for(int i = 0; i < n;i++){
      cin >> arr[i];
    }

    vector<int> even, odd;

    for(int i = 0; i< n;i++){
      if(arr[i] % 2== 0){
        even.push_back(arr[i]);
      }else{
        odd.push_back(arr[i]);
      }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int n1 = even.size(), n2 = odd.size();
    int even_sum = 0, odd_sum = 0;

    if(n1 >= 2){
      even_sum  = even[n1-1] + even[n1-2];
    }

    if(n2 >= 2){
      odd_sum = odd[n2-1] + odd[n2-2];
    }


    if(even_sum && odd_sum){
      if(even_sum >= odd_sum){
        cout << even_sum << endl;
      }else{
        cout << odd_sum << endl;
      }
    }else if(even_sum){
      cout << even_sum << endl;
    }else if(odd_sum){
      cout << odd_sum << endl;
    }else{
      cout << -1 << endl;
    }

  }
}
