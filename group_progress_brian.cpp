

// hey guys its Brian, I went ahead and edit/change a few things, if you are viewing this feel free to edit and work with what I currently have. I will update my current code more in the future, so please save any changes you made to this program on your behalf.


/* This Program is to help users select their gym membership as well as any addidtional training they would like to add to it .
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <array>
using namespace std;
void introduction(string firstName, string lastName);


int main() {
 /*string cardio, Cardio, Yoga, yoga, WeightTraining, weightTraining, Zumba, zumba, PersonalTrainer, personalTrainer;*/
 string firstName,lastName, category;
 char answer, addQ;
 int choice;
 double Monthly = 19.99;
 
 const int RATES = 5 ;
 
 double classes[RATES] = {4.99, 5.50, 6.50, 7.00, 10.00};

introduction(firstName, lastName); //made a function for the introductory name.


cout << "\nThe Monthly Rate for this gym is $"<<Monthly<<endl;
cout << "Would you like to sign up for Gym membership? (Y/N) \n";
cin>>answer;

if (answer == 'Y'|| answer == 'y')
{
  cout<<"That's Perfect lets sign you up! \n";
  cout<< "Would you like to sign up for any additional programs? (Y/N) "<<endl;
  cin>> addQ;
  
  if (addQ == 'y'|| addQ == 'Y')
  {
  cout<<"Here are the additional training programs you can sign yourself up for"<<endl;
  cout<< " 1.Cardio\n 2.Yoga\n 3.Weight Training\n 4.Zumba\n 5.Personal Trainer\n\n"; 
  

  cout<< "Would you like sign up for any of these? (Y/N) ";
  cin >> addQ;
  }

      if (addQ == 'Y'|| addQ == 'y')
       {
         cout << "\nPlease type the numerical value of the program listed\n";
         cout << "to view its current schedule. ";
         cin >> choice;
        switch (choice) //added a switch case, makes things simpler
        {
          if (choice == 1)
            {
          
          case 1: 
            cout<< "You have selected: Cardio\n";
            cout<< "The times this class meets are:\n";
            cout<< "Mondays & Wednesdays\t\t 2:00PM to 3:30PM\n";
            cout<<"The price for this Class is $4.99\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
          break;
            }
          if (choice == 2)
            {
          case 2:
            cout<< "You have selected: Yoga\n";
            cout<< "The times this class meets are:\n";
            cout<< "Tuesdays & Thursdays\t\t 2:00PM to 3:30PM\n";
            cout<<"The price for this Class is $5.50\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
          break;
            }  
          if (choice == 3)
            {
          case 3:
            cout<< "You have selected: Weight Training\n";
            cout<< "The times this class meets are:\n";
            cout<< "Wednesdays & Fridays\t\t 12:00PM to 1:30PM\n";
            cout<<"The price for this Class is $6.50\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
          break;
            }  
          if (choice == 4)
            {
          case 4:
            cout<< "You have selected: Zumba\n";
            cout<< "The times this class meets are:\n";
            cout<< "Thursdays & Saturdays\t\t 12:00PM to 1:30PM\n";
            cout<<"The price for this Class is $7.00\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
          break;
            }  
          if (choice == 5)
            {
          case 5:
            cout<< "You have selected: Personal Trainer\n";
            cout<< "The times this class meets are:\n";
            cout<< "Mondays & Tuesdays\t\t 12:00PM to 1:30PM\n";
            cout<<"The price for this Class is $10.00\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n";
            cin >> addQ;
            if (addQ == 'Y' || addQ == 'y')
            {
              cout<<"You have added this class to your membership";
            }
          break;
            }  
        }
       }
        else if (addQ == 'n' || addQ == 'N')
        {
          cout << "*Review Prompt goes here(?)*"; //possibly a function prototype fits best.
        }

        else
        {
          cout << "Invalid input, please enter the correct input (Y/N) "; //needs something to re-loop the question over and over til the input is right (y/n).
          cin >> addQ;
        }
    /*{const int SIZE = 5;
     string training [SIZE] = {"Cardio" , "Yoga" , "Weight Training" , "Zumba" , "Personal Trainer"};
   
    cout << "Which one would you like to select?";
    cin >> category;
    }*/
  //cout<<"You have selected "<<category<<" Here is the schedule for this training //program\n";
  /*if (category == Cardio && category == cardio )
  {
   cout<< "The times this class meets are:\n";
   cout<< "Mondays & Wednesdays\t\t 2:00PM to 3:30PM\n";
   cout<<"The price for this Class is $4.99\n";
   cout<<"Would you like to sign up for this class?\n";
   cin>>addQ;*/
        /*if (addQ == 'Y'|| addQ == 'y')
        {
          cout<<"You have added this class to your membership";
        }
          cout<<"Would you like to sign up for any Additional Trainings?\n";
          cin>>addQ;*/


  
}
else if (answer == 'n' || answer == 'N')
{
  cout << "Thank you so much for your time!";
}

else
{
  cout << "Invalid input, please enter the correct input (Y/N) "; //needs something to re-loop the question over and over til the input is right (y/n).
  cin >> answer;
}

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