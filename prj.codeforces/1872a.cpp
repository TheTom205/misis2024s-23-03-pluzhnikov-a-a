#include <iostream>

int main() {
    int n, a, b, c, diff;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> a >> b >> c;
        diff = b - a;
        if (diff < 0) diff = -diff;
        std::cout << (diff + 2 * c - 1) / (2 * c) << std::endl;
    }
    return 0;
}
