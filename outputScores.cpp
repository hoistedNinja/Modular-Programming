

#include "stdafx.h"
#include<iostream>
#include <iomanip>

using namespace std;



double getPercentage(double num, double maximum)
{
	double per = (num / maximum) * 100;
	return (per);
}
char returnGrade(double num, double max)
{
	double per = num / max;
	if (per >= 0.9) { return 'A'; }
	else if (per >= 0.8 && per<0.9) { return 'B'; }
	else if (per >= 0.7 && per<0.8) { return 'C'; }
	else if (per >= 0.6 && per<0.7) { return 'D'; }
	else { return 'F'; }
}
void outputScores(int list[], int c, int max) {
	cout << "Scores" << '\t' << "percentage" << '\t' << "Grade" << endl;
	for (int i = 0; i < c; i++) {
		cout << fixed << setprecision(2);
		cout << list[i] << '\t' << getPercentage(list[i], max) << '\t' << '\t' << returnGrade(list[i], max) << endl;
	}
}