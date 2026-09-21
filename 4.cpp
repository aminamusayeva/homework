#include <iostream>
using namespace std;
class Product {
	int count;
	double price;
    public:
    void set_count(int num);
    int get_count();
    void set_price(double num);
    double get_price();
};
void Product::set_count(int num) 
{
	 count=num; 
}
int Product::get_count() 
{ 
	return count; 
}
void Product::set_price(double num) 
{
	 price=num; 
}
double Product::get_price() 
{
	 return price; 
}
int main(void) 
{
 Product ob1,ob2;
 ob1.set_count(10);
 ob1.set_price(150.5);

 ob2.set_count(5);
 ob2.set_price(300.0);
 cout<<"product 1: count="<<ob1.get_count()<<",price="<<ob1.get_price()<<endl;
 cout<<"product 2: count="<<ob2.get_count()<<",price="<<ob2.get_price()<<endl;
 return 0;
}
