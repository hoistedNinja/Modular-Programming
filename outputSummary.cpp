
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;












int highScore(int list[], int size)

{
	int high = list[0];
	for (int i = 0; i < size; i++) {
		if (list[i] > high) { high = list[i]; }
	}


	return high;
}
int lowScore(int list[], int size)
{

	int low = list[0];

	for (int i = 0; i < size; i++) {
		if (list[i] < low) { low = list[i]; }
	}


	return low;

}
double average(int list[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + list[i];
	}
	return sum / size;
}

double findMedian(int a[], int n)
{
	// First we sort the array 


	// check for even case 
	if (n % 2 != 0)
		return (double)a[n / 2];

	return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}


void outputSummary(int list[], int c, int max) {
	cout << endl;
	cout << "-----------Summary Information----" << endl;
	cout << "**********************************" << endl;
	cout << " Maximum Possible Score      :" << max << fixed << setprecision(2) << endl;
	cout << " Number of student Processed :" << c << fixed << setprecision(2) << endl;
	cout << " High Score                  :" << highScore(list, c) << endl;
	cout << " Low Score                   :" << lowScore(list, c) << endl;
	cout << " Average Score               :" << average(list, c) << endl;
	cout << " Median score                :" << findMedian(list, c) << endl;



	cout << "***********************************" << endl;
}