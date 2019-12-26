

#include "stdafx.h"
#include <iostream>
#include "read.h"
#include"sort.h"
#include "outputScores.h"
#include "outputSummary.h"
#include "constant.h"
using namespace std;


int main()
{

	int scores[arraysize];
	int count;
	int maximum;
	read(scores, count, maximum);
	sort(scores, count);
	outputScores(scores, count, maximum);
	outputSummary(scores, count, maximum);
	system("pause");
	return 0;
}