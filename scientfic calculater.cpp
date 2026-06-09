#include <iostream>
#include <cmath>
using namespace std;
 void addtion();
 void subtraction();
void multiple();
void divsion();
void power();
void squret();
void sin();
 void cos();
int main(){
    int choice;
    do{
        cout <<"==the scienntfic calculater=="<< "1. addtion\n"<<"2. subtraction\n"<<"3. multiplr\n"<<"4. fivisoion\n"<<"5. power\n"<<"6. squret \n"<<"7. sin"<<"8. cos\n";
        cout <<" 0. if your exixt "<<endl;
        cout <<"enter th your choice"<<endl;
        cin >> choice;
        if (choice==1)
        {
            addtion();
        } else if (choice==2)
        {
            subtraction();
        }else if (choice==3)
        {
            multiple();
        }else if (choice==4)
        {
            divsion();
        }else if (choice==5)
        {
            power();
        }else if (choice==6)
        {
            squret();
        }else if (choice==7)
        {
            sin();
        }else if (choice==8)
        {
            cos();
        
    }else{
        cout <<"0. exist the claculter";
    }
    }
    while(choice != 0);
    return 0;
}
void addtion(){
    int a;
    int b;
    cout <<"enter the first number"<<endl;
    cin >> a;
    cout <<" enter your scond number"<<endl;
    cin >> b;
    cout <<"result is"<< a+b<<endl;
}void subtraction(){
    int a;
    int b;
    cout <<"enter the first number"<<endl;
    cin >> a;
    cout <<" enter your scond number"<<endl;
    cin >> b;
    cout <<"result is"<< a-b<<endl;
}void multiple(){
    int a;
    int b;
    cout <<"enter the first number"<<endl;
    cin >> a;
    cout <<" enter your scond number"<<endl;
    cin >> b;
    cout <<"result is"<< a*b<<endl;
}void divsion(){
    int a;
    int b;
    cout <<"enter the first number"<<endl;
    cin >> a;
    cout <<" enter your scond number"<<endl;
    cin >> b;
    if(b != 0){
            cout <<"result is"<< a/b<<endl;

    }else{
        cout <<"error you divide with zero"<<endl;
    }
}void power(){
    int a;
    int b;
    cout <<"enter the first number"<<endl;
    cin >> a;
    cout <<" enter your scond number"<<endl;
    cin >> b;
    
            cout <<"result is"<< pow(a,b)<<endl;
}void squret(){
    int a;
    int b;
    cout <<"enter the first number"<<endl;
    cin >> a;
    
    if(a >= 0){
            cout <<"result is"<< sqrt(a)<<endl;

    }else{
        cout <<"error "<<endl;
    }
}
  void sin(){
    int a;
    int b;
    cout <<"enter the first number"<<endl;
    cin >> a;
    
            cout <<"result is"<< sin(a)<<endl;

    
}void cos(){
    int a;
    int b;
    cout <<"enter the first number"<<endl;
    cin >> a;
            cout <<"result is"<< cos(a)<<endl;

    
    }
