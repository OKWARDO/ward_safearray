
#include"SafeArray.hpp"

#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<string>
#include<atlSafe.h>
#include<OleAuto.h>
#include<OAIdl.h>
#include<cstring>
#include"ConvertInto.hpp"

using namespace std;

void  ReviewPointers(void) {
	{
		FILE* f = fopen("data.txt", "r");
		if (f == NULL) {
			printf("The file could not be opened");
			return;
		}//feof is function that  returns true if end of file has been reached
		const int MaxCount = 1024;

		char buffer[1024];
		int lineCount = 0;
		int* array = new int[lineCount];
		int sum = 0;
		int average = 0;
		int* avg = new int[average];
		avg = 0;
		lineCount = 0;
		/*std::ifstream input("data.txt");
		for (std::string line; getline(input, line); )*/
		{
			//printf("data.text"), "%i\r\n";

			while (!feof(f)) {
				fgets(buffer, MaxCount, f);
			}

			int SizeCurrentLine = strlen(buffer);


			if ((int)(buffer[0]) != 10)
				//printf("%i-%i\r\n", buffer[0]);//insert printf here
				if (SizeCurrentLine > 0)

				{
					string s(buffer);
					try {
						int num = stoi(s);//number converted?
						array[lineCount] = num;
						lineCount++;

					}
					catch (const std::logic_error& le) {
						std::cerr << "Logic Error:  " << le.what() << '\n';
					}




				}
			for (int i = 0; i < lineCount; i++) {
				std::cout << "You have " << array[i] << " lines in your data file\n" << std::endl;
				std::cout << "Current value in array =  " << array[i] << std::endl;
				
				

			}
			
			
			//printf("You have ", lineCount, "in your data file\n");
			//delete[]array;
			//fclose(f);
			f = fopen("data.txt", "r");
			////reset line count to zero to append line count
			//int lineCount = 0;
			//int sum = 0;
			//int average = 0;
			//int* avg = new int[average];
			//avg = 0;
			//lineCount = 0;
			////fclose(f);
			//
			////double avg = 0;
			///*std::ifstream input("data.txt");
			//for (std::string line; getline(input, line); )*/
			//	
			//	for (int numbers = 0; numbers < lineCount; numbers++)
			//		sum += numbers;
			//	{
			//	 (lineCount/sum) >> average;
			//		std::cout << average;
		
			//		std::cout << "The average of the elements in the array  =  " << average << std::endl;
			//		return;
			//	}

			//printf("%i\r\n", buffer[0]);
			//printf("sum = %i ");

			delete[]array;
			fclose(f);



		}	return;
		}
	};

	////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////
//{
//	int* ptr = new int[5];
//	int FirstValue = *ptr;
//	int First_vol = ptr[0];
//
//	if (FirstValue == First_vol)
//	{
//		printf("both values are the same\r\n");
//	}
//	else {
//		std::cout << "they are not!\r\n" << std::endl;
//	}
//	return;
//}
	void BinaryDataHandling(void);
	 //ConvertInto()
		
	int main() {
		
		//char*buffer = "ABC";
		int result;
		
		//ConvertInto ci  = char*buffer ConvertIntoPerformConversion( );
		SafeArray;
		ReviewPointers();
		ConvertInto;
		ConvertInto();
		
		BinaryDataHandling();
		system("PAUSE");

		return  0;


		
};
	