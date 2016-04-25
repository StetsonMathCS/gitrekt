/*
 * Filename: report_generation.cpp
 *
 * Description: The cpp file that executes the report generation. Basically the main file of Report Generation.
 *
 * Author: Acacia Zack
 */
 
#include <iostream>
#include <fstream>
#include "report_generation.h"


using namespace std;

/*
 * Constructor
 */

Report_Generation::Report_Generation(string userName, int numberOfCommit, int linesOfCodes, int linesThatAreComments, int linesThatAreCode)
{
	myUserName=userName;
	myNumberOfCommit=numberOfCommit;
	myLinesOfCodes=linesOfCodes;
	myLinesThatAreComments=linesThatAreComments;
	myLinesThatAreCode= linesThatAreCode;
    
}



void areaChart() {
	ofstream outputFile("areachart.html");
	//outputFile.open("index.html");
	string output = "<html>\n<head>\n<script type=\"text/javascript\" src=\"https://www.gstatic.com/charts/loader.js\"></script>\n<script type=\"text/javascript\">\ngoogle.charts.load('current', {'packages':['corechart']});\ngoogle.charts.setOnLoadCallback(drawChart);\nfunction drawChart() {\nvar data = google.visualization.arrayToDataTable([\n['Commit', 'User1', 'User2'],\n['1',  1000, 400],\n['2',  1170, 460],\n['3',  660, 1120],\n['4',  1030, 540]\n]);\n\nvar options = {\ntitle: 'Code Contributions',\nhAxis: {title: 'Commits',  titleTextStyle: {color: '#333'}},\nvAxis: {minValue: 0}\n};\n\nvar chart = new google.visualization.AreaChart(document.getElementById('chart_div'));\nchart.draw(data, options);\n}\n</script>\n</head>\n<body>\n<div id=\"chart_div\" style=\"width: 900px; height: 500px;\"></div>\n</body>\n</html>";

	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 



}

void barGraph() {
	ofstream outputFile("bargraph.html");
	//outputFile.open("index.html");
	string output = "<HTML>\n <HEAD>\n <title>Test HTML PAGE</title></head>\n<body>\n <h1>Testing output HTML file</h1></body></HTML>";
	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 


}


void lineGraph() {
	ofstream outputFile("linegraph.html");
	//outputFile.open("index.html");
	string output = "<HTML>\n <HEAD>\n <title>Test HTML PAGE</title></head>\n<body>\n <h1>Testing output HTML file</h1></body></HTML>";
	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 



}

void piechart() {
	ofstream outputFile("piechart.html");
	//outputFile.open("index.html");
	string output = "<HTML>\n <HEAD>\n <title>Test HTML PAGE</title></head>\n<body>\n <h1>Testing output HTML file</h1></body></HTML>";
	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 


}


void table() {
		ofstream outputFile("table.html");
	//outputFile.open("index.html");
	string output = "<HTML>\n <HEAD>\n <title>Test HTML PAGE</title></head>\n<body>\n <h1>Testing output HTML file</h1></body></HTML>";
	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 



}

int main() {
	cout << "executing" << endl;
	areaChart();
	barGraph();
	lineGraph();
	piechart();
	table();
	cout << "done all" << endl;


	
	return 0;





}


