#include<iostream>
using namespace std;

 string type(char symbol){
    if(symbol=='M'){
        return "Motorcycle";
    }
    else if(symbol=='E'){
        return "Electric";
    }
    else if(symbol=='S'){
        return "Sedan";
    }
    else if(symbol=='V'){
        return "Van";
    }
    else if(symbol=='T'){
        return "Truck";
    }
 }

 void tax(char symbol, float price){
    float taxamout;
    if(symbol=='M'){
        taxamout=price*0.06;
        float addedtax=price+taxamout;
        cout<<"The final price on a vehicle of type "<<type(symbol)<<" after adding the tax is $"<<addedtax<<endl;
    }
    else if(symbol=='E'){
        taxamout=price*0.08;
        float addedtax=price+taxamout;
        cout<<"The final price on a vehicle of type "<<type(symbol)<<" after adding the tax is $"<<addedtax<<endl;
    }
    else if(symbol=='S'){
        taxamout=price*0.10;
        float addedtax=price+taxamout;
        cout<<"The final price on a vehicle of type "<<type(symbol)<<" after adding the tax is $"<<addedtax<<endl;
    }
    else if(symbol=='V'){
        taxamout=price*0.12;
        float addedtax=price+taxamout;
        cout<<"The final price on a vehicle of type "<<type(symbol)<<" after adding the tax is $"<<addedtax<<endl;
    }
    else if(symbol=='T'){
        taxamout=price*0.15;
        float addedtax=price+taxamout;
        cout<<"The final price on a vehicle of type "<<type(symbol)<<" after adding the tax is $"<<addedtax<<endl;
    }
 }

int main () {
    char symbol;
    cout<<"Enter Vehicle Type Code (M,E,S,V,T): ";
    cin>>symbol;
    float price;
    cout<<"Enter Vehicle price: ";
    cin>>price;
    string vehicleType = type(symbol);
    tax(symbol, price);
    return 0;
}