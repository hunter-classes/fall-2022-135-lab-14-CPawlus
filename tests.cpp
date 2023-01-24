#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.cpp"

TEST_CASE("Size Function") 
{
    MyVector<int> a;
    MyVector<float> b(1.0);
    CHECK(a.size() == 0);
    CHECK(b.size() != 1);
}

TEST_CASE("Capacity Function") 
{
    MyVector<int> a(1);
    MyVector<int> b(2);
    MyVector<int> c;
    CHECK(a.capacity() == 1);
    CHECK(b.capacity() == 2);
    CHECK(c.capacity() == 0);
}

TEST_CASE("Empty Function") 
{
    MyVector<int> a;
    MyVector<int> b(1);
    MyVector<int> c(2);
    CHECK(a.empty() == 1);
    CHECK(b.empty() != 0);
    CHECK(c.empty() != 0);
}

TEST_CASE("Push_back Function") 
{
    MyVector<int> a;
    MyVector<int> b;
    a.push_back(1);
    b.push_back(1);
    b.push_back(2);
    CHECK(a[0] == 1);
    CHECK(b[1] == 2);
}

TEST_CASE("Pop_back Function") 
{
    MyVector<int> a;
    MyVector<int> b;
    a.push_back(1);
    b.push_back(1);
    b.push_back(2);
    a.pop_back(1);
    a.pop_back(1);
    CHECK(a.size() == 0);
    CHECK(b.size() == 1);
}

TEST_CASE("Pop_back(n) Function") 
{
    MyVector<int> a;
    MyVector<int> b;
    a.push_back(1);
    b.push_back(1);
    b.push_back(2);
    a.pop_back(1);
    a.pop_back(1);
    CHECK(a.size() == 0);
    CHECK(b.size() == 1);
}

TEST_CASE("Clear Function") 
{
    MyVector<int> a;
    MyVector<int> b;
    a.push_back(1);
    b.push_back(1);
    b.push_back(2);
    a.clear();
    b.clear();
    CHECK(a.size() == 0);
    CHECK(b.size() == 0);
}

TEST_CASE("Operator Function") 
{
    MyVector<int> a;
    a.push_back(5);
    CHECK(a[0] == 5);
}
