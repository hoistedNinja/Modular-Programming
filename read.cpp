
#include "stdafx.h"
#include <iostream>
#include "constant.h"
using namespace std;


void read(int list[], int &count, int &max) {
	int c = 0;
	cout << "please enter the max possible score" << endl;
	cin >> max;
	while (list[c] != sentinel) {
		cout << "please enter the scores or -1 to quit" << endl;
		cin >> list[c];
		if (list[c] != sentinel) { c++; }
	}
	count = c;


}