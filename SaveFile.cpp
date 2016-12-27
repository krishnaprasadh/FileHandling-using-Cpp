#include <iostream>
#include <fstream>

using namespace std;

int main()
{
ofstream outputFile;
outputFile.open("source.txt");

char data[1000];

cout << "Enter the data: ";
gets(data);
outputFile << data << endl;
outputFile.close();
cout << "Done!\n";

return 0;
}
