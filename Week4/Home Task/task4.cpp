#include<iostream>  
using namespace std;
main () {
    float red=2.00;
    float white=4.10;
    float tulips=2.50;
    float price;
    int red_rose,white_rose,tulip;
    cout<<"Red Rose: ";
    cin>>red_rose;
    cout<<"White Rose: ";
    cin>>white_rose;
    cout<<"Tulips: ";
    cin>>tulip;
    price=(red*red_rose)+(white*white_rose)+(tulip*tulips);
    cout<<"Original Price: "<<price<<endl;
    if(price > 200){
        float dis_price=price*0.20;
        float dis_total=price-dis_price;
        cout<<"Price After Discount: "<<dis_total;

    }
    else {
        cout<<"Program Ends.";
    }
    
}