#include "Functions.h"
#include <string>
//#include <iostream>
#include <fstream>

bool number_to_string_name(int User_Number, std::string file_path)
{
	std::string name;
	if (!(User_Number > 9 && User_Number < 100))
	{
		return false;
	}
	
	//(User_Number % 10)
	//	(User_Number / 10)
	if (User_Number / 10 == 1)
	{
		switch (User_Number % 10)
		{
		case 0: name = "Ten"; break;
		case 1: name = "Eleven"; break;
		case 2: name = "Twelwe"; break;
		case 3: name = "Thirteen"; break;
		case 4: name = "Forteen"; break;
		case 5: name = "Fiveteen"; break;
		case 6: name = "Sixteen"; break;
		case 7: name = "Seventeen"; break;
		case 8: name = "Eighteen"; break;
		case 9: name = "Nineteen"; break;
		};
		std::ofstream file_write_stream;
		file_write_stream.open(file_path, std::ios::app);
		if (!file_write_stream.is_open())
			return false;
		file_write_stream << name << "\n";
		return true;
	}


		switch (User_Number / 10)
		{
		case 2: name = "Twenty"; break;
		case 3: name = "Thirty"; break;
		case 4: name = "Fourty"; break;
		case 5: name = "Fifty"; break;
		case 6: name = "Sixty"; break;
		case 7: name = "Seventy"; break;
		case 8: name = "Eighty"; break; 
		case 9: name = "Ninety"; break;

		};
		switch (User_Number % 10)
		{
		//case 0: name += "Ten"; break;
		case 1: name += " one"; break;
		case 2: name += " two"; break;
		case 3: name += " three"; break;
		case 4: name += " four"; break;
		case 5: name += " five"; break;
		case 6: name += " six"; break;
		case 7: name += " seven"; break;
		case 8: name += " eight"; break;
		case 9: name += " nine"; break;

		}


		std::ofstream file_write_stream;
		file_write_stream.open(file_path, std::ios::app);
		if (!file_write_stream.is_open())
			return false;
		file_write_stream << name<<"\n";
		

	return true;
}
