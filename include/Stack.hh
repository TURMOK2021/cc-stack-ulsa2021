#pragma once
#include "Node.hh"
#include"Book.hh"

class Stack
{
private:
    Node* head{nullptr};

public:
    Stack();
    ~Stack();
    Node* GetTop() const;
    bool IsEmpty() const; 
    void Print();
    void Pop();
    void Push(Book*& book);
};