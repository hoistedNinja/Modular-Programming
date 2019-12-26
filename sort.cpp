
#include "stdafx.h"
#include <iostream>
using namespace std;



void sort(int list[], int n) {
	int temp;
	int large;
	for (int i = 0; i < n - 1; i++) {

		large = i;
		for (int j = i + 1; j < n; j++) {
			if (list[j] > list[large]) {
				temp = list[i];
				list[i] = list[large];
				list[large] = temp;
			}
		}
	}
}