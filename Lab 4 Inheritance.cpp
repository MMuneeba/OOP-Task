//Single Inheritance

//#include<iostream>
//using namespace std;
//
//class Person{
//	public:
//	string name;
//	int    age;
//	
//
//	void display_personInfo(){
//	
//	cout<<"Name : "<<name<<endl;
//	cout<<"Age  : "<<age <<endl;
//}
//};
//
//class Student:public Person{
//	public:
//	
//	int student_id;
//
//	void display_student_id(){
//	display_personInfo();
//	cout<<"ID : "<<student_id;
//}
//	
//};
//
//
//int main(){
//	Student s1;
//	s1.name="Muneeba";
//	s1.age=18;
//	s1.student_id=06;
//    s1.display_student_id();
//
//}

//Program 2
// Multilevel Inheritance
//#include<iostream>
//using namespace std;
//
//
//class Person{
//    public:
//    string name;
//    int age;
//
//
//
//    void display_person(){
//        cout<<"Name : "<<name<<endl;
//        cout<<"Age  : "<<age<<endl;
//    }
//};
//
//class Employee: public Person{
//    public:
//     string employee_id;
//
//
//
//     void display_employee(){
//        display_person();
//        cout<<"Employee Id : "<<employee_id<<endl;
//
//     }
//};
//
//class Manager:public Employee{
//    public: 
//     string department;
//
//
//     void display_manager(){
//        display_employee();
//        cout<<"Department : "<<department<<endl;
//     }
//
//};
//
//
//
//int main(){
//    Manager m1;
//    m1.name ="Muneeba";
//    m1.age = 18;
//    m1.employee_id= "123b";
//    m1.department= "Software Engineering";
//    m1.display_manager();
//}
//
////Program 3
////Hirarchical Inheritance
//#include<iostream>
//using namespace std;
//  
//  class Employee{
//  	public:
//  		string name;
//  		double salary;
//  		
//  		
//  	void displayEmployee(){
//  		cout<<"Name                : "<<name<<endl;
//  		cout<<"Salary              : "<<salary<<endl;
//	  }
//  };
//  
//  
//  
//  class Developer:virtual public Employee{
//  	public:
//  		string programming_language;
//  		
//  		
//  	void display_developer(){
//  		displayEmployee();
//  		cout<<"Language            : "<<programming_language<<endl;
//	  }
//  };
//  
//  
//  class Designer: virtual public Employee{
//  	public:
//  		string design_tool;
//  		
//  		
//  	void display_designer(){
//  		displayEmployee();
//  		cout<<"Tool                : "<<design_tool<<endl;
//	  }
//  };
//  
//  
//  int main(){
//  	Designer d1;
//  	d1.name="Ahmed";
//  	d1.salary=35000;
//  	d1.design_tool= "Alastrator";
//  	d1.display_designer();
//  	
//  	cout<<"\n\n\n";
//  	
//  	Developer d2;
//  	d2.name="deen";
//  	d2.salary=55000;
//  	d2.programming_language="C++, Java, Python, HTML, CSS, PHP";
//  	d2.display_developer();
//  }
  //Program 4
  //Multiple Inheritance
  
  #include<iostream>
using namespace std;

class Printer{
	public:
		
	void print_document(){
		cout<<"Document is printed "<<endl;
	}	
	
};

class Scanner{
	public:  
	
	void scan_document(){
		cout<<"Document is scaned "<<endl;
	}
	
};


class Photocopier: public Printer, public Scanner{
	public: 
	
	void photocopy(){
		print_document();
		scan_document();
	}
};


int main(){
	Photocopier f;
	f.photocopy();
	return 0;
}
	
	
	
	
