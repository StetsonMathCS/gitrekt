/**
 * Filename: report_generation.h
 *
 * Decription: The header file for the template used for the report generation.
 *
 * Author: Acacia Zack
 */

#include <Wt/WTemplate>
#include <Wt/WContainerWidget>

#ifndef REPORT_TEMPLATE_H
#define REPORT_TEMPLATE_H

class Report_Template
{
    private:
        Wt::WTemplate *reportTemplate;
        Wt::WContainerWidget *reportHeader;
        Wt::WContainerWidget *reportNumbers;
        Wt::WContainerWidget *reportGraphs;

    public:
        Report_Template();
        ~Report_Template();
        void createHeaderSection();
        void createNumbersSection();
        void createGraphsSection();
}

#endif
