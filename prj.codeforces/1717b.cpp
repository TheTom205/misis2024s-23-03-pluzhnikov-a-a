#include <iostream>

int main(){
    int t, n, k, r, c, ost;
    std::cin >> t;
    for (int i = 0; i < t; i++){
        std::cin >> n >> k >> r >> c;
        r--;
        c--;
        for (int j = 0; j < n; j++){
            ost = (r + c - j) % k;
            if (ost < 0) ost += k;
            for (int d = 0; d < n; d++){
                if (d == n - 1){
                    if (d % k == ost) std::cout << 'X' << std::endl;
                    else std::cout << '.' << std::endl;
                }
                else {
                    if (d % k == ost) std::cout << 'X';
                    else std::cout << '.';
                }
            }
        }
    }
}
