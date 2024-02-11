#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int p, n, x, l;
    bool flag;
    std::vector <int> mas;
    std::cin >> p;
    for (int i = 0; i < p; i++){

        flag = true;
        std::cin >> n >> x;

        for (int j = 0; j < n; j++){
            std::cin >> l;
            mas.push_back(l);
        }

        std::sort(mas.begin(), mas.end());

        if (mas[0] != 1){
            if (x - mas[0] + 1 < 0) {
                std::cout << x << std::endl;
                continue;
            } else x -= mas[0] - 1;
        }

        for (int t = 1; t < n; t++) {
            if (mas[t] - mas[t - 1] == 0 || mas[t] - mas[t - 1] == 1) continue;
            if (mas[t] - mas[t - 1] > 1){
                if (mas[t] - mas[t - 1] - 1 > x){
                    //x -= (mas[t] - mas[t - 1] - 1);
                    if (std::find(mas.begin(), mas.end(), mas[t - 1] + x + 1) != mas.end()) std::cout << mas[t - 1] + x + 1 << std::endl;
                    else std::cout << mas[t - 1] + x << std::endl;
                    flag = false;
                    break;
                }
                else {
                    x -= (mas[t] - mas[t - 1] - 1);
                }
            }
        }

        if (flag) std::cout << mas[n - 1] + x << std::endl;

        mas.clear();

    }
}
