#include <fstream>
#include <iostream>
using namespace std;

int main() {
	
	ofstream outputFile("index.html");
	//outputFile.open("index.html");
	string output = "<HTML>\n <HEAD>\n <title>Test HTML PAGE</title></head>\n<body>\n <h1>Testing output HTML file</h1></body></HTML>";
	outputFile << output;
	
	outputFile.close();


	cout << output << endl;
	
	cout << "Done"; 





	return 0;
}
