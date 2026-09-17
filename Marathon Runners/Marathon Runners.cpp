/*
Name : Bishop Brandstetter
Course : CSC222
Project: Marathon Runners
This program will read runner mileage data from a file then calculate each runners total,
and average mileage, and displays the results in a formatted table.
*/


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int num_runners = 5;
const int num_days = 7;

void readrunnerData(string runnernames[], double miles[][num_days]);
void calculatetotals();
void displayresults();

int main()
{
	string runnernames[num_runners];
	double miles[num_runners][num_days];
	double totals[num_runners];
	double averages[num_runners];

	readrunnerData(runnernames, miles);

	return 0;
}
