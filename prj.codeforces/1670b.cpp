#include <iostream>
#include <string>

int maon(){
    int t, s, count, mx = 1;
    std::string data, d, bukvi;
    std::cin >> t;
    for (int i = 0; i < t; i++){
        std::cin >> s >> data >> count;
        for (int k = 0; k < count; k++){
            std::cin >> d;
            bukvi += d;
        }
        std::cout << data << ' ' << bukvi;
    }
}
