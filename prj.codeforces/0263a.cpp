#include <iostream>

int main() {
    int a, b, c, d, e, cx, cy;
    for (int i = 0; i < 5; i++){
        std::cin >> a >> b >> c >> d >> e;
        if (a == 1){
            cx = 0;
            cy = i;
        }
        else if (b == 1){
            cx = 1;
            cy = i;
        }
        else if (c == 1){
            cx = 2;
            cy = i;
        }
        else if (d == 1){
            cx = 3;
            cy = i;
        }
        else if (e == 1){
            cx = 4;
            cy = i;
        }
    }
    cx = 2 - cx;
    cy = 2 - cy;
    if (cx < 0) cx = -cx;
    if (cy < 0) cy = -cy;
    std::cout << cx + cy;
    return 0;
}
