#include<iostream>
#include<string>
using namespace std;


/** Object Oriented Programming is a paradigm that uses objects to design and develop applications.
Object is an instance of a clss. A class is a package or container with relevant functions and attributes.
OOP enhances the maintainability and reusability of the codebase **/


//simple class
class Person{
public:
	string name;
	int phoneNumber;

	void Speak(){
		cout << "Hello i am " << name << " how are you ? " << endl;
	}

};

//Acces Specifiers
class Phone{
private:  // private means these functions or attributes cannot be accesed outside the class only be accessed in the class scope. 
	string imei;
	int phoneNumber;

protected: // protected means these functions or attributes cannot be accesed outside the class but can be accessed int the child classes of the base class this is used in inheritence.
	int memory;

public:  // public means these functions or attributes can be accesed outside the class using the access operator  .   

	void imeiNumber(){
		cout << "IMEI : " << imei << endl;
	}



};

//




int main(){

	Person p;
	p.name = "umar";
	p.phoneNumber = 00003333333;

	p.Speak();


	return 0;

}