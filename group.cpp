/* This Program is to help users select their gym membership as well as any addidtional training they would like to add to it .


*/
#include <iostream>
#include <string>
#include <iomanip>
#include <array>
using namespace std;
void trainingprogram();


int main() {
 string cardio, Cardio, Yoga, yoga, WeightTraining, weightTraining, Zumba, zumba, PersonalTrainer, personalTrainer;
 string name,category;
 char answer, addQ;
 
 double Monthly = 19.99;
 
 const int RATES = 5 ;
 
 double classes[RATES] = {4.99, 5.50, 6.50, 7.00, 10.00};

  cout << "Hi and welcome to\n";
  cout << "\t Hashtag-FIT\n";
  cout << "Please enter your name:\n";
  cin>> name;

  cout << "Welcome "<<name<<","<<endl;
  cout << "The Monthy Rate for this gym is "<< Monthly << endl;
  cout << "Would you like to sign up for Gym membership? (Y/N) ";
  cin>> answer;

    if (answer == 'Y'|| answer == 'y')
      {
        cout<<"Thats Perfect lets sign you up! \n";
        
           cout<< "Would you like to sign up for any additional programs?(Y/N)"<<endl;
          cin>> addQ;
           if (addQ == 'y'|| addQ == 'Y')
             {

              cout<<"Here are the additional training programs you can sign yourself up for"<<endl;
  
              cout<< " 1.Cardio\n 2.Yoga\n 3.Weight Training\n 4.Zumba\n 5.Personal Trainer\n\n"; 
  
           }
            cout<< "Would you like sign up for any of these? (Y/N)";
            cin >> addQ;
    if (addQ == 'Y'|| addQ == 'y')
    {  const int SIZE = 5;
       string training [SIZE] = {"Cardio" , "Yoga" , "Weight Training" , "Zumba" , "Personal Trainer"};
   
       cout << "Which one would you like to select?\nPlease Type your class selection as displayed\n ";
       cin >> category;
    }
  cout<<"You have selected "<<category<<" Here is the schedule for this training program\n";
  if (category == "Cardio" || category == "cardio" )
      {
      cout<< "The times this class meets are:\n";
      cout<< "Mondays & Wednesdays\t\t 2:00PM to 3:30PM\n";
      cout<<"The price for this Class is $4.99\n";
      cout<<"Would you like to sign up for this class?\n";
      cin>>addQ;

      if (addQ == 'Y'|| addQ == 'y')
         {
         cout<<"You have added this class to your membership\n";
         }
     
        cout<<"Would you like to sign up for any Additional Trainings?\n";
       cin>>addQ;
       }
      } 
     cout << " Thank you so much for your time!";
  return 0;
 }

