
#include<string>
#include<cstring>
#include <iostream>
#include <cmath>
using namespace std;
class ConvertInto
{
public:
	ConvertInto() {
		const int MaxCount = 1024;

		char buffer[1024];
		bool convResult;
		int* return_value_when_everything_work;
		int result;
		
		
		
		int value; {
			convResult = false;
			value = 0;
		}
		
			
			
		

	}
virtual ~ConvertInto(){}

	int ConvertIntoPerformConversion(char* string) {
	const int MaxCount = 1024;

	char buffer[1024];
	bool result = false;
	std::string s(string);
	try {
		result = true;
		result = stoi(s);
	}
	catch (const std::logic_error& le)
	{
		std::cerr << "Logic Error:  " << le.what() << '\n';
		printf("%s\r\n", le.what());
		//ConvertInto ci = char ConvertIntoPerformConversion(buffer);
	}
	{
		bool t = true;
		bool f = false;
		std::cout << std::noboolalpha << t << " == " << std::boolalpha << t << std::endl;
		std::cout << std::noboolalpha << f << " == " << std::boolalpha << f << std::endl;
		return result;
	}

}

};










	

	



	

