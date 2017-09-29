//Aisha Balogun Mohammed
//COSC 2030
//Lab 3


#include <iostream>
#include <limits>
#include <cstddef>
using std::cout;
using std::endl;

// An overflow can be detected when the sum gives a negative number. 
//The value of n that produces the overflow is 65536
long sumLong(long n)
{
	long sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}
	cout << "The sum of the consecutive integers 1 through " << n << " is " << sum << endl;
	return sum;

}


// An overflow can be detected when the sum gives a negative number. 
//The value of n that produces the overflow is 256
short sumShort(short n)
{
	short sum = 0;
	for (int i =0; i <= n; i++)
	{
		sum+=i;
	}
	cout << "The sum of the consecutive integers 1 through " << n << " is " << sum << endl;
	return sum;
}




// An overflow can be detected when the result is "inf"
//The value of n that produces the overflow is 35
float factorialFloat(long n)
{
	float product = 1;
	for (int i =1; i <= n; i++)
	{
		product*=i;
	}
	cout << "The product of the consecutive integers 1 through " << n << " is " << product << endl;
	return product;
}

// An overflow can be detected when the result is "inf"
//The value of n that produces the overflow is 171
double factorialDouble(long n)
{
	double product = 1;
	for (int i =1; i <= n; i++)
	{
		product*=i;
	}
	cout << "The product of the consecutive integers 1 through " << n << " is " << product << endl;
	return product;
}




//If the computations are exact, the expected value of the function is 0. 
//However, because of the precision of float, the results are not accurate for the values n >=10.
float sumdivFloat(float n)
{
	float div = 0.0;
	float sum = 0.0;
	for (float i =0; i < n; i++)
	{
		div = 1/n;
		sum+=div;
	}
	sum -= 1.0;
	cout << "The sum of the consecutive ratio (1/n) " << n << " is " << sum << endl;
	return sum;
	
}
 
//If the computattions are exact, the expected value of the function is 0. 
//However, because of the precision of double, the results are not accurate for the values n >=6.
double sumdivDouble(double n)
{
	double div = 0.0;
	double sum = 0.0;
	for (int i =0; i < n; i++)
	{
		div = 1/n;
		sum+=div;
	}
	sum -= 1.0;
	cout << "The sum of the consecutive ratio (1/n) " << n << " is " << sum << endl;
	return sum;
	
}


int main()
{
	sumShort(255);
	sumShort(256);
	sumLong(65535);
	sumLong(65536);
	factorialFloat(34);
	factorialFloat(35);
	factorialDouble(170);
	factorialDouble(171);
	sumdivFloat(9);
	sumdivFloat(10);
	sumdivDouble(5);
	sumdivDouble(6);

	for (float j = 3.4; j < 4.4; j += 0.2)
	{
		cout << "j = " << j << endl;
	}


	for(double i = 3.4; i < 4.4; i +=0.2)
	{
		cout << "i = " << i << endl;
	}


//Double has a better precision than a float, and because of that, the truncation of a double calculation is more accurate
//The loop repeats one more time during the float loop due to the reduced precision of a float


}

