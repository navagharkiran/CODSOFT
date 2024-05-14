#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int num1,num2,num3,guess,attempts,nguess;
    static int tguess=1;
    char choice;
    srand(time(0));
    num1 = rand()%30 +1;
    num2 = rand()%50 +1;
    num3 = rand()%100 +1;
    // cout<<"This System has Generated Random number "<<num1<<endl;
    while(1){
    printf("Your in Level 1 continue the game\n");
    attempts=10;
    nguess=1;
    do{
        
        
        if(attempts==0)
        {
            cout<<"Game Over Thanks for Playing\n";
            
            cout<<"Do You want to play again (Yes(y)/No(n)) \n";
            cin>>choice;
            if(choice=='y'||choice=='Y')
            {
                main();
            }
            else if(choice == 'n'|| choice =='N')
            {
                cout<<"Game Exitted Successfully";
                return 0;
            }
        }
        
        cout<<"Enter the Number to guess the Number 1-30 \n";
        cin>>guess;
        attempts--;
        if(guess>num1)
        {
            cout<<"Guess much Lower Number \n";
            cout<<"Attempts Left : "<<attempts<<endl;
        }
        else if(guess<num1)
        {
            cout<<"Guess much Higher Number\n";
            cout<<"Attempts Left : "<<attempts<<endl;
        }
        else
        {
            cout<<"In Level 1 You have successfully Guessed Number in "<<nguess<<" Attempt(s)\n";
        }
        
        nguess++;
        tguess++;
        
    }while(guess!=num1);
    printf("Your in Level 2 continue the game\n");
    attempts=10;
    nguess=1;
     do{
        
        
        if(attempts==0)
        {
            cout<<"Game Over Thanks for Playing\n";
            
            cout<<"Do You want to play again (Yes(y)/No(n)) \n";
            cin>>choice;
            if(choice=='y'||choice=='Y')
            {
                main();
            }
            else if(choice == 'n'|| choice =='N')
            {
                cout<<"Game Exitted Successfully";
                return 0;
            }
        }
        cout<<"Enter the Number to guess the Number 1-50 \n";
        cin>>guess;
        attempts--;
        if(guess>num2)
        {
            cout<<"Guess much Lower Number \n";
            cout<<"Attempts Left : "<<attempts<<endl;
        }
        else if(guess<num2)
        {
            cout<<"Guess much Higher Number\n";
            cout<<"Attempts Left : "<<attempts<<endl;
        }
        else
        {
            cout<<"In Level 2 You have successfully Guessed Number in "<<nguess<<" Attempt(s)\n";
        }
        tguess++;
        nguess++;
         
    }while(guess!=num2);
    printf("Your in Level 3(final level) continue the game\n");
    attempts=10;
    nguess=1;
    do{
        
        
        if(attempts==0)
        {
            cout<<"Game Over Thanks for Playing\n";
            
            cout<<"Do You want to play again (Yes(y)/No(n)) \n";
            cin>>choice;
            if(choice=='y'||choice=='Y')
            {
                main();
            }
            else if(choice == 'n'|| choice =='N')
            {
                cout<<"Game Exitted Successfully";
                return 0;
            }
        }
        
        cout<<"Enter the Number to guess the Number 1-100 \n";
        cin>>guess;
        attempts--;
        if(guess>num3)
        {
            cout<<"Guess much Lower Number \n";
            cout<<"Attempts Left : "<<attempts<<endl;
        }
        else if(guess<num3)
        {
            cout<<"Guess much Higher Number\n";
            cout<<"Attempts Left : "<<attempts<<endl;
        }
        else
        {
            cout<<"In Level 3 You have successfully Guessed Number in "<<nguess<<" Attempt(s)\n";
        }
        
        nguess++;
        tguess++;
        
    }while(guess!=num3);
    
        
            cout<<"You Won The Game Thanks for Playing\n";
            cout<<"Total Guesses Made in Game : "<<tguess-1<<endl;
            tguess=0;
            cout<<"Do You want to play again (Yes(y)/No(n)) \n";

            cin>>choice;
            if(choice=='y'||choice=='Y')
            {
                main();
            }
            else if(choice == 'n'|| choice =='N')
            {
                cout<<"Game Exitted Successfully";
                return 0;
            }
    
    return 0;
    }
}
