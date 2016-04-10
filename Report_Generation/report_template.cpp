/**
 * Filename: report_template.cpp
 *
 * Description: The cpp file which executes the template.
 *
 * Author: Acacia Zack
 */

#include "report_template.h"

/*
 * Constructor
 */

Report_Template::Report_Template()
{

}

/*
 * Destructor. Deletes the template and its containers.
 */

Report_Template::~Report_Template()
{
    reportHeader->~WContainerWidget();
    reportNumber->~WContainerWidget();
    reportGraphs->~WContainerWidget();
    
    reportTemplate->~WTemplate();
}

Report_Template::createHeaderSection()
{
    reportHeader = new WContainerWidget();
}

Report_Template::createNumbersSection()
{
    reportNumbers = new WContainerWidget();
}

Report_Templte::createGraphsSection()
{
    reportGraphs = new WContainerWidget();
}
