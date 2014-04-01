#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

#define PI 3.14159
#define TWO_PI (2 * PI)

int main(int argc, char** argv)
{
	ofstream output("data.txt");
	double cNote[25000];

	for (int i = 0; i < 25000; ++i)
	{
		cNote[i] = sin(TWO_PI * 440 * i);
		output << i << " " << cNote[i] << endl;
	}

	output.close();
	return 0;
}
