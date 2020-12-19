/* JOSHUA JOSEPH
 CSA 43*/
#include<iostream>
#include<cmath>
using namespace std;
class triangle
{    private:
	    float ar,s;
		int a,b,c;
	public:
		void checkvalid();
		void display();
		void area();
}obj1;
void triangle::checkvalid()
{	
      if((a+b>c)&&(a+c>b)&&(b+c>a))
      {
      cout<<"VALID\n";
      obj1.area();
      }
      else
      cout<<"NOT VALID\n";
}
void triangle::display()
{
	cout<<"Enter the sides of the triangle\n";
	cin>>a>>b>>c;
	cout<<"The sides of triangle are "<<a<<","<<b<<","<<c<<"\n";
	obj1.checkvalid();
}
void triangle::area()
{ 	
 s=(a+b+c)/2;
 ar=sqrt(s*(s-a)*(s-b)*(s-c));
 cout<<"The area of the triangle is "<<ar<<"\n";	
}
int main()
{ 
	obj1.display();
	return(0);	
}


/* SAMPLE OUTPUT
 
 Enter the sides of the triangle
 4
 5

 6
 The sides of triangle are 4,5,6
 VALID
 The area of the triangle is 6.48074
 joshua@Joshuas-Air c++ % ./a.out
 Enter the sides of the triangle
 1
 9
 6
 The sides of triangle are 1,9,6
 NOT VALID
 
 */
