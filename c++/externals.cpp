#include<iostream>
#include <fstream>
#include <ctime>
#include <unistd.h>
using namespace std;

struct details{
	string name;
	int age;
	long int dob, aadhar_number;

};

string gen_random(const int len) {
    
    string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    
    srand( (unsigned) time(NULL) * getpid());

    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    
    
    return tmp_s;
    
}


int main(){
	int b;
	details a;
	cout << "Welcome to Vaccination Booking Portal \n";
	cout << "Please enter your details: \n";
	cout << "Name: ";
	cin >> a.name;
	cout << "\n Age: ";
	cin >> a.name;
	cout << "\n DOB(in ddmmyyyy format): ";
	cin >> a.dob;
	cout << "\n Aadhar Number: ";
	cin >> a.aadhar_number;
	cout << "\n Checking for availabilty of slots ................ \n ";

	fstream my_file;
	my_file.open("my_file.txt", ios::in);
	if (!my_file) {
		cout << "Not able to check";
	}
	else {
		

		while (1) {
			my_file >> b;
			if (my_file.eof())
				break;

			
		}

	}
	my_file.close();

	if (b>0){
		cout << "\n Vaccine slot available. \n";
		cout << "Your unique token is : ";
		cout << gen_random(16) << endl;
	}else{
		cout << "\n Sorry. Vaccine slot not available. Check back later \n ";

	}
	b=b-1;	

	fstream mine_file;
	mine_file.open("my_file.txt", ios::out);
	if (!my_file) {
		cout << "Error 404";
	}
	else {
		cout << "Updation successfull";
		mine_file << b;
		mine_file.close();
	}

	return 0;

}