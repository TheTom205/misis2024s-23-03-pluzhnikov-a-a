#include <iostream>
#include <string>

int main() {
    int n, ind = 0;
    std::string a;
    std::cin >> n;
    std::cin >> a;
    for (int i = 0; i < n - 2; i++){
        if (a[i] == 'x' && a[i+1] == 'x' && a[i + 2] == 'x'){
            ind ++;
        }
    }
    std::cout << ind << std::endl;
    return 0;
}
