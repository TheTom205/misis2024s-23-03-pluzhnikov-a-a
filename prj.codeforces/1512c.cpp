#include <iostream>
#include <vector>

int main() {
  int f, a, b;
  std::cin >> f >> a >> b;
  for (int p = 0; p < f; p++){
    bool flag = true;
    int summ = a + b;
    char mas[summ];
    for (int i = 0; i < summ; i++) {
      char d;
      std::cin >> d;
      if (d == '0') {
        a--;
      }
      else if (d == '1'){
        b--;
      }
      mas[i] = d;
    }
    //алгоритм
    for (int i = 0; i < (sizeof(mas)) / 2; i++) {
      if (mas[i] != mas[sizeof(mas) - i - 1] && mas[i] != '?' && mas[sizeof(mas) - i - 1] != '?') {
        std::cout << -1 << std::endl;
        flag = false;
        break;
      }
      if (mas[i] != mas[sizeof(mas) - i - 1]) {
        if (mas[i] == '?') {
          if (mas[sizeof(mas) - i - 1] == '0') {
            mas[i] = '0';
            a -= 1;
          } else {
            mas[i] = '1';
            b -= 1;
          }
        } else if (mas[sizeof(mas) - i - 1] == '?') {
          if (mas[i] == '0') {
            mas[sizeof(mas) - i - 1] = '0';
            a -= 1;
          } else {
            mas[sizeof(mas) - i - 1] = '1';
            b -= 1;
          }
        }
      } else {
        if (mas[i] == '?') {
          if (a != 0) {
            mas[i] = '0';
            mas[sizeof(mas) - i - 1] = '0';
            a -= 2;
          } else {
            mas[i] = '1';
            mas[sizeof(mas) - i - 1] = '1';
            b -= 2;
          }
        }
      }
      if (sizeof(mas) % 2 == 1) {
        if (mas[sizeof(mas) / 2] == '?') {
          if (a == 1) {
            mas[sizeof(mas) / 2] = '0';
          } else if (b == 1) {
            mas[sizeof(mas) / 2] = '1';
          }
        } else if (mas[sizeof(mas) / 2] == '0') {
          if (b == 1) {
            std::cout << -1 << std::endl;
            continue;
          }
        } else {
          if (a == 1) {
            std::cout << -1 << std::endl;
            continue;
          }
        }
      }
    }
    if (flag){
      for (int i = 0; i < sizeof(mas); i++) {
        if (i != sizeof(mas) - 1) std::cout << mas[i];
        else std::cout << mas[i] << std::endl;
      }
    }

  }
}
