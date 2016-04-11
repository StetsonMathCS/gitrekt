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
    reportTemplate = new Wt::WTemplate();

    createHeaderSection();
    createNumbersSection();
    createGraphsSection();

    reportTemplate->Wt::bindWidget("header_section", reportHeader);
    reportTemplate->Wt::bindWidget("numbers_section", reportNumbers);
    reportTemplate->Wt::bindWidget("graphs_section", reportGraphs);
}

/*
 * Destructor. Deletes the template, its containers, and everything within its containers.
 */

Report_Template::~Report_Template()
{
    statedName->Wt::~WText();

    reportHeader->Wt::~WContainerWidget();

    reportNumber->Wt::~WContainerWidget();

    reportGraphs->Wt::~WContainerWidget();
    
    reportTemplate->Wt::~WTemplate();
}

/**
 * Creates the header section where the user name shall be.
 */

void Report_Template::createHeaderSection()
{
    reportHeader = new Wt::WContainerWidget();

    statedName = new Wt::WText("Name: ", Wt::PlainText);

    reportHeader->Wt::addWidget(statedName);
}

/**
 * Creates the numbers section where general information and ratios will be.
 */

void Report_Template::createNumbersSection()
{
    reportNumbers = new Wt::WContainerWidget();
}

/**
 * Creates the graphs section where the line graph and bar graph will be.
 */

void Report_Template::createGraphsSection()
{
    reportGraphs = new Wt::WContainerWidget();
}
