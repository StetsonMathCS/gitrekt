/*
 * Filename: report_generation.cpp
 *
 * Description: The cpp file that executes the report generation. Basically the main file of Report Generation.
 *
 * Author: Acacia Zack
 */

#include "report_generation.h"

/*
 * Constructor
 */

Report_Generation::Report_Generation()
{
    reportTemplate = new Report_Template::Report_Template();
}

/**
 * Destructor that deletes the report generated.
 */

Report_Generation::~Report_Generation()
{
    delete reportTemplate;
}
