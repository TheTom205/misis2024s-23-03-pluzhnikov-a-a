#include <iostream>

int main(){
    int t, n,m,sx,sy,d;
    std::cin >> t;
    for (int i = 0; i < t; i++){
        std::cin >> n >> m >> sx >> sy >> d;
        if ((n - sx <= d && m - sy <= d) || (sx - 1 <= d && sy - 1 <= d) || (n - sx <= d && sx - 1 <= d) || (m - sy <= d && sy - 1 <= d)) std::cout << -1 << std::endl;
        else std::cout << n - 1 + m - 1 << std::endl;
    }
}
