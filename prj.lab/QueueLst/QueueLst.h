//
// Created by thetom205 on 2/19/24.
//

#ifndef MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUE_H
#define MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUE_H
#include <cstddef>
#include <complex/complex.hpp>
class QueueLst{
public:
  ///DEFAULT CONSTRUCTOR
  QueueLst()=default;

  ///COPY CONSTRUCTOR
  QueueLst(const QueueLst& a);

  ///POP FUNCTION
  void Pop();

  ///PUSH FUNCTION
  void Push(Complex &data );

  ///ISEMPTY FUNCTION
  bool IsEmpty();

  ///TOP FUNCTION
  Complex Top();


  ///DESTRUCTOR
  ~QueueLst() =default;

private:
  struct Node{
    Complex val;
    Node* next = nullptr;
    Node(Complex data_): val(data_),next(nullptr){}
  };
  Node* head_= nullptr;
};


#endif // MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUE_H
