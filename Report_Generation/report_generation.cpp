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

Report_Generation::Report_Generation(vector<string> userNames, int numberOfUsers, vector<int> numberOfCommit, vector<int> linesOfCodes, vector<int> linesThatAreComments, vector<int> linesThatAreCode)
{
	myUserNames = userNames;
	myNumberOfCommit=numberOfCommit;
	myLinesOfCodes=linesOfCodes;
	myLinesThatAreComments=linesThatAreComments;
	myLinesThatAreCode= linesThatAreCode;
	myNumberOfUsers = numberOfUsers;
	
    
}


/**
** Area Chart Output to areachart.html
**/
void Report_Generation::areaChart() {
	ofstream outputFile("areachart.html");
	//outputFile.open("index.html");
	string output = "<html>\n<head>\n<script type=\"text/javascript\" src=\"https://www.gstatic.com/charts/loader.js\"></script>\n<script type=\"text/javascript\">\ngoogle.charts.load('current', {'packages':['corechart']});\ngoogle.charts.setOnLoadCallback(drawChart);\nfunction drawChart() {\nvar data = google.visualization.arrayToDataTable([\n['Commit',";
	
	for (int i=0; i<myNumberOfUsers;i++) {
		
		output += ("'");
		
		
		output += (myUserNames[i]);
		 
		output+= ("'");
		
		if (i==myNumberOfUsers) {
			output.append("]");
		}
		
		else if (i<myNumberOfUsers) {
			output.append(",");
		}
	}
	
	
	
	output.append("\n['1',  1000, 400],\n['2',  1170, 460],\n['3',  660, 1120],\n['4',  1030, 540]\n]);\n\nvar options = {\ntitle: 'Code Contributions',\nhAxis: {title: 'Commits',  titleTextStyle: {color: '#333'}},\nvAxis: {minValue: 0}\n};\n\nvar chart = new google.visualization.AreaChart(document.getElementById('chart_div'));\nchart.draw(data, options);\n}\n</script>\n</head>\n<body>\n<div id=\"chart_div\" style=\"width: 900px; height: 500px;\"></div>\n</body>\n</html>");

	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 



}

/**
** Bar Graph Output to bargraph.html
**/
void Report_Generation::barGraph() {
	ofstream outputFile("bargraph.html");
	//outputFile.open("index.html");
	string output = "<html>\n<head>\n<script type=\"text/javascript\" src=\"https://www.gstatic.com/charts/loader.js\"></script>\n<script type=\"text/javascript\">\ngoogle.charts.load('current', {packages: ['corechart', 'bar']});\ngoogle.charts.setOnLoadCallback(drawTopX);\n\nfunction drawTopX() {\nvar data = new google.visualization.DataTable();\ndata.addColumn('number', 'Commit Number');\ndata.addColumn('number', 'Lines of code');\ndata.addColumn('number', 'Comments');\n\ndata.addRows([\n[1, 40, 10],\n[2, 20, 15],\n[3, 75, 5],\n[4, 150, 40],\n[5, 60, 20],\n[6, 200, 58],\n[7, 300, 75],\n[8, 288, 80],\n[9, 250, 100],\n[10, 290, 120],\n]);\n\nvar options = {\nchart: {\ntitle: 'Title',\nsubtitle: 'Subtitle'\n},\naxes: {\nx: {\n0: {side: 'top'}\n}\n},\nhAxis: {\ntitle: 'Commits',\nviewWindow: {\nmin: [7, 30, 0],\nmax: [17, 30, 0]\n}\n},\nvAxis: {\ntitle: 'Lines of code'\n}\n};\n\nvar material = new google.charts.Bar(document.getElementById('chart_div'));\nmaterial.draw(data, options);\n}\n</script>\n</head>\n<body>\n<div id=\"chart_div\"></div>\n</body>\n</html>";




	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 


}

