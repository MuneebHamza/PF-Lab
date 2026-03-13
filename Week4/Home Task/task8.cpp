#include<iostream>
using namespace std;
main () {
    int number;
    cin>>number;
    if(number==0){
        cout<<"Zero";
    }
    else if(number==1){
        cout<<"One";
    }
    else if(number==2){
        cout<<"Two";
    }
    else if(number==3){
        cout<<"Three";
    }
    else if(number==4){
        cout<<"Four";
    }
    else if(number==5){
        cout<<"Five";
    }
    else if(number==6){
        cout<<"Six";
    }
    else if(number==7){
        cout<<"Seven";
    }
    else if(number==8){
        cout<<"Eight";
    }
    else if(number==9){
        cout<<"Nine";
    }
    else if(number==10){
        cout<<"Ten";
    }
    else if(number==11){
        cout<<"Eleven";
    }
    else if(number==12){
        cout<<"Twelve";
    }
    else if(number==13){
        cout<<"Thirteen";
    }
    else if(number==14){
        cout<<"Fourteen";
    }
    else if(number==15){
        cout<<"Fifteen";
    }
    else if(number==16){
        cout<<"Sixteen";
    }
    else if(number==17){
        cout<<"Seventeen";
    }
    else if(number==18){
        cout<<"Eighteen";
    }
    else if(number==19){
        cout<<"Nineteen";
    }
    else if(number==20){
        cout<<"Twenty";
    }
    else if(number==30){
        cout<<"Thirty";
    }
    else if(number==40){
        cout<<"Forty";
    }
    else if(number==50){
        cout<<"Fifty";
    }
    else if(number==60){
        cout<<"Sixty";
    }
    else if(number==70){
        cout<<"Seventy";
    }
    else if(number==80){
        cout<<"Eighty";
    }
    else if(number==90){
        cout<<"Ninety";
    }
    else if(number==100){
        cout<<"One Hundered";
    }
    else if(number==1000){
        cout<<"One Thousand";
    }
    else{
        int hundreds=number/100;

        int tens=(number%100)/10;
        int ones=number%10;
        int special =number%100;

         if(hundreds==1){
            cout<<"One Hundered";
        }
        else if(hundreds==2){
            cout<<"Two Hundered";
        }
        else if(hundreds==3){
            cout<<"Three Hundered";
        }
        else if(hundreds==4){
            cout<<"Four Hundered";
        }
        else if(hundreds==5){
            cout<<"Five Hundered";
        }
        else if(hundreds==6){
            cout<<"Six Hundered";
        }
        else if(hundreds==7){
            cout<<"Seven Hundered";
        }
        else if(hundreds==8){
            cout<<"Eight Hundered";
        }
        else if(hundreds==9){
            cout<<"Nine Hundered";
        }
        if(special>=10 && special<=19){
            if(special==10){
                cout<<"Ten";
            }
            else if(special==11){
                cout<<"Eleven";
            }
            else if(special==12){
                cout<<"Twelve";
            }
            else if(special==13){
                cout<<"Thirteen";
            }
            else if(special==14){
                cout<<"Fourteen";
            }
            else if(special==15){
                cout<<"Fifteen";
            }
            else if(special==16){
                cout<<"Sixteen";
            }
            else if(special==17){
                cout<<"Seventeen";
            }
            else if(special==18){
                cout<<"Eighteen";
            }
            else if(special==19){
                cout<<"Nineteen";
            }
        }
      

        else if(tens==2){
            cout<<"Twenty";
        }
        else if(tens==3){
            cout<<"Thirty";
        }
        else if(tens==4){
            cout<<"Forty";
        }
        else if(tens==5){
            cout<<"Fifty";
        }
        else if(tens==6){
            cout<<"Sixty";
        }
        else if(tens==7){
            cout<<"Seventy";
        }
        else if(tens==8){
            cout<<"Eighty";
        }
        else if(tens==9){
            cout<<"Ninety";
        }
          if(special<10 || special>19){
        if(ones==1){
            cout<<"One";
        }
        else if(ones==2){
            cout<<"Two";
        }
        else if(ones==3){
            cout<<"Three";
        }
        else if(ones==4){
            cout<<"Four";
        }
        else if(ones==5){
            cout<<"Five";
        }
        else if(ones==6){
            cout<<"Six";
        }
        else if(ones==7){
            cout<<"Seven";
        }
        else if(ones==8){
            cout<<"Eight";
        }
        else if(ones==9){
            cout<<"Nine";
        }
    }
       
    
}
    
}