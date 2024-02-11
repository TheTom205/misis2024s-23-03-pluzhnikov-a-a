#include <iostream>

int main() {
    int n, a, t, s, d, e;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> a;
        s = a % 1000 / 100;
        d = a % 100 / 10;
        e = a % 10;
        if (a < 10 || a == 10000){
            std::cout << 1 << std::endl;
            std::cout << a << std::endl;
        }
        else if (a >= 10 && a < 100){
            if ((a / 10) * 10 == a) {
                std::cout << 1 << std::endl;
                std::cout << a << std::endl;
            }
            else {
                std::cout << 2 << std::endl;
                std::cout << (a / 10) * 10 << ' ' << e << std::endl;
            }
        }
        else if (a >= 100 && a < 1000){
            if ((a / 100) * 100 == a) {
                std::cout << 1 << std::endl;
                std::cout << a << std::endl;
            }
            else if (d == 0){
                std::cout << 2 << std::endl;
                std::cout << s * 100 << ' ' << e << std::endl;
            }
            else if (e == 0){
                std::cout << 2 << std::endl;
                std::cout << s * 100 << ' ' << d * 10 << std::endl;
            }
            else {
                std::cout << 3 << std::endl;
                std::cout << s * 100 << ' ' << d * 10 << ' ' << e << std::endl;
            }
        }
        else if (a >= 1000 && a < 10000) {
            if ((a / 1000) * 1000 == a) {
                std::cout << 1 << std::endl;
                std::cout << a << std::endl;
            }
            else if (s == 0){
                if (d == 0){
                    std::cout << 2 << std::endl;
                    std::cout << (a / 1000) * 1000 << ' ' << e << std::endl;
                }
                else if (e == 0){
                    std::cout << 2 << std::endl;
                    std::cout << (a / 1000) * 1000 << ' ' << d * 10 << std::endl;
                }
                else {
                    std::cout << 3 << std::endl;
                    std::cout << (a / 1000) * 1000 << ' ' << d * 10 << ' ' << e << std::endl;
                }
            }
            else{
                if (d == 0){
                    if (e == 0){
                        std::cout << 2 << std::endl;
                        std::cout << (a / 1000) * 1000 << ' ' << s * 100 << std::endl;
                    }
                    else {
                        std::cout << 3 << std::endl;
                        std::cout << (a / 1000) * 1000 << ' ' << s * 100 << ' ' << e << std::endl;
                    }
                }
                else if (e == 0){
                    std::cout << 3 << std::endl;
                    std::cout << (a / 1000) * 1000 << ' ' << s * 100 << ' ' << d * 10 << std::endl;
                }
                else {
                    std::cout << 4 << std::endl;
                    std::cout << (a / 1000) * 1000 << ' ' << s * 100 << ' ' << d * 10 << ' ' << e << std::endl;
                }
            }
        }
    }
    return 0;
}
