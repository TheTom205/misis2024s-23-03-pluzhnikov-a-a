//
// Created by thetom205 on 2/7/24.
//
#include <StackArr/StackArr.h>
#include <stdexcept>

StackArr::StackArr(const StackArr &a) {
    if (2 * a.size_ > capacity_) capacity_ = 2 * size_;
    size_ = a.size_;
    data_ = new float [capacity_];
    for (std::ptrdiff_t i = 0; i < size_; ++i)
        data_[i] = a.data_[i];
}

void StackArr::Pop(const std::ptrdiff_t data) {}

bool StackArr::IiEmpty(const std::ptrdiff_t size) {}

