#include <iostream>
#include <vector>

int main(){
  int n, count = 0;
  std::vector<char> mas;
  std::cin >> n;
  for (int i = 0; i < n; i++){
    char a;
    std::cin >> a;
    mas.push_back(a);
    if ((mas[i - 1] == 'R' && mas[i] == 'U' || mas[i - 1] == 'U' && mas[i] == 'R') && mas.size() != 1){
      mas.pop_back();
      mas.pop_back();
      count ++;
    }
  }
  std::cout << count;
}
