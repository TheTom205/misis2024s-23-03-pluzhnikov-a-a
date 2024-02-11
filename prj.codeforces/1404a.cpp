#include <iostream>
#include <string>

int main() {
  int n, k, t;
  std::string s;
  std::cin >> t;
  while (t--) {
    std::cin >> n >> k >> s;
    int zer = 0, one = 0;
    bool chk = true;
    for (int i = 0; i < k; i++) {
      int tmp = -1;
      for (int j = i; j < n; j += k) {
        if (s[j] != '?') {
          if (tmp != -1 && s[j] - '0' != tmp) {
            chk = false;
            //std::cout << s[j] << ' ' << s[j] - '0';
            break;
          }
          tmp = s[j] - '0';
          //std::cout << s[j] << ' ' << '1' - '0';
        }
      }
      if (tmp != -1) {
        if (tmp == 0) zer++;
        else one++;
      }
    }
    if (std::max(zer, one) > k / 2) chk = false;
    if (chk) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
  }
}
