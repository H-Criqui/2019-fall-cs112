#include<string>
#include<iostream>
#include<vector>
#include<fstream>

using namespace std;


int main()
{
	string temp;
	string file_name;

	cout << "What .ppm file should I open?" << endl;
	cin << file_name;

	ifstream fin;
	fin.open(file_name);

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
