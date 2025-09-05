#include <iostream>
using namespace std;



class Point
{
private:
	int x;
	int y;
	int s;
public:
	void Print()
	{
		cout << s << "->X: " << x << "\tY: " << y << endl;
	}
	void Init(char t, int _x, int _y)
	{
		s = t;
		x = _x;
		y = _y;
	}
	void Sum(Point b)
	{
		cout << "X: " << x + b.x << "\tY: " << y + b.y << endl;
	}

	void Min(Point b)
	{
		cout << "X: " << x - b.x << "\tY: " << y - b.y << endl;
	}

	void Mult(Point b)
	{
		cout << "X: " << x * b.x << "t\Y: " << y * b.y << endl;
	}
};
