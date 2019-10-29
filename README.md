# IFE-Toolbox
Input "Hello world" 3000 times and if size of log is greater than 8000 bytes create new compressed file (.gz) like file1.gz , file2.gz ... and so on

#To compile 
Open terminal and go to Makefile directory:

	-$ make all

This command will run Makefile and executable 'logcompress' will be created in /build/objects directory. 

#To execute


	-$ ./build/objects/logcompress

This command will execute 'logcompress' and output will be generated in the directory.

#Eg: Output


	-$ ls 
#	build  header  Makefile  README.md  source
	

	-$ make all
#	g++ -std=c++11 source/main.cpp source/logger_source/input_log.cpp source/logger_source/compress_log.cpp  -o build/objects/logcompress -lz -Wall -Iheader/logger_header
#	Compiled source/main.cpp successfully!


	-$ ls build/objects
#	logcompress


	-$ ./build/objects/logcompress
	-$ ls 
#	build   Makefile   source    test2.gz  test.txt  header  README.md  test1.gz  test3.gz
		##Here, test1.gz, test2.gz, test3.gz are the compressed logs.
	

	-$ make clean
#	rm -f build/objects/logcompress
#	rm -f *.gz *.txt
#	Cleanup bin complete!




