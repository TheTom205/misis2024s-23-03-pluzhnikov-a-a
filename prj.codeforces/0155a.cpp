#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int n, k = 0, sum = 0;
  std::cin >> n;
  std::vector<int> mas(n);
  for (int &i : mas){
    std::cin >> i;
  }
  for (int i = 1; i < n; i++){
    std::sort(mas.begin(), mas.begin() + i);
    if (mas[i] < mas[k] || mas[i] > mas[k + i - 1]){
      sum++;
    }
  }
  std::cout << sum;
}
