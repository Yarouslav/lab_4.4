#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	double x;
	double xp;
	double xk;
	double R;
	double y;
	double dx;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;	
	while (x < xk) {
		if (x <= -6 - R)
			y = 0;
		else
			if (-6 - R < x && x <= -6)
				y = -sqrt(pow(R, 2) - pow(x + 6, 2));
			else
				if (-6 < x && x <= -R)
					y = (pow(R, 2) + R * x) / (-R + 6);
				else
					if (-R < x && x <= 0)
						y = sqrt(pow(R, 2) - pow(x, 2));
					else
						if (0 < x && x <= 3)
							y = R - (R * x) / 3;
						else
							y = (R * x - 3 * R) / 6.0;
		
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	
}