#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
		double S1, S2;
		int k, n;
		
		n = 1;
		S1 = 0;
		while (n <=18)
		{
			S2 = 0;
			k = n;
			while (k<= 20)
			{
				S2 += sqrt(fabs(1 - k / (1. * n))) / (2. * n * n + k * k);
				k++;
			}
			S1 += S2;
			n++;
		}
		cout << "S1 = " << S1 << endl;
		S1 = 0;
		n = 1;
		do
		{
			S2 = 0;
			k = n;
			do
			{
				S2 += sqrt(fabs(1 - k / (1. * n))) / (2. * n * n + k * k);
				k++;
			} while (k <= 20);
				S1 += S2;
			n++;
		} while (n <= 18);
		cout << "S1 = " << S1 << endl;

		S1 = 0;
		for (n = 1; n <= 18; n++)
		{
			S2 = 0;
			for (k = n; k <= 20; k++)
			{
				S2 += sqrt(fabs(1 - k / (1. * n))) / (2. * n * n + k * k);
			}

			S1 += S2;
			
		}
		cout << "S1 = " << S1 << endl;

		S1 = 0;
		for (n = 18; n >= 1; n--)
		{
			S2 = 0;
			
			for (k = 20; k >= n; k--)
			{
				
				S2 += sqrt(fabs(1 - k / (1. * n))) / (2. * n * n + k * k);
			}
			S1 += S2;
		}
		cout << "S1 = " << S1 << endl;
			
		return 0;

}
