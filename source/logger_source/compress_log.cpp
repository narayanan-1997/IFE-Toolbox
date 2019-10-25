#include<iostream>
#include "zlib.h"
#include<fstream>
#include "compress_log.h"
using namespace std;

void compress_file(const string & file_name)
{
			const int buffer_size = 100000;
			string new_file_name = "test";
			static int new_file_suffix = 1;
			string new_file_extension = ".gz";

			//////////////////////////////////

			FILE * infile;
			infile = fopen( file_name.c_str() , "r" );
			gzFile outfile = gzopen("compressed.gz" , "wb" );
			if (!infile || !outfile)
				cout<<"Error";
			unsigned char *inbuffer = NULL;
			unsigned char *inbuffer = new unsigned char[buffer_size];
			int num_read = 0;
			num_read = fread(inbuffer, 1, sizeof(inbuffer), infile);
			if(num_read <= file_size)
			{
				gzwrite(outfile, inbuffer, num_read);
			}
			else
			{
				cout<<"\n\n Buffer Overflow \n\n";
			}
			delete[] inbuffer; 
			///////////////////////////////////////

			new_file_name= new_file_name + to_string(new_file_suffix) + new_file_extension;
			new_file_suffix++;
			rename("compressed.gz",new_file_name.c_str());
			gzclose(outfile);
			fclose(infile);
}

