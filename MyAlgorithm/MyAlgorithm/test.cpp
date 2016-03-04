#include "MyAlgorithm.h"
//#include <array>

bool aa(double a,double b)
{
	return a > b;
}
using namespace calg;
using namespace std;
int main()
{
	Qarr<int> qarr[1000] = { (-1,1) };
	qarr[1].Modify(1, -1);
	cout << qarr[1][-1] << endl;
	system("pause");
	return EXIT_SUCCESS;
}