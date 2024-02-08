//
// Created by thetom205 on 2/7/24.
//
#include <StackArr/StackArr.h>
#include <stdexcept>

///COPY CONSTRUCTOR
StackArr::StackArr(const StackArr &a) {
    if (2 * a.size_ > capacity_) capacity_ = a.size_ * 2;
    size_ = a.size_;
    data_ = new int[capacity_];
    for (std::ptrdiff_t i = 0; i < size_; ++i)
        data_[i] = a.data_[i];
}

//////POP FUNCTION
void StackArr::Pop() {
    if (size_ <= 0) throw std::runtime_error("size <= 0");
    else{
        size_=size_-1;
    }
}

///PUSH FUNCTION
void StackArr::Push(auto data) {
    if(capacity_<= size_){
        capacity_=capacity_+1;
    }

    size_=size_+1;
    data_[size_-1]=data;
}

///ISEMPTY FUNCTION
bool StackArr::IsEmpty() {
    return size_ <= 0;
}

///TOP FUNCTION
auto StackArr::Top(){
    if (size_ <= 0) throw std::runtime_error("size <= 0");
    else{
        return data_[size_-1];
    }

}
