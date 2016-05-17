#include<iostream>
#include<fstream>
#include<time.h>

using namespace std;
int main() {
	std::ifstream fin("123.txt");
	std::ofstream fout("456.txt");
	int a,b;
	while (fin >> a >> b)fout << a + b<<endl;
	cout << (double)clock() / CLOCKS_PER_SEC;
	system("pause");
	return 0;
}