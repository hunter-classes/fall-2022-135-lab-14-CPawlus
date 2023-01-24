#pragma once

template <class T>
class MyVector 
{
    public:
        MyVector();
        MyVector(int cap);
        int size();
        int capacity();
        bool empty();
        void push_back(T item);
        void pop_back(int n);
        void pop_back();
        void clear();
        T& operator[](int n);
        void operator=(T value);
    private:
        T *arr;
        int sizec;
        int capc;
};


