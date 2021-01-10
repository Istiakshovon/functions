#include <iostream>

using namespace std;

void sayHi(string name){
    cout << "Hello "+name;
}

string dayNum(int dayNum){
    string dayName;
    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            cout << "Invalid number";
        
    }
    return dayName;
    
}
int main(int argc, char**argv) {
    
    int luckyNums[] = {45,2,5,2,2,2,52};
    
    cout << luckyNums[0]<<endl;
    
    sayHi("John");
    
    cout << dayNum(0);
    
    int i = 0;
    
    while(i<=5){
       cout << i<<endl; 
       i++;
    }
    
    do{
        cout << i<<endl;
        i++;
    }while(i<=5);
    
    
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    while(guess!=secretNum && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Guess a number : ";
            cin >> guess;
                guessCount++;
        }else{
            outOfGuesses = true;
        }
    }
    if(outOfGuesses){
        cout << "Lose!";
    }else{
        cout << "Won!";
    }
    
    for(int i=0; i<=5; i++){
        cout << i<<endl;
    }
    
    
    
    return 0;
}
