#include<iostream>
using namespace std;

void English(int number){
    if(number == 1){
        cout<<"One";
    }
    else if(number == 2){
        cout<<"Two";
    }
    else if(number == 3){
        cout<<"Three";
    }
    else if(number == 4){
        cout<<"Four";
    }
    else if(number == 5){
        cout<<"Five";
    }
    else if(number == 6){
        cout<<"Six";
    }
    else if(number == 7){
        cout<<"Seven";
    }
    else if(number == 8){
        cout<<"Eight";
    }
    else if(number == 9){
        cout<<"Nine";
    }
    else if(number == 10){
        cout<<"Ten";
    }
    else if(number == 11){
        cout<<"Eleven";
    }
    else if(number == 12){
        cout<<"Twelve";
    }
    else if(number == 13){
        cout<<"Thirteen";
    }
    else if(number == 14){
        cout<<"Fourteen";
    }
    else if(number == 15){
        cout<<"Fifteen";
    }
    else if(number == 16){
        cout<<"Sixteen";
    }
    else if(number == 17){
        cout<<"Seventeen";
    }
    else if(number == 18){
        cout<<"Eighteen";
    }
    else if(number == 19){
        cout<<"Nineteen";
    }
    else if(number == 20){
        cout<<"Twenty";
    }
    else if(number == 30){
        cout<<"Thirty";
    }
    else if(number == 40){
        cout<<"Forty";
    }
    else if(number == 50){
        cout<<"Fifty";
    }
    else if(number == 60){
        cout<<"Sixty";
    }
    else if(number == 70){
        cout<<"Seventy";
    }
    else if(number == 80){
        cout<<"Eighty";
    }
    else if(number == 90){
        cout<<"Ninety";
    }
    else if(number > 20 && number < 30){
        cout<<"Twenty ";
        English(number - 20);
    }
    else if(number > 30 && number < 40){
        cout<<"Thirty ";
        English(number - 30);
    }
    else if(number > 40 && number < 50){
        cout<<"Forty ";
        English(number - 40);
    }
    else if(number > 50 && number < 60){
        cout<<"Fifty ";
        English(number - 50);
    }
    else if(number > 60 && number < 70){
        cout<<"Sixty ";
        English(number - 60);
    }
    else if(number > 70 && number < 80){
        cout<<"Seventy ";
        English(number - 70);
    }
    else if(number > 80 && number < 90){
        cout<<"Eighty ";
        English(number - 80);
    }
    else if(number > 90 && number < 100){
        cout<<"Ninety ";
        English(number - 90);
    }
}

int main (){
    int number;
    cout<<"Enter a number(1-99): ";
    cin>>number;
    English(number);
    return 0;
}