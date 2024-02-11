#include <iostream>

int main(){
  int t, n;
  std::cin >> t;
  for (int i = 0; i < t; i++){
    std::cin >> n;
    for (int j = 0; j < n; j++){
      if (j == 0) std::cout << '1' << std::endl;
      else{
        int vivod[j + 1];
        vivod[0]++;
        vivod[vivod[j]]++;
        for (int k = 0; k < j + 1; k++) std::cout << vivod[k] << ' ';
      }
    }
  }
}
