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
	
	Qarr<int> qarr(-100, 1);
	qarr.Modify(1, -1);
	qarr.Modify(2, -2);

	qarr.insert(100, -1);
	qarr.deleteQ(-1);
	cout << qarr[-2] << " " << qarr[-1] << " " << qarr[0] << endl;

	int a[100] = { 0 };
	cout << desbinary(a, 0, 99, 0) << endl;
	system("pause");
	return EXIT_SUCCESS;
}