//
// Created by user on 11.12.2023.
//

#ifndef DYNARR_HPP
#define DYNARR_HPP

#include <cstddef>

class DynArr {
 public:
  //Default Constructor
  DynArr() {
    size_ = 0;
    capacity_ = 0;
    data_ = 0;
  }
  //Copy Constructor
  DynArr(const DynArr& a){
    size_ = a.size();
    capacity_ = size_;
    data_ = nullptr;
    if (size_ != 0)
      data_ = new float[size_];
    else
      data_ = 0;
    for (int i = 0; i < size_; ++i)
      data_[i] = a.data_[i];
  };

  //Constructor by size
  DynArr(const std::ptrdiff_t& size) {
    size_ = size;
    capacity_ = size;
    if (size != 0) {
      data_ = new float[size];
      for (int i = 0; i < size; i++) data_[i] = 0;
    }
    else
      data_ = 0;
  }

  //void that gets size value
  [[nodiscard]] std::ptrdiff_t size() const noexcept { return size_; }

  //void that resize dynarr
  void Resize(const std::ptrdiff_t size) {
    if (size > capacity_){
      float* newData = new float[size];
      for (std::ptrdiff_t ind = 0; ind < capacity_; ind++) newData[ind] = data_[ind];
      //for (std::ptrdiff_t ind = capacity_; ind < size; ind++) newData[ind] = 0;
      delete[] data_;
      data_ = newData;
      capacity_ = size;
    }
    size_ = size;
  }

  float& operator[](std::ptrdiff_t idx) {return data_[idx]; }

  //Destructor
  ~DynArr() { delete[] data_; }

 private:
  std::ptrdiff_t size_ = 0;
  std::ptrdiff_t capacity_ = 0;
  float* data_ = 0;
};

#endif //DYNARR_HPP

#include <iostream>
std::ostream& operator<<(std::ostream& ostr, DynArr a){
  for (int i = 0; i < a.size(); ++i){
    ostr << a[i] << ' ';
  }
  return ostr;
}