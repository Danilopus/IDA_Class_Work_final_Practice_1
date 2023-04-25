#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>

#include "Functions.h"
#include "Service.h"

// Class Work 25.04.2023 -------------------------------------------	

//Task 1
void Task_1()
{
	int rows=10, cols=10;
	int** pointer;
	pointer_to_2DIM_array_redirect(pointer, cols, rows);

	std::cout << "2DIM Array data:\n";
	for (int i = 0; i < rows; i++)
	{
		Array_Console_Out(pointer[i], cols);
	}
	memory_clear(pointer, rows);
	

}
//Task 2
void Task_2()
{
	int const Size_1 = 5, Size_2=15;
	double Rand_Range = 999;
	double* array_double_1 = new double[Size_1];
	double* array_double_2 = new double[Size_2];
	Fill_Array_with_Random(array_double_1, Size_1, -Rand_Range, Rand_Range);
	Fill_Array_with_Random(array_double_2, Size_2, -Rand_Range, Rand_Range);
	std::cout << "array_double_1: ";
	Array_Console_Out(array_double_1, Size_1);
	std::cout << "\narray_double_2: ";
	Array_Console_Out(array_double_2, Size_2);

	//int Total_Size = 0;
	int Total_Size;

	std::cout << "\nConsolidated array: ";

	//Array_Console_Out(array_consolidation(array_double_1, Size_1, array_double_2, Size_2, Total_Size), Total_Size);

	double* new_arr = array_consolidation(array_double_1, Size_1, array_double_2, Size_2, Total_Size);

	Array_Console_Out(new_arr, Total_Size);
	 
	delete[] new_arr;

}

//Task 3
void Task_3()
{
	std::cout << "Enter a 2-digit number: ";
	int ch;
	while (true)
	{
		int User_number = Get_Int_Positive();
		std::string File_Path = "Numbers_names.txt";

		if (number_to_string_name(User_number, File_Path))
			std::cout << "\nAll ok!\n";
		else std::cout << "\nError...\n";

		//int ch = _getch();
		ch = _getch();

		//int _getch();

		//if ( _getch(void));
	}
}

// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
//Task_1();

//Task_2();

Task_3();


std::cout << "\n\n";
system("pause");	
}

