

// hey guys its Brian, I went ahead and edit/change a few things, if you are viewing this feel free to edit and work with what I currently have. I will update my current code more in the future, so please save any changes you made to this program on your behalf.


/* This Program is to help users select their gym membership as well as any addidtional training they would like to add to it .
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <array>
using namespace std;
void introduction(string firstName, string lastName);
void sum(double cardio, double yoga, double weightTraining, double zumba,double personalTrainer);

int main() {
 string firstName,lastName,cardio,yoga,weightTraining,zumba,personalTrainer, category;
 char answer, addQ;
 int choice;
 double monthly = 19.99;
 
 const int RATES = 5 ;
 
 double classes[RATES] = {4.99, 5.50, 6.50, 7.00, 10.00};

introduction(firstName, lastName); //made a function for the introductory name.


cout << "\nThe Monthly Rate for this gym is $"<<monthly<<endl;
cout << "Would you like to sign up for a Gym membership? (Y/N) \n";
cin>>answer;

if (answer == 'Y'|| answer == 'y')
{
  cout<<"That's Perfect lets sign you up! \n";
  cout<< "Would you like to sign up for any additional programs? (Y/N) "<<endl;
  cin>> addQ;
}
else
{
  cout << "Thank you so much for your time!";
}
  if (addQ == 'y'|| addQ == 'Y')
  {
  cout<<"Here are the additional training programs you can sign yourself up for"<<endl;
   

  /*cout<< "Would you like sign up for any of these? (Y/N) ";
  cin >> addQ;*/
  
        do
       {
         cout<< " \n 1.Cardio\n 2.Yoga\n 3.Weight Training\n 4.Zumba\n 5.Personal Trainer\n\n";
         cout << "\nPlease type the numerical value of the program listed\n";
         cout << "to view its current schedule. ";
         cin >> choice;
        switch (choice) //added a switch case, makes things simpler
        {
          if (choice == 1)
            {
          
          case 1: 
            cout<< "\nYou have selected: Cardio\n";
            cout<< "The times this class meets are:\n";
            cout<< "Mondays & Wednesdays\t\t 2:00PM to 3:30PM\n";
            cout<<"The price for this Class is $4.99\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
            if (addQ == 'Y' || addQ == 'y')
            {
              cout<<"You have added this class to your membership\n";
              cout<< "Would you like to add an additional class? (Y/N) ";
              cin >> addQ;
            }
          break;
            }
          if (choice == 2)
            {
          case 2:
            cout<< "\nYou have selected: Yoga\n";
            cout<< "The times this class meets are:\n";
            cout<< "Tuesdays & Thursdays\t\t 2:00PM to 3:30PM\n";
            cout<<"The price for this Class is $5.50\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
            if (addQ == 'Y' || addQ == 'y')
            {
              cout<<"You have added this class to your membership\n";
              cout<< "Would you like to add an additional class? (Y/N) ";
              cin >> addQ;
            }
          break;
            }  
          if (choice == 3)
            {
          case 3:
            cout<< "\nYou have selected: Weight Training\n";
            cout<< "The times this class meets are:\n";
            cout<< "Wednesdays & Fridays\t\t 12:00PM to 1:30PM\n";
            cout<<"The price for this Class is $6.50\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
            if (addQ == 'Y' || addQ == 'y')
            {
              cout<<"You have added this class to your membership\n";
              cout<< "Would you like to add an additional class? (Y/N) ";
              cin >> addQ;
            }
          break;
            }  
          if (choice == 4)
            {
          case 4:
            cout<< "\nYou have selected: Zumba\n";
            cout<< "The times this class meets are:\n";
            cout<< "Thursdays & Saturdays\t\t 12:00PM to 1:30PM\n";
            cout<<"The price for this Class is $7.00\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
            if (addQ == 'Y' || addQ == 'y')
            {
              cout<<"You have added this class to your membership\n";
              cout<< "Would you like to add an additional class? (Y/N) ";
              cin >> addQ;
            }
          break;
            }  
          if (choice == 5)
            {
          case 5:
            cout<< "\nYou have selected: Personal Trainer\n";
            cout<< "The times this class meets are:\n";
            cout<< "Mondays & Tuesdays\t\t 12:00PM to 1:30PM\n";
            cout<<"The price for this Class is $10.00\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
            if (addQ == 'Y' || addQ == 'y')
            {
              cout<<"You have added this class to your membership\n";
              cout<< "Would you like to add an additional class? (Y/N) ";
              cin >> addQ;
            }
          break;
            }  
            cout<< "Would you like to add an additional class?";
            cin >> addQ;
            }
       } while (addQ == 'Y' || addQ == 'y');
        
        /*else if (addQ == 'n' || addQ == 'N')
        {
          cout << "*Review Prompt goes here(?)*"; //possibly a function prototype fits best.
        }

        else
        {
          cout << "Invalid input, please enter the correct input (Y/N) "; //needs something to re-loop the question over and over til the input is right (y/n).
          cin >> addQ;*/
        //} 
  sum(cardio, yoga, weightTraining, zumba, personalTrainer);
  }
/*
else
{
  cout << "Invalid input, please enter the correct input (Y/N) "; //needs something to re-loop the question over and over til the input is right (y/n).
  cin >> answer;
}*/

return 0;
}

void introduction(string firstName, string lastName) //function prototype
{
  cout << "Hi and welcome to\n";
  cout << "\t Hashtag-FIT\n";
  cout << "Please enter your first name:\n";
  cin>> firstName;
  cout<< "Please enter your last name:\n";
  cin >> lastName;
  cout << "Welcome "<<firstName<<" "<<lastName<<","<< endl;
}

void sum(double cardio, double yoga, double weightTraining, double zumba,double personalTrainer)
{
  cardio = 4.99;
  yoga = 5.50;
  weightTraining = 6.50;
  zumba = 7.00;
  personalTrainer = 10.00;
  cout << "";
}