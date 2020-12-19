/* JOSHUA JOSEPH
 CSA 43 */

#include <iostream>
using namespace std;
struct phone
{
	int area_code,exchange,number;
};
int main()
{
	phone a,b;
	a.area_code=212;
	a.exchange=767;
	a.number=8900;
	cout<<"Enter your areacode,exchange, and number ";
	cin>>b.area_code>>b.exchange>>b.number;
	cout<<"My number is ("<<a.area_code<<") "<<a.exchange<<"-"<<a.number<<"\n";
	cout<<"Your number is ("<<b.area_code<<") "<<b.exchange<<"-"<<b.number<<"\n";
	return 0;	
}

/* SAMPLE OUTPUT
 Enter your areacode,exchange, and number 415
 555
 1212
 My number is (212) 767-8900
 Your number is (415) 555-1212
 */
