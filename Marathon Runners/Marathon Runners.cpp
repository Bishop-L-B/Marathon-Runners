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
void calculatetotals(double miles[][num_days],double totals[], double averages[]);
void displayresults();

int main()
{
	string runnernames[num_runners];
	double miles[num_runners][num_days];
	double totals[num_runners];
	double averages[num_runners];

	readrunnerData(runnernames, miles);
	calculatetotals(miles, totals, averages);


	return 0;
}




	void readrunnerData(string runnernames[], double miles[][num_days])
	{
		ifstream inputFile;

		inputFile.open("runners.txt");

		if (!inputFile)
		{
			cout << "Error opening runners.text" << endl;
			return;
		}
		for (int runner = 0; runner < num_runners; runner++)
		{
			inputFile >> runnernames[runner];

			for (int day = 0; day < num_days; day++)
			{
				inputFile >> miles[runner][day];
			}
		}
		inputFile.close();
		
	}

	void calculatetotals(double miles[][num_days], double totals[], double averages[])
	{
		for (int runner = 0; runner < num_runners; runner++)
		{
			totals[runner] = 0;

			for (int day = 0; day < num_days; day++)
			{
				totals[runner] += miles[runner][day];
			}
			averages[runner] = totals[runner] / num_days;
		}
	}

