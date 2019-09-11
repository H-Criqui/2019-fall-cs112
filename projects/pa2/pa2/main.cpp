#include<string>
#include<iostream>
#include<vector>
#include<fstream>

using namespace std;


int main()
{
	string temp;

	ifstream fin;
	fin.open("tinypix.ppm");

	cout << "Image Format: ";
	getline(fin, temp);
	cout << temp << endl;
	cout << "Width: ";
	getline(fin, temp, ' ');
	cout << temp << endl;
	cout << "Height: ";
	getline(fin, temp);
	cout << temp << endl;
	cout << "Max Pixel Value: ";
	getline(fin, temp);
	cout << temp << endl;

	temp = "";
	string data_output;
	cout << "data: " << endl;
	while (getline(fin, temp))
	{
		data_output += temp;
		data_output.push_back('\n');
	}

	cout << data_output;
	return 0;
}											
