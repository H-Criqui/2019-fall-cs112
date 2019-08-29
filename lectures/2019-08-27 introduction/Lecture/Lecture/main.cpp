#include <iostream>
#include <string>
using namespace std;

//1. (p. 73) Prompt user for a string. Remove adjacent duplicate words.
//I I went to the the store this morning -> I went to the store this morning
string removeAdjacentDuplicates(string original)
{
	string current;
	string previous;
	string result;
	int index = 0;
	while (index < original.length())
	{
		int space_index = original.find(' ', index);
		//string temp = original.substr(0, i);
		string current = original.substr(index, space_index - index);

		if(current != previous)
		{
			result += current + " ";
		}

		if(space_index == -1)
		{
			index = original.length();
		}
		else
		{
			index = space_index + 1;
		}
		
		previous = current;
		cout << space_index << endl;
	}
	return result.substr(0, result.length() - 1);
}

int main(void)
{
	string reduced = removeAdjacentDuplicates("I I went to the the store this morning");
}