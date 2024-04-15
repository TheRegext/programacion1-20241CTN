#include <iostream>
using namespace std;

/**
	V && V > V
	V && F > F
	F && V > F
	F && F > F

	V || V > V
	V || F > V
	F || V > V
	F || F > F

	V || (F && V) ==> 1 + 0 * 1 ==> 1 + 0 ==> 1 ==> V
	V || F && F ==> 1 + 0 * 0 ==> 1 + 0 ==> 1 ==> V
	(V || F) && F ==> (1 + 0) * 0 ==> 1 * 0 ==> 0 ==> F
	V || V || V ==> 1 + 1 + 1 ==> 1 + 1 ==> 1 > V

	
*/

int main() {
	
	bool num = 5;
	
	cout << num << endl;
	
	return 0;
}

