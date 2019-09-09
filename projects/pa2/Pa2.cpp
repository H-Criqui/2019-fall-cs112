#include<string>
#include<iostream>
#include<vector>
#include<fstream>

using namespace std;


void main()
{
    string temp;

    ifstream fin;
    fin.open ("tinypix.ppm");

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

    cout << "data: " << endl;
    
}