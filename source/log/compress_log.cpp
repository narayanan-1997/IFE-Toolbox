#include<iostream>
#include "zlib.h"
#include<string>
#include<fstream>
using namespace std;

void compress_file(const string & file_name)
{
			string new_file_name = "test";
			static int new_file_suffix = 1;
			string new_file_extension = ".gz";


			//////////////////////////////////


			FILE * infile;
			infile = fopen( file_name.c_str() , "r" );
			gzFile outfile = gzopen("compressed.gz" , "wb" );
			if (!infile || !outfile)
				cout<<"Error";
			char inbuffer[128];
			int num_read = 0;
			unsigned long total_read = 0;
			while ((num_read = fread(inbuffer, 1, sizeof(inbuffer), infile)) > 0)
			{
				total_read += num_read;
				gzwrite(outfile, inbuffer, num_read);
			}

			///////////////////////////////////////


			new_file_name= new_file_name + to_string(new_file_suffix) + new_file_extension;
			new_file_suffix++;
			rename("compressed.gz",new_file_name.c_str());
			gzclose(outfile);
			fclose(infile);
}

