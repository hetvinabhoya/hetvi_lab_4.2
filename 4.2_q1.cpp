#include<iostream>
using namespace std;

class RBI{
	public:
		double price;
		setPrice(double price)
		{
		    this-> price = price;
		}
};

class SBI : public RBI{
	public:
		int rate1,a;
		
		getROI1()
		{
			cout << "Enter SBI's Rate : ";
			cin >> rate1;
			
			a = ((price * rate1) / 100) + price;
			
			cout << "Total Intrest of SBI = " << a << endl;
		}
};

class BOB : public RBI{
	public:
		int rate2,b;
		
		getROI2()
		{
			cout << "Enter BOB's Rate : ";
			cin >> rate2;
			
			b = ((price * rate2) / 100) + price;
			
			cout << "Total Intrest of BOB = " << b << endl;
		}
};

class ICICI : public RBI{
	public:
		int rate3,c;
		
		getROI3()
		{
			cout << "Enter ICICI's Rate : ";
			cin >> rate3;
			
			c = ((price * rate3) / 100) + price;
			
			cout << "Total Intrest of ICICI = " << c << endl;
		}
};


int main()
{
	double i;
	
		cout << "Enter the Price : ";
		cin >> i;
			
	SBI A;
	BOB B;
	ICICI C;
	
	A.setPrice(i);
	A.getROI1();
	cout << endl;
	
	B.setPrice(i);
	B.getROI2();
	cout << endl;
	
	C.setPrice(i);
	C.getROI3();
	
	return 0;
}
