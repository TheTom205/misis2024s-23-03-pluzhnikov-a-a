#include <iostream>

int main() {
    long long int n, k, a, b, mu, u;
    std::cin >> n >> k;
    std::cin >> a >> b;
    if (b > k) u = a - b + k;
    else u = a;
    mu = u;
    for (int i = 1; i < n; i++){
        std::cin >> a >> b;
        if (b > k) u = a - b + k;
        else u = a;
        if (u >= mu) mu = u;
    }
    std::cout << mu;
    return 0;
}
