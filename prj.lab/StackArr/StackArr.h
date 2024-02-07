//
// Created by thetom205 on 2/7/24.
//

#ifndef MISIS2024S_23_03_PLUZHNIKOV_A_A_STACKARR_H
#define MISIS2024S_23_03_PLUZHNIKOV_A_A_STACKARR_H

#include <iostream>
#include <cstddef>

class StackArr{
public:
    ///DEFAULT CONSTRUCTOR
    StackArr() { size_ = 0; capacity_ = 10; data_ = new float[10]; }

    ///COPY CONSTRUCTOR
    StackArr(const StackArr& a);

    ///POP FUNCTION
    void Pop();

    ///PUSH FUNCTION
    void Push(const std::ptrdiff_t data);

    ///ISEMPTY FUNCTION
    bool IiEmpty();

    ///TOP FUNCTION
    auto Top();


    ///DESTRUCTOR
    ~StackArr() { delete[] data_; }


private:
    std::ptrdiff_t size_ = 0;
    std::ptrdiff_t capacity_ = 10;
    float* data_;
};

#endif //MISIS2024S_23_03_PLUZHNIKOV_A_A_STACKARR_H
