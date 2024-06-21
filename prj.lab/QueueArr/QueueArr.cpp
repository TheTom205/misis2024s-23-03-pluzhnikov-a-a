//
// Created by thetom205 on 2/26/24.
//
#include <QueueArr/QueueArr.h>
#include <stdexcept>
#include <complex/complex.hpp>

///COPY CONSTRUCTOR
QueueArr::QueueArr(const QueueArr &a) {
  if (2 * a.size_ > capacity_) capacity_ = a.size_ * 2;
  size_ = a.size_;
  data_ = new Complex[capacity_];
  for (std::ptrdiff_t i = 0; i < size_; ++i)
    data_[i] = a.data_[i];
}

void QueueArr::Push(Complex data) {
  if(capacity_<= size_){
    capacity_=capacity_+1;
    data_=new Complex[1];

  }

  size_=size_+1;
  data_[size_-1]=data;
}
