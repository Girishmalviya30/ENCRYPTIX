#include<bits/stdc++.h>
using namespace std;

int main(){
    //initialize random
    srand(static_cast<unsigned int>(time(nullptr)));

    //generates random number between 1 to 100
    int number = rand() % 100 + 1;
    int attempts = 0;
    int guessnum;

    cout<<"WELCOME TO THE NUMBER GUESSING GAME!"<<endl;
    cout<<"i have selected a number between 1 and 100 !"<<endl;
    cout<<"can you guess what is it"<<endl;

    do{
        cout<<"enter your guess"<<endl;
        cin>>guessnum;
        attempts++;

        if(guessnum > number){
            cout<<"! too high, try again"<<endl;
        }
        else if(guessnum < number){
            cout<<"! too low, try again"<<endl;
        }
        else {
            cout<<"Congrats you guessed the number in"<<" "<<attempts<<" "<<"attempts"<<endl;
        }
    }while(guessnum!=number);
    return 0;
    

}