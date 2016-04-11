all: report_generation

report_generation.o: report_generation.cpp report_template.h
	g++ -c -g report_generation.cpp

report_template.o: report_template.cpp report_template.h
	g++ -c -g report_template.cpp

report_generation: report_generation.o report_template.o
	g++ -Wall -g -o report_generation.o report_template.o
