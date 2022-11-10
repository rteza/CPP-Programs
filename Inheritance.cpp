//How to call Base Class Function from Derived class Object in C++?
#include<iostream>
using namespace std;
class Base
{
public:
	void func()
	{
		cout << "Base" << endl;
	}
	void function1()
	{
		cout << "Base Function1 is calling" << endl;
	}

};
class Derived :public Base
{
public:
	void func()
	{
		cout << "Derived" << endl;
	}
	void function2()
	{
		cout << "Derived Function1 is calling" << endl;
	}
	

};
int main()
{
	Derived d;
	d.func();
	d.function1();
	d.function2();
	d.Base::func();
	//The another method to call base class function from Derived class is using static casting method
	cout << "Static cast operation"<<endl;
	//static_cast
	Base b = static_cast<Base>(d);
	b.func();
	b.function1();
	
	/*Here we cannot access function2, we type casted derived d object
	into base object so we can access only base member functions 
	its static cast implicit convsersion
	*/

	/*

	Derived d = static_cast<Derived>(b);//gives you error
	the reverse way to intialise is not possible.
	Inorder to achive this use pointer(explicit conversion) as shown below

*/


	cout << "Static cast operation in explicit conversion" << endl;
	Base* base = static_cast<Base*>(&d);
	base->func();
	base->function1();
	
	/*its static cast explict conversion */
	Derived* derived = static_cast<Derived*>(&b);
	derived->func();
	derived->function1();
	derived->function2();
}
/*
A Cast operator is an unary operator which forces one data type to be converted into
another data type

C++ Supports 4 different data types 1.Static Cast
									2.Dynamic Cast
									3.Const Cast
									4.Reinterpret Cast
Static Cast:This is simplest type of cast,it does things like 
implicit conversions between types
it is a compile time type casting

*/


