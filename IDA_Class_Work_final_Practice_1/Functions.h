
//#pragma once

#ifndef _Functions_H_
#define _Functions_H_
#include <string>
			
template <typename any> void pointer_to_2DIM_array_redirect(any**& pointer, int cols, int rows)
{
	any** array_2DIM = new any*[rows];
	//pointer = new any[rows];
	for (int i = 0; i < rows; i++)
		array_2DIM[i] = new any[cols]{};
		//pointer[i] = new any[cols]{};

	pointer = array_2DIM;
}
template <typename any> void memory_clear(any**& pointer, int rows)
{
	for (int i = 0; i < rows; i++)
		delete[] pointer[i];
	delete[] pointer;
	pointer = nullptr;
 }
template <typename any> any* array_consolidation(any array_1[], int Size_1, any* array_2, int Size_2, int& total_size)
{
	any* tmp = new any[Size_1 + Size_2];
	int Total_current_index = 0;

	for (int i = 0; i < Size_1; i++)
	{
		if (array_1[i] > 0)
		{
			tmp[Total_current_index] = array_1[i];
			Total_current_index++;
		}
	}

	for (int i = 0; i < Size_2; i++)
	{
		if (array_2[i] > 0)
		{
			tmp[Total_current_index] = array_2[i];
			Total_current_index++;
		}
	}
	
	any* Final_Consolidated_Array = new any[Total_current_index];
	for (int i = 0; i < Total_current_index; i++)
		Final_Consolidated_Array[i] = tmp[i];
		
	
	delete[] tmp;
	total_size = Total_current_index;
	return Final_Consolidated_Array;

}

bool number_to_string_name(int User_Number, std::string file_path);




#endif