#include <iostream>
using namespace std;

class Vector
{
private:
	double x = 1;
	double y = 2;
	double z = 3;
public:
	Vector()
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		cout << "Vector value: \n" << "x = " << x << '\n' << "y = " << y << '\n' << "z = " << z << '\n';
	}
	double Module()
	{
		double mod = sqrt(x * x + y * y + z * z);
		return mod;
	}

};


int main()
{
	Vector v(6,43,2);
	v.Show();
	cout << "Vector module = " << v.Module();

}