//
// Created by thetom205 on 2/7/24.
//

#ifndef MISIS2024S_23_03_PLUZHNIKOV_A_A_STACKARR_H
#define MISIS2024S_23_03_PLUZHNIKOV_A_A_STACKARR_H

#include <cstddef>
#include <complex/complex.hpp>
class StackArr{
public:
    ///DEFAULT CONSTRUCTOR
    StackArr() { size_ = 0; capacity_ = 10; data_ = new Complex[10]; }

    ///COPY CONSTRUCTOR
    StackArr(const StackArr& a);

    ///POP FUNCTION
    void Pop();

    ///PUSH FUNCTION
    void Push(Complex data );

    ///ISEMPTY FUNCTION
    bool IsEmpty();

    ///TOP FUNCTION
    Complex Top();


    ///DESTRUCTOR
    ~StackArr() { delete[] data_; }


private:
    std::ptrdiff_t size_ = 0;
    std::ptrdiff_t capacity_ = 10;
    Complex* data_;
//    std::ptrdiff_t tmp_size_ = 0;
//    std::ptrdiff_t tmp_capacity_ = 10;
//    int* tmp_data_;
};

#endif //MISIS2024S_23_03_PLUZHNIKOV_A_A_STACKARR_H