/**
** line graph Output to linegraph.html
**/
void Report_Generation::lineGraph() {
	ofstream outputFile("linegraph.html");
	//outputFile.open("index.html");
	string output = "<html>\n<head>\n<script type=\"text/javascript\" src=\"https://www.gstatic.com/charts/loader.js\"></script>\n<script type=\"text/javascript\">\ngoogle.charts.load('current', {'packages':['corechart']});\ngoogle.charts.setOnLoadCallback(drawChart);\n// The commits appear at the bottom first number is line 1 second is line 2\nfunction drawChart() {\nvar data = google.visualization.arrayToDataTable([\n['Commit', 'Code', 'Comments'],\n['Commit1', 50, 20],\n['Commit2', 75, 35],\n['Commit3', 150, 40],\n['Commit4', 160, 60]\n]);\n\nvar options = {\ntitle: 'Title',\ncurveType: 'function',\nlegend: { position: 'bottom' }\n};\n\nvar chart = new google.visualization.LineChart(document.getElementById('curve_chart'));\n\nchart.draw(data, options);\n}\n</script>\n</head>\n<body>\n<div id=\"curve_chart\" style=\"width: 900px; height: 500px\"></div>\n</body>\n</html>";

	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 



}
/**
** pie Chart Output to piechart.html
**/
void Report_Generation::piechart() {
	ofstream outputFile("piechart.html");
	//outputFile.open("index.html");
	string output = "<html>\n<head>\n<script type=\"text/javascript\" src=\"https://www.gstatic.com/charts/loader.js\"></script>\n<script type=\"text/javascript\">\ngoogle.charts.load('current', {'packages':['corechart']});\ngoogle.charts.setOnLoadCallback(drawChart);\nfunction drawChart() {\n	\nvar data = google.visualization.arrayToDataTable([\n['Users', 'Commits'],\n['User0', 11],\n['User1', 2],\n['User2', 2],\n['User3', 2],\n['User4', 7]\n]);\n\nvar options = {\n title: 'Title'\n};\n\nvar chart = new google.visualization.PieChart(document.getElementById('piechart'));\n\nchart.draw(data, options);\n}\n</script>\n</head>\n<body>\n<div id=\"piechart\" style=\"width: 900px; height: 500px;\"></div>\n</body>\n</html>";

	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 


}

/**
** table Output to table.html
**/
void Report_Generation::table() {
		ofstream outputFile("table.html");
	//outputFile.open("index.html");
	string output = "<html>\n<head>\n<script type=\"text/javascript\" src=\"https://www.gstatic.com/charts/loader.js\"></script>\n<script type=\"text/javascript\">\ngoogle.charts.load('current', {'packages':['table']});\ngoogle.charts.setOnLoadCallback(drawTable);\n\nfunction drawTable() {\nvar data = new google.visualization.DataTable();\ndata.addColumn('string', 'User Name');\ndata.addColumn('number', 'Lines of Code');\ndata.addColumn('number', 'Percent of Code');\ndata.addRows([\n['User1',  150, {v: 55 , f: '55%'}],\n['User2',   5, {v: 2, f: '2%'}],\n['User3', 80, {v: 30, f: '30%'}],\n['User4',   40, {v: 15,  f: '15%'}]\n]);\n\nvar table = new google.visualization.Table(document.getElementById('table_div'));\n\ntable.draw(data, {showRowNumber: true, width: '100%', height: '100%'});\n}\n</script>\n</head>\n<body>\n<div id=\"table_div\"></div>\n</body>\n</html>";

	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 



}


/**
** Tester Method
**/
int main() {

	//sample data
	vector<int> NumberOfCommit; 
	
	NumberOfCommit.push_back(5);
	
	
    vector<int> LinesOfCodes;
    
    LinesOfCodes.push_back(10);
    
    vector<int> LinesThatAreComments; 
    
    LinesThatAreComments.push_back(2);
    
    vector<int> LinesThatAreCode;
    
    LinesThatAreCode.push_back(8);
    
    vector<string> UserNames;
    UserNames.push_back("andrew");
    
    //end sample data
    
    
    //not a vector
    int NumberOfUsers; 
    NumberOfUsers = 1;



	Report_Generation report (UserNames, NumberOfUsers, NumberOfCommit, LinesOfCodes, LinesThatAreComments, LinesThatAreCode);
	cout << "executing output" << endl;
	report.areaChart();
	report.barGraph();
	report.lineGraph();
	report.piechart();
	report.table();
	cout << "done all" << endl;


	
	return 0;





}


