// Wyatt Lester
// Date: 09/16/22
// Program Title: StarWarsMovieList
// Program Description: Reorganizes a star wars movie list
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
// Named constants
int main()
{

	// Variable declaration

	string movie1, movie2, movie3, movie4, movie5, movie6, movie7, movie8, movie9;

	int year1, year2, year3, year4, year5, year6, year7, year8, year9;

	//Declare file stream variables

	ifstream inData;

	ofstream outData;

	//Open the input and output files

	inData.open("StarWarsMovieList.txt");

	outData.open("StarWarsOutputFile.out");

	//Code for data Manipulation

	getline(inData, movie1);
	inData >> year1;
	inData.ignore();

	getline(inData, movie2);
	inData >> year2;
	inData.ignore();

	getline(inData, movie3);
	inData >> year3;
	inData.ignore();

	getline(inData, movie4);
	inData >> year4;
	inData.ignore();

	getline(inData, movie5);
	inData >> year5;
	inData.ignore();

	getline(inData, movie6);
	inData >> year6;
	inData.ignore();

	getline(inData, movie7);
	inData >> year7;
	inData.ignore();

	getline(inData, movie8);
	inData >> year8;
	inData.ignore();

	getline(inData, movie9);
	inData >> year9;
	inData.ignore();

	// Output to the file

	outData << fixed << showpoint << setprecision(2);

	outData << setw(25) << left << "Episode" << setw(30) << "Movie Name" << setw(25) << right << "Release Year" << endl;
	outData << setw(80) << setfill('-') << "-" << endl;
	outData << setfill(' ') << setw(25) << left << "I" << setw(30) << movie1 << setw(25) << right << year1 << endl;
	outData << setw(25) << left << "II" << setw(30) << movie2 << setw(25) << right << year2 << endl;
	outData << setw(25) << left << "III" << setw(30) << movie3 << setw(25) << right << year3 << endl;
	outData << setw(25) << left << "IV" << setw(30) << movie4 << setw(25) << right << year4 << endl;
	outData << setw(25) << left << "V" << setw(30) << movie5 << setw(25) << right << year5 << endl;
	outData << setw(25) << left << "VI" << setw(30) << movie6 << setw(25) << right << year6 << endl;
	outData << setw(25) << left << "VII" << setw(30) << movie7 << setw(25) << right << year7 << endl;
	outData << setw(25) << left << "VIII" << setw(30) << movie8 << setw(25) << right << year8 << endl;
	outData << setw(25) << left << "IX" << setw(30) << movie9 << setw(25) << right << year9 << endl;

	//Output to the screen

	cout << "Processing data" << endl;

	cout << "Please check output.out file.";

	return 0;
}
