#include<iostream>
#include<fstream>
#include "compress_log.h"
#include "input_log.h"
using namespace std;

void debug_log(const string& message)
{
	const int size_of_file = 100000;
	string file_name = "test.txt";
	ofstream fout;
	fout.open(file_name.c_str(),ios::app);
	if(!fout)
		cout<<"Cannot open file"<<endl;
	else
	{
		fout<<message;
		if(fout.tellp() > size_of_file)
		{
			fout.close();
			compress_file(file_name.c_str());
			fout.open(file_name.c_str(),ios::trunc);
		}
		fout.close();
	}
}
