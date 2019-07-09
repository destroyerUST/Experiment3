#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{

	int x, r[15], small, large;
	cout << "Enter 15 numbers :\n";
	
	
	
	for (x = 0; x < 15; x++)
	{
		cin >> r[x];
		
	}
	
	
	
	cout << endl << endl;
	
	cout << "COMPUTING..." << endl;
	cout << endl << endl;
	
	
	
	int a, b;
	small = r[0];
	for (a=1; a < 15; a++)
	{
		b = r[a];
		
		if (b < small)
		{
			small = b;
		}
	}
	
	
	
	cout << "The smallest integer is: " << small << endl;
	
	
	int c, d;
	large = r[0];
	for (c = 1; c < 15; c++)
	{
		d = r[c];
		
		if (d > large)
		{
			large = d;
		}
	}
	cout << "The largest integer is: " << large << endl;
	
	
	int sum=0, y;
	for (y=0; y < 15; y++)
	{
		sum += r[y];
	}
	cout << "The total of all integers is: " << sum << endl;
	
	float ave;
	cout << setprecision(2) << fixed;
	ave=sum/15;
	cout << "The average of all integers is: " << ave << endl;
 	
	getch ();
	return 0;
}
