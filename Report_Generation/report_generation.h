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

#include "report_generation.h"

using namespace std;

class Report_Generation
{   
    private:
        //Report_Template *reportTemplate;

    public:
    string myUserName;
    string myNumberOfCommit; 
    int myLinesOfCodes;
    int myLinesThatAreComments; 
    int myLinesThatAreCode;
    void areaChat();

void barGraph();


void lineGraph();

void piechart();


void table();
    
    Report_Generation(string userName, int numberOfCommit, int linesOfCodes, int linesThatAreComments, int linesThatAreCode);
    
    
    
};

#endif
