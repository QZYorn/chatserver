#include <iostream>
#include <functional>
using namespace std::placeholders;

class A
{
public:
    void print(int n1, int n2, int n3)
    {
        std::cout << n1 << " " << n2 << " " << n3 << std::endl;
    }
};

int main()
{
    A a;
    //类成员函数需要绑定该类的this指针
    auto f1 = bind(&A::print, &a, _2, _1, 22);
    f1(44, 55);
}