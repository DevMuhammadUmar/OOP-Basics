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

	//Constructors

	//default
	Person(){
		phoneNumber = 0;
	}

	//Overloaded Constructor
	Person(string name, int phoneNumber){

		this->name = name;
		this->phoneNumber = phoneNumber;

	}

	//setters and getters
	void setName(string name){
		this->name = name;
	}
	void setPhoneNumber(int phoneNumber){
		this->phoneNumber = phoneNumber;
	}

	string getName(){
		return name;
	}

	int getPhoneNumber(){
		return phoneNumber;
	}

	//Destructor

	~Person(){

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

// Relations in OOP 

/* Inheritence
Is-A Relationship
A class derives from another class, inheriting its members.

Types:
Single inheritance: One base class → one derived class

Multiple inheritance: A class inherits from multiple base classes

Multilevel inheritance: Chain of inheritance (A → B → C)

Hierarchical inheritance: Multiple classes inherit from one base class

Hybrid inheritance: Combination of multiple and multilevel

*/

class Animal { 
	//base class 
};

class Dog : public Animal {
	// this class will inherit the functionality of the parent class
};
class Cat : public Animal{
	//hierarchical inheritence as bot Dog and Cat inherit from Animal
};

class GermanSephered : public Dog{

	// this is multi level inheritence as it inherits from Dog and Dog inherits Animal
};

/*Composition
Has-A Relationship
A class contains objects of other classes as members (strong ownership).
The contained object's lifetime is tied to the container
Strong relationship the part cannot exist without the whole */

class Engine { /* Engine class */ };

class Car {

	Engine engine; 

};


/*Aggregation
Weaker Has - A Relationship
A class contains references / pointers to other objects(weak ownership).
The contained object can exist independently
Weaker relationship than composition */

class Professor { /* Professor class */ };

class Department {
	Professor* prof;  
};



int main(){

	Person p;
	p.name = "umar";
	p.phoneNumber = 00003333333;

	p.Speak();


	return 0;

}