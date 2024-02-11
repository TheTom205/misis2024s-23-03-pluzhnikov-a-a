#include <iostream>
#include <vector>

int main(){
  int n, sum = 0;
  std::vector<std::vector<int>> matrix = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                                     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                                     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                                     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                                     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                                     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                                     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                                     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                                     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
  std::cin >> n;
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        char d;
        std::cin >> d;
        if (d == 'X') sum += matrix[i][j];
      }
    }
    std::cout << sum << std::endl;
    sum = 0;
  }
}
