#include<iostream>
using namespace std;

class A{
	public:
		int a;
		
		set1()
		{
			cout << "Enter the value of A : ";
			cin >> a;
		}
};

class B : public A{
	public:
		int b;
		
		set2()
		{
			cout << "Enter the value of B : ";
			cin >> b;
		}
};

class C : public A{
	public:
		int c;
		
		set3()
		{
			cout << "Enter the value of C : ";
			cin >> c;
		}
};

class D : public B,public C{
	public:
		int d,Total;
		
		set4()
		{
			cout << "Enter the value of D : ";
			cin >> d;
			
			Total = C::a + b + c + d;
			
			cout << "Sum of Numbers : " << Total << endl;
		}
};

int main()
{
	D sum;
	
	sum.C::set1();
	sum.set2();
	sum.set3();
	sum.set4();
	
	return 0;
}
