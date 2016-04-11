/*
 * Filename: report_generation.h
 *
 * Description: The header file for the report generation.
 *
 * Authors: Acacia Zack
 */

#include "report_template.h"

#ifndef REPORT_GENERATION_H
#define REPORT_GENERATION_H

class Report_Generation
{   
    private:
        Report_Template::Report_Template *reportTemplate;

    public:
      Report_Generation();
      ~Report_Generation();  
};

#endif
