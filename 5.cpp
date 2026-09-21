#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char **argv)
{
	if (argc<3)
	{
		cout<<"not enough parameters"<<endl; 
		return 1;
	}
ifstream fin(argv[1]);
ofstream fout(argv[2]);
if (!fin.is_open())
{
    cout<<"not open"<<endl;
    return 2;
}
if (!fout.is_open())
{
    cout<<"not open"<<endl;
    return 3;
}
int count;
double price;
while (fin>>count>>price)
{
    double total=count*price;
    fout<<"count:"<<count<<" price:"<<price<<" total:"<<total<<endl;
}
return 0;
}
