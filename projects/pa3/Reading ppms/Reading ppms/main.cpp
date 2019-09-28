#include<string>
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include "fileHelpers.h"
using namespace std;



int main()
{
	string temp;
	string file_name;
	string out_file_name;

	cout << "What .ppm file should I open?(tinypix.ppm)" << endl;
	cin >> file_name;
	cout << endl;
	cout << "What file should be our destination?(output.ppm)" << endl;
	cin >> out_file_name;

	ofstream fout;
	fout.open(out_file_name);
	ifstream fin;
	fin.open(file_name);

	string decete;
	bool comment = true;
	while (comment == true)
	{
		getline(fin, decete);
		if (decete.at(0) != '#')
		{
			comment = false;
		}
		else
		{
			comment = true;
		}
	}
	
	fout << decete << endl;
	comment = true;

	while (comment == true)
	{
		getline(fin, decete);
		if (decete.at(0) != '#')
		{
			comment = false;
		}
		else
		{
			comment = true;
		}
	}

	temp = decete.at(0);
	fout << temp << ' ';
	temp = decete.at(2);
	fout << temp << endl;
	comment = true;

	while (comment == true)
	{
		getline(fin, decete);
		if (decete.at(0) != '#')
		{
			comment = false;
		}
		else
		{
			comment = true;
		}
	}

	fout << decete << endl;

	vector<string> data;
	temp = "";
	string data_output;
	string comments;
	string result;
	int space = 0;

	while (fin.good() == true)
	{
		getline(fin, result, ' ');
		if (result.length() > 0 && result.at(0) != '#')
		{
			data.push_back(result);
		}
		else if(result.length() > 0 && result.at(0) == '#')
		{
			getline(fin, result);
			comments += result;
		}
	}

	/*while (getline(fin, temp, ' '))
	{
		if ((temp.at(0) != '#') or (temp.at(0) != ' '))
		{
			data.push_back(temp);
		}
		else if (temp.at(0) == ' ')
		{
			space++;
		}
		else
		{
			getline(fin, temp);
			comments += temp;
		}
	}
	*/
	int i = 0;
	while (i < (data.size()-1))
	{
		if (i%3 == 0)
		{
			fout << '0' << ' ';
		}
		else
		{
			fout << data[i] << ' ';
		}
		
		i++;
	}

	



	


/*	testing getline

	string line_1;
	string line_2;
	string line_3;

	getline(iss, line_1, ' ');
	getline(iss, line_2, ' ');
	getline(iss, line_3, ' ');

	cout << "=====================" << endl;
	cout << line_1 << endl;
	cout << "=====================" << endl;
	cout << line_2 << endl;
	cout << "=====================" << endl;
	cout << line_3 << endl;
*/





	//fout << data_output;
	return 0;
}
