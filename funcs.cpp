#include <iostream>
#include "funcs.h"

// MyVector Functions

template <class T>
MyVector<T>::MyVector() 
{
    sizec = 0;
    capc = 0;
    arr = new T[sizec];
}
template <class T>
MyVector<T>::MyVector(int cap) 
{
    sizec = 0;
    capc = cap;
    arr = new T[sizec];
}
template <class T>
int MyVector<T>::size() 
{
    return sizec;
}
template <class T>
int MyVector<T>::capacity() 
{
    return capc;
}
template <class T>
bool MyVector<T>::empty() 
{
    if(sizec < 1) 
    {
        return true;
    } 
    return false;
}
template <class T>
void MyVector<T>::push_back(T item) 
{
    if(sizec < 1) 
    {
        sizec++;
        arr[0] = item;
    } 
    else 
    {
        T* rarr = new T[sizec];
        for(int i = 0; i < sizec; i++) 
        {
            rarr[i] = arr[i];
        }
        rarr[sizec] = item;
        delete[] arr;
        arr = rarr;
    }
}
template <class T>
void MyVector<T>::pop_back(int n) 
{
    T* rarr = new T[sizec];
    if(sizec-n <= 0) {
        sizec = 0;
        delete[] arr;
        arr = new T[0];
        return;
    }

    for(int i = 0; i < sizec-n; i++) {
        rarr[i] = arr[i];
    }
    sizec = sizec-n;
    delete[] arr;
    arr = rarr;
}
template <class T>
void MyVector<T>::pop_back() 
{
    pop_back(1);
}
template <class T>
void MyVector<T>::clear() 
{
    pop_back(sizec);
}
template <class T>
T& MyVector<T>::operator[](int n) 
{
    return arr[n];
}
template <class T>
void MyVector<T>::operator=(T value)
{
    this = value;
}
