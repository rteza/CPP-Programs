// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Base
{
public:
    void func(int i)
    {
        cout << "Function Base\n";
       
    }
};
class Derived :public Base
{
public:
    using Base::func;
    void func(char c)
    {
        cout << "Derived\n";
       
    }
};
int main()
{
    Derived d;
    d.func(1);
    d.func('c');
    return 0;
}
/*
Function Hiding in C++
Generally we imagine output would be
                 Function Base
                 Derived:
but The actual output is 
                      Derived
                      Derived

Here Base class is hidden in the Derived class .If we want to print Base class func(int i)
value you can do like this
            
            Derived d;
            d.Base::Func(1);

            or

            class Derived:public Base
            {
            public:
            using Base::func;
            int func(char c)
             {
                cout << "Derived\n";
                return 0;
                }
            }

                    




*/