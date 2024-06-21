//
// Created by thetom205 on 2/26/24.
//

#ifndef MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUEARR_H
#define MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUEARR_H
#include <cstddef>
#include <complex/complex.hpp>
class QueueArr{
public:
  ///DEFAULT CONSTRUCTOR
  QueueArr() { size_ = 0; capacity_ = 10; data_ = new Complex[10]; }

  QueueArr(const QueueArr& a);

  void Push(Complex data);

  Complex Top();

  ~QueueArr() { delete[] data_; }


private:
  std::ptrdiff_t size_ = 0;
  std::ptrdiff_t capacity_ = 10;
  Complex* data_;
  };
#endif // MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUEARR_H
