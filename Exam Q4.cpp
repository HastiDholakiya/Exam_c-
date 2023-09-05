#include<iostream>
using namespace std;

class Maths_operation{
	protected:
	   int r,c,area;
	   const float pi = 3.14;

	public:
		setData()
		{
			cout << "Enter the value of R : ";
			cin >> r;
			cout << "Enter the value of C : ";
			cin >> c;

		}

		virtual calculate()
		{
			cout << "Area of Circle : " << (pi*(r*r)) << endl;

			cout << "Area of Triangle : " << (r*c)/2 << endl;

			cout << "Area of Rectangle : " << (r*c) << endl;

		}
};


int main()
{
	Maths_operation A;

	A.setData();
	A.calculate();

	return 0;

}

