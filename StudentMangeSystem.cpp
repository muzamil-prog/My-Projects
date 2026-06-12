#include <iostream>
#include <string>
#include <vector>
using namespace std;
class student{
    private:
    int rollNo;
    int age;
   string name;
public:// create a parameterized  constructer  which  allcate the memory 
student(int rollNo, int age, string name){
    this->rollNo=rollNo;
    this->name=name;
    this->age=age;
}
      //setter fucntion
    void setRollNo( int rollNo){
        this->rollNo=rollNo;

    }// getter function
    int getRollNo(){
        return rollNo;
    }
    void setAge(int age){
        this->age=age;

    }
    int getAge(){
        return age;

    }
    void setName(string name){
        this->name=name;

    }
    string getName(){
        return name;
    }
    void displayStudent(){
        cout <<"Name: "<<name<<endl;
        cout <<"Age: "<<age<<endl;
        cout <<"Roll No: "<<rollNo<<endl;
    }

};
   // A function that add new student which pass a vestor parameter by refernece becuse never make copy
    void addNewStudent(vector<student> &students){ 
    int rollNo;
    int age;
    string name;
    // check if student already exist
    for(int i=0; i<students.size(); i++){

    if(students[i].getRollNo()==rollNo){

    cout <<"student is already existed:"<<endl;
    return;
    
    }

}

    cout <<"enter the roll no" <<endl;
    cin >>rollNo;
    cout <<"enter the age"<<endl;
    cin >>age;
    cout <<"enter the name"<<endl;
    cin >> name;
    student newStudent(rollNo, age, name); // create the object of class and store data in vector
    students.push_back(newStudent);
    cout <<"\t\tStudent add successfully:"<<endl;
    }
    
    void displayAllStudent(vector<student> &students){
    
    if(students.empty()){
        cout <<"Students not found:"<<endl;

    }
    for(int i=0; i<students.size(); i++){
        students[i].displayStudent();
        cout <<endl;
    }




    }

int main(){
    vector<student> students; // create vector object of class student
    students.push_back(student(1,20, "Muzammil"));// add the student in vector 
    char option;
    do{
        system("cls");
    int choice;
    cout <<"\t\t.........................."<<endl;
    cout <<"\t\tStudent Management System"<<endl;
    cout <<"\t\t.........................."<<endl;
    cout <<"\t\t1.  Add  the students "<<endl;
    cout <<"\t\t2.  Dispaly all students "<<endl;
    cout <<"\t\t3. Search students "<<endl;
    cout <<"\t\t4. Update students "<<endl;
    cout <<"\t\t5. delete students "<<endl;
    cout <<"\t\t6. exit"<<endl;
    cout <<"\t\tEnter your choice :"<<endl;
    cin >>choice;
    switch(choice){
        case 1:

     addNewStudent(students);
     break;
     case 2:
     displayAllStudent(students);
    }   
    cout <<"If you continue to add students then slect option Y for yes and N for No"<<endl;
    cin>>option;
}
while(option=='Y' || option=='Y');

}