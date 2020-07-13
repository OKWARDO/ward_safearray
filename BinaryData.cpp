#include<cstdio>
#include<cstring>
#include<iostream>


void BinaryDataHandling(void)
{
	FILE* f = fopen("binary.bin", "wb");//sizeof(char), 30, fopen(bmp rb)
	int sample = 123;//char buffer[30];
	size_t res = fwrite(&sample, sizeof(int), 1, f);//(&buffer one element at  time
	std::cout << "res = " << res << " - sizeof(int) = " << sizeof(int) << std::endl;
	if (res == 1) {
		std::cout << "success" << std::endl;
	}
	else {
		std::cout << "failure" << std::endl;
	}
	fclose(f);
	//rb = readback still use fread open bmp in read rb not write wb// discard first 64 bits read header of bmpfor(int =0; i < 30; i++)
	f = fopen("binary.bin", "rb");
	int read_value = 0;
	res = fread(&read_value, sizeof(int), 1, f);
	if (res == 1) {
		std::cout << "success" << read_value << std::endl;
	}
	else {
		std::cout << "failure" << read_value << std::endl;
	}
	fclose(f);
}