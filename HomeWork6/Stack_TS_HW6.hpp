// stack is based on a unidirectional list
#pragma once
#include "Common_TS_HW6.hpp"

struct layer {
  int inf{};
  layer *next{nullptr};
};

class Stack {
 public:
  Stack();
  Stack(const size_t size);
  Stack(Stack &) = delete;
  ~Stack();

  bool push(const int value);
  result top();
  result pop();

  void clear();

  bool printAll() const;

  bool isEmpty() const;
  bool isFull() const;

  size_t getCount() const;
  size_t getMaxSize() const;

 private:
  layer *head{nullptr};
  size_t count{0};
  const size_t k_max_size{k_defult_max_size};
};
