#include<stdio.h>
#include<fstream>
using namespace std;

void codeASCII(char kytu) 
{
    printf("%d",kytu);
}

int main(int argc, char **argv)
{
	ifstream ifs;
	ifs.open(argv[1], ifstream::in);
	
	char c;
	ifs >> c;
	ifs.close();

	codeASCII('A');

	return 0;
}