#include <iostream>

int main() {
    int n, a, b, c, d;
    std::cin >> n;
    for (int i = n + 1; i < n + 200; i++){
        a = i / 1000;
        b = i % 1000 / 100;
        c = i % 100 / 10;
        d = i % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d){
            std::cout << i;
            break;
        }
    }
    return 0;
}
