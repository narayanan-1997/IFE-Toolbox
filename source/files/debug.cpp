#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "prototype.h"

string file_name="test.txt";
void debug_log(const string& message)
{

	ofstream fout;
	fout.open(file_name.c_str(),ios::app);
	if(!fout)
		cout<<"Cannot open file"<<endl;
	else
	{
		fout<<message;
		if(fout.tellp()>8000)
		{
			fout.close();
			compress_file(file_name.c_str());
			fout.open(file_name.c_str(),ios::trunc);
		}
		fout.close();
	}
}
