#include<iostream>
using namespace std;
int main () {
    int num;
    cout<<"Enter numbers of product: ";
    cin>>num;
    string products[num];
    float prices[num];
    int quantity[num];
    for(int i=0; i<num; i++){
        cout<<"Enter name of product "<<i + 1<<": ";
        cin>>products[i];
        cout<<"Enter price of "<<products[i]<<": $";
        cin>>prices[i];
        cout<<"Enter quantity of "<<products[i]<<": ";
        cin>>quantity[i];
        cout<<endl;
    }
    cout<<"Product Inventory Report"<<endl;
    cout<<"-----------------------"<<endl;
    for(int i=0; i<num; i++){
       cout<<products[i]<<": $"<<prices[i]<<".00, "<<quantity[i]<<" in stock, Total value: $"<<prices[i]*quantity[i]<<".00"<<endl;
    }
    return 0;
}