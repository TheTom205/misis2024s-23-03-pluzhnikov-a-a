//
// Created by thetom205 on 3/4/24.
//

#ifndef MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUELSTPR_H
#define MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUELSTPR_H
#include <cstddef>
#include <complex/complex.hpp>
class QueueLstPr{
public:
  ///DEFAULT CONSTRUCTOR
  QueueLstPr()=default;

  ///COPY CONSTRUCTOR
  QueueLstPr(const QueueLstPr& a);

  ///POP FUNCTION
  void Pop();

  ///PUSH FUNCTION
  void Push(Complex &data );

  ///ISEMPTY FUNCTION
  bool IsEmpty();

  ///TOP FUNCTION
  Complex Top();


  ///DESTRUCTOR
  ~QueueLstPr() =default;

private:
  struct Node{
    Complex val;
    Node* next = nullptr;
    Node(Complex data_): val(data_),next(nullptr){}
  };
  Node* head_= nullptr;
};

#endif // MISIS2024S_23_03_PLUZHNIKOV_A_A_QUEUELSTPR_H
