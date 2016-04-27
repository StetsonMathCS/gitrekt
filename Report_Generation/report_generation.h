/*
 * Filename: report_generation.h
 *
 * Description: The header file for the report generation.
 *
 * Authors: Acacia Zack
 */

//#include "report_template.h"

#ifndef REPORT_GENERATION_H
#define REPORT_GENERATION_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Report_Generation
{   
    private:
        //Report_Template *reportTemplate;

    public:
    vector<int> myNumberOfCommit; 
    vector<int> myLinesOfCodes;
    vector<int> myLinesThatAreComments; 
    vector<int> myLinesThatAreCode;
    vector<string> myUserNames;
    
    //not a vector
    int myNumberOfUsers; 
    
    void areaChart();
	void barGraph();
	void lineGraph();
	void piechart();
	void table();
    
    Report_Generation(vector<string> userNames, int numberOfUsers, vector <int> numberOfCommit, vector <int> linesOfCodes, vector <int> linesThatAreComments, vector <int> linesThatAreCode);
    
    
    
};

#endif
