#include <iostream>
#include <string>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <ctime>
#include <unordered_map>
#include <unordered_set>
using namespace std;
//===== structure====
struct Product{
    int productId;
    string name;
    string category;
};
struct Order{
  int   orderId;
  int productId;
  string customerId;
  int quantity;
  time_t orderDate;

};
int main(){// main function
// order list
vector<Product> products={
    {101, "Computer", "Machine"},
    {102, "Laptop", "Machine"},
    {103, "Watach", "Electronics divice"},
    {104, "Smarphone", "Electronics"},
    {105, "Mobile cover", "palastic sheet"}

};


// product stock
map<int, int> productStock ={
{101, 10},
{102, 50},
{103, 20},
{104, 5},
{105, 30}

};// store order history when order are place
list<Order> orderHistry;
 int orderCounter=1;

// unique category
set<string> uniqueCategory;
for(const auto &product: products){
    uniqueCategory.insert(product.category);
}
int choice;
do{
    cout <<"======= Online Store Menu======"<<endl;
    cout <<"1... View Products             "<<endl;
    cout <<"2... View Products stock       "<<endl;
    cout <<"3... Palce order               "<<endl;
    cout <<"4... View Order history        "<<endl;
    cout <<"5... View category             "<<endl;
    cout <<"6... Exit                      "<<endl;
    cout <<"Enter you choice               "<<endl;
    cin >> choice;
    switch(choice){
        case 1:
        cout <<"=== Product list===="<<endl;
        for(const auto &product:products){
             cout <<"Product id:   "<< product.productId<<endl;
             cout<<"Product name:  "<<product.name<<endl;
             cout <<" Category:    "<< product.category<<endl;

        }
        break;
        case 2:
        cout <<"==== Products stocks:  "<<endl;
        for(const auto &stock: productStock){
            cout <<"Product Id:  "<<stock.first<<endl;
            cout <<" Stock   :   "<<stock.second<<endl;
        }
        break;
        case 3:{
        int pId;
        string cId;
        
        int qynt;
        cout <<"Please the enter the product id:"<<endl;
        cin >>pId;
        cout <<"Please enter the customer id:"<<endl;
        cin >>cId;
        cout<<"Please enter the quantity:"<<endl;
        cin >>qynt;
        if(productStock[pId]>qynt){ // check stock are awailable customer demand
            productStock[pId]-=qynt;
            // update the order history after palce the oreder
            orderHistry.push_back({orderCounter++, pId, cId, qynt, time(0)});
            cout <<"Order place Successfully :"<<endl;

        }else{
            cout <<"Not enough stock:"<<endl;
        }
        break;
    }
    case 4:
    cout <<"== Order History==="<<endl;
     for(const auto &order:orderHistry){
        cout <<"product id :"<<order.productId<<endl;
        cout<<" customer id:"<< order.customerId<<endl;
        cout<<" order id:"<< order.orderId<<endl;
        cout <<"quantity :"<< order.quantity<<endl;
     }
     break;
     case 5:
     cout <<" === category===="<<endl;
     for(const auto &C:uniqueCategory){
        cout <<"category :"<<C<<endl;
     }
     break;
     case 6:
     cout <<"Exit the programe:"<<endl;
     break;
     default:
     cout <<"Invalid choise Try again :"<<endl;

    }
}
while(choice != 6);
return 0;
}