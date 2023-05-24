//Definitions of Constructor and Destructor inside class definition
#include <iostream>

using namespace std;

class Example{
	public:
		//default constructor
		Example(){cout<<"Constructor called."<<endl;}
		//function to print message
		void display(){
			cout<<"display function called."<<endl;
		}
		//Destructor 
		~Example(){cout<<"Destructor  called."<<endl;}
};

int main(){
	//object creation
	Example objE;
	
	objE.display();
	
	return 0;
}

// Definitions of Constructor and Destructor outside class definition

#include <iostream>

using namespace std;

class Example{
	public:
		//default constructor
		Example();
		//function to print message
		void display();
		//Destructor 
		~Example();
};

//function definitions
Example::Example(){
	cout<<"Constructor called."<<endl;	
}

void Example::display(){
	cout<<"display function called."<<endl;	
}

Example::~Example(){
	cout<<"Destructor  called."<<endl;	
}

int main(){
	//object creation
	Example objE;
	
	objE.display();
	
	return 0;
}