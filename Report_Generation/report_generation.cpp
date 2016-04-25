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
	string output = "<html>\n<head>\n<script type=\"text/javascript\" src=\"https://www.gstatic.com/charts/loader.js\"></script>\n<script type=\"text/javascript\">\ngoogle.charts.load('current', {packages: ['corechart', 'bar']});\ngoogle.charts.setOnLoadCallback(drawTopX);\n\nfunction drawTopX() {\nvar data = new google.visualization.DataTable();\ndata.addColumn('number', 'Commit Number');\ndata.addColumn('number', 'Lines of code');\ndata.addColumn('number', 'Comments');\n\ndata.addRows([\n[1, 40, 10],\n[2, 20, 15],\n[3, 75, 5],\n[4, 150, 40],\n[5, 60, 20],\n[6, 200, 58],\n[7, 300, 75],\n[8, 288, 80],\n[9, 250, 100],\n[10, 290, 120],\n]);\n\nvar options = {\nchart: {\ntitle: 'Title',\nsubtitle: 'Subtitle'\n},\naxes: {\nx: {\n0: {side: 'top'}\n}\n},\nhAxis: {\ntitle: 'Commits',\nviewWindow: {\nmin: [7, 30, 0],\nmax: [17, 30, 0]\n}\n},\nvAxis: {\ntitle: 'Lines of code'\n}\n};\n\nvar material = new google.charts.Bar(document.getElementById('chart_div'));\nmaterial.draw(data, options);\n}\n</script>\n</head>\n<body>\n<div id=\"chart_div\"></div>\n</body>\n</html>";




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


