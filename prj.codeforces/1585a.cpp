#include <iostream>

int main(){
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++){
    //std::cout << "ENTER" << std::endl;
    int height = 1, d, prev = 0, result = 0;
    bool flag = true;
    std::cin >> d;
    //std::cout << height << ' ' << d << ' ' << prev << ' ' << flag << std::endl;
    for (int k = 0; k < d; k++) {
      int a;
      std::cin >> a;
      if (k == 0){
        prev = a;
        if (a == 1) height ++;
      }
      else {
        if (a == 1){
          if (prev == 1){
            height += 5;
          }
          else {
            height ++;
          }
        }
        else {
          if (prev == 0 && a == 0){
            result = -1;
            flag = false;
          }
        }
        prev = a;
      }
      //std::cout << height << ' ';
    }
    if (result != -1) std::cout << height << std::endl;
    else std::cout << result << std::endl;
  }
}
