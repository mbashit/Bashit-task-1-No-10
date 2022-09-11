// Bashit task 1 No 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int X1, Y1, X2, Y2, X3, Y3, area, A, B, C, k;

	cout << "enter the first point" << endl;
	cin >> X1 >> Y1;
	cout << "enter the second point " << endl;
	cin >> X2 >> Y2;
	cout << "enter the third point " << endl;
	cin >> X3 >> Y3;
	cout << "enter  A" << endl;
	cin >> A;
	cout << "enter B ";
	cin >> B;
	cout << "enter C";
	cin >> C;

	area = (1 / 2.0) * ((X1 * Y2 + X2 * Y3 + X3 * Y1) - (X1 * Y3 + X2 * Y1 + X3 * Y2));

	int A = (int)pow((X2 - X1), 2)
		+ (int)pow((Y2 - Y1), 2);

	int B = (int)pow((X3 - X2), 2)
		+ (int)pow((Y3 - Y2), 2);

	int C = (int)pow((X3 - X1), 2)
		+ (int)pow((Y3 - Y1), 2);

	if ((A > 0 and B > 0 and C > 0)
		and (A == (B + C) or B == (A + C)
			or C == (A + B)))



		cout << "yes, triangle is correct and area is " << area << endl;
	else
		cout << "triangle is wrong";

	return 0;



}