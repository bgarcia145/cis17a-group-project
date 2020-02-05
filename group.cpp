/* This Program is to help users select their gym membership as well as any addidtional training they would like to add to it .
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <array>
using namespace std;
void trainingprogram();


int main() {
 string cardio, yoga, weightTraining, zumba, personalTrainer;
 string name, answer;
 string  y, n, Y, N;
 double Monthly = 19.99;
 
 const int RATES = 5 ;
 
 double classes[RATES] = {4.99, 5.50, 6.50, 7.00, 10.00};



  cout << "Hi and welcome to\n";
  cout << "\t Hashtag-FIT\n";
  cout << "Please enter your name:\n";
  cin>> name;

  cout << "Welcome "<<name<<","<<endl;
  cout << "The Monthy Rate for this gym is "<<Monthly<<endl;
  cout << "Would you like to sign up for Gym membership? (Y/N) ";
  cin>>answer;
if (answer != N|| answer != n)
{
  cout<<"Thats Perfect lets sign you up! \n";
  void trainingprogram();
     
  


}

else
{
  cout << " Thank you so much for your time!";
}









void trainingprogram();
{
 cout<< "Would you like to sign up for any additional programs?(Y/N)"<<endl;
 cin>>answer;
if (answer != N|| answer != n)
{
  cout<<"Here are the additional training programs you can sign yourself up for"<<endl;
  
  cout<< "1.Cardio\n 2.Yoga\n 3.Weight Training"; 




}

  
}






return 0;
}




