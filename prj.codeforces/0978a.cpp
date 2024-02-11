#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, a;
    std::vector<int> mas, mas2;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> a;
        mas.push_back(a);
    }
    std::reverse(mas.begin(), mas.end());
    mas2.push_back(mas[0]);
    for (int k = 1; k < n; k++){
        if (std::find(mas2.begin(), mas2.end(), mas[k]) == mas2.end()) mas2.push_back(mas[k]);
    }
    std::reverse(mas2.begin(), mas2.end());
    std::cout << mas2.size() << std::endl;
    for (int i = 0; i < mas2.size(); i++) std::cout << mas2[i] << ' ';
    return 0;
}
