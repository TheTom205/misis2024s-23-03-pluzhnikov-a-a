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

    ///CONSTRUCTOR BY SIZE
    // StackArr(const std::ptrdiff_t size);

    ///GETS SIZE VALUE
    //[[nodiscard]] std::ptrdiff_t Size() const { return size_; }

//    StackArr& operator= (const StackArr& rhs);
//

    void Pop(const std::ptrdiff_t data);

    void Push();

    bool IiEmpty(const std::ptrdiff_t size);

    auto Top(const std::ptrdiff_t data);

    ///GETS INDEXES
    //  float& operator[](const std::ptrdiff_t idx);
    // const float& operator[](const std::ptrdiff_t idx) const;

    ///DESTRUCTOR
    ~StackArr() { delete[] data_; }


private:
    std::ptrdiff_t size_ = 0;
    std::ptrdiff_t capacity_ = 10;
    float* data_;
};

#endif //MISIS2024S_23_03_PLUZHNIKOV_A_A_STACKARR_H
