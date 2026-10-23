#include <iostream>
using namespace std;

class Rectangle
{
	private:
		double length;
		double width;
	public:
		void inputData() {
			cout << "Enter length: ";
			cin >> length;
			cout << "Enter width: ";
			cin >> width;
		}
		double CalculateArea(double l, double w) {
			return l * w;
		}
		double DisplayArea() {
			return CalculateArea(length, width);
		}
};
