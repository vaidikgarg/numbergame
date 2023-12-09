#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    cout <<"\n\t\t\tWelcome to The Number Game!"<<endl;     
    cout<<"Guess a number between 1 and 100"<<endl;

    while(true)
    {
        cout<<"\n Enter the Difficulty level: \n";
        cout<<"1 for easy!\t";
        cout<<"2 for medium!\t";
        cout<<"3 for hard!\t";
        cout<<"0 for ending the game!\n"<<endl;

        int difficultyChoice;
        cout<<"Enter the number: ";
        cin>>difficultyChoice;


    srand(time(0));
    int secretNumber = 1+(rand()%100);
    int playerChoice;

        if(difficultyChoice==1)
        {
           cout<< "\n You have 10 choices for finding the secret number between 1 and 100.";

           int choiceLeft=10;
           for(int i=1;i<=10;i++)
           {
               cout<<"\nEnter the number: ";
               cin>>playerChoice;
               if(playerChoice==secretNumber)
               {
                cout<<"Well played! YOU WON "<<playerChoice<<"is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing.."<<endl;
                cout<<"Want to play the game again!!\n\n"<<endl;
                break;
               }
               else 
               {
                    cout<<"Nope!"<< playerChoice << "is not the right number\n";

                    if(playerChoice>secretNumber)
                    {
                        cout<<"The secret number is smaller than the number you have choose"<<endl;
                    }
                    else
                    {
                        cout<<"THe secret number is greater than the  number you have choose"<<endl;
                    }
                    choiceLeft--;
                    cout<< choiceLeft <<"choices left."<<endl;
                    if(choiceLeft==0)
                    {
                        cout<<" You couldn't find the secret number, it was "<<secretNumber<< ", Tou Lose!!\n\n";
                        cout<<"Play the game again to win!!\n\n";
                    }

               }    

            }
           
       }    
       
        
    
    
         else if(difficultyChoice==2)
        {
            cout<< "\n You have 7 choices for finding the secret number between 1 and 100.";

           int choiceLeft=7;
           for(int i=1;i<=7;i++)
           {
               cout<<"\nEnter the number: ";
               cin>>playerChoice;
               if(playerChoice==secretNumber)
               {
                cout<<"Well played! YOU WON "<<playerChoice<<"is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing.."<<endl;
                cout<<"Want to play the game again!!\n\n"<<endl;
                break;
               }
               else 
               {
                    cout<<"Nope!"<< playerChoice << "is not the right number\n";

                    if(playerChoice>secretNumber)
                    {
                        cout<<"The secret number is smaller than the number you have choose"<<endl;
                    }
                    else
                    {
                        cout<<"THe secret number is greater than the  number you have choose"<<endl;
                    }
                    choiceLeft--;
                    cout<< choiceLeft <<"choices left."<<endl;
                    if(choiceLeft==0)
                    {
                        cout<<" You couldn't find the secret number, it was "<<secretNumber<< ", Tou Lose!!\n\n";
                        cout<<"Play the game again to win!!\n\n";
                    }

               }    

               }
        }
        else if(difficultyChoice==3)
        {
            cout<< "\n You have 5 choices for finding the secret number between 1 and 100.";

           int choiceLeft=5;
           for(int i=1;i<=5;i++)
           {
               cout<<"\nEnter the number: ";
               cin>>playerChoice;
               if(playerChoice==secretNumber)
               {
                cout<<"Well played! YOU WON "<<playerChoice<<"is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing.."<<endl;
                cout<<"Want to play the game again!!\n\n"<<endl;
                break;
               }
               else 
               {
                    cout<<"Nope!"<< playerChoice << "is not the right number\n";

                    if(playerChoice>secretNumber)
                    {
                        cout<<"The secret number is smaller than the number you have choose"<<endl;
                    }
                    else
                    {
                        cout<<"THe secret number is greater than the  number you have choose"<<endl;
                    }
                    choiceLeft--;
                    cout<< choiceLeft <<"choices left."<<endl;
                    if(choiceLeft==0)
                    {
                        cout<<" You couldn't find the secret number, it was "<<secretNumber<< ", Tou Lose!!\n\n";
                        cout<<"Play the game again to win!!\n\n";
                    }

               }    

               }
        }
        else if(difficultyChoice==0)
        {
            exit(0);
        }
        else
        {
            cout<< "Wrong choice, Enter valid choice to play the game! (0,1,2)";


        }
    }

    return 0;

    
}


