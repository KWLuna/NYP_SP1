#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string thirdlevel()
{
	string total;
	string line;
	ifstream myfile("map2.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (int index = 0; index < line.size(); index++)
			{
				switch (line[index])
				{
				case '#':
					line[index] = (char)219;
					break;
				case '$':
					line[index] = ' '; //negative trap tile
					break;
				case '!':
					line[index] = ' '; // positive trap tile
					break;
				case '&':
					line[index] = ' ';//monster tile
					break;
				case '@':
					line[index] = (char)177; // ending tile
					break;
				}
			}
			total += line + '\n';
		}
		myfile.close();
		return total;
	}
}
