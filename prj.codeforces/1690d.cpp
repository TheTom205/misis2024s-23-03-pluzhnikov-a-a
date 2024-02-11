#include <iostream>
#include <string>


int main(){
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++){
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    int maxc = 0;
    int count = 0;
    for (int m = 0; m < k; m++){
      if (s[m] == 'B') count ++;
    }
    maxc = std::max(count, maxc);
    for (int j = 0; j < n - k; j++){
      if (s[j] == 'B') count--;
      if (s[j + k] == 'B') count++;
      maxc = std::max(maxc, count);
    }
    //std::cout << maxc << ' ';
    if (maxc >= k) std::cout << 0 << std::endl;
    else std::cout << k - maxc << std::endl;
  }
}
