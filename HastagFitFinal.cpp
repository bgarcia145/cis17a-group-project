/*Names:Chris Avila
        Brian Garcia
        Rigo Salazar
 TEAM: HASHTAG-FIT
 The purpose of this program is to supply the users with a kiosk interface who are interested to sign up for a gym membership at Hashtag-Fit (our group name/gym name).  Alongside add any additional special programs we offer such as Yoga, Zumba, Cardio, Weight Training, and Personal Trainers. The targeted audience and the type of users can be of any age, looking to support physical and mental health and promote wellness to themselves.
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <array>
#include <fstream>
using namespace std;
void introduction(string firstName, string lastName);
void lastFinal(string firstName, string lastName); //function prototype
double total=0;

int main() {
 string firstName,lastName,cardio,yoga,weightTraining,zumba,personalTrainer, category;
 char answer, addQ;
 int choice;
 double monthly = 19.99;
 
 ofstream reciept;
 
 string classes [2][5] = {{ "4.99" , "5.50" , "6.50" , "7.00" , "10.00" } ,{ "cardio" , "yoga" , "weightTraining" , "zumba" , "personalTrainer" }};

  
introduction(firstName, lastName); //made a function for the introductory name.


cout << "\nThe Monthly Rate for this gym is $"<<monthly<<endl;
cout << "Would you like to sign up for a Gym membership? (Y/N) \n";
cin>>answer;

if (answer == 'Y'|| answer == 'y')
{
  reciept.open( "Reciept.txt", ios::out | ios::app);
  reciept<<"Congratulations,\nHere is your Review so far!"<<endl;
  reciept<< "\nMonthly Rate Per Month:\t\t$"<<monthly<<"\n"<<endl;
  total += 19.99;
  reciept.close();

  cout<<"That's Perfect lets sign you up!\n";
  cout<< "Would you like to sign up for any additional programs? (Y/N) "<<endl;
  cin>> addQ;
}

 else if (answer =='n'|| answer=='N')
   {
  cout << "Thank you so much for your time!";
   }
 
  if (addQ == 'y'|| addQ == 'Y')
  {
   reciept.open( "Reciept.txt", ios::out | ios::app);
    reciept<<"--Additional Training Packages--\n"<<endl;
   reciept.close();
  cout<<"Here are the additional training programs you can sign yourself up for"<<endl;
   

  
  
        do
       {
         cout<< " \n 1.Cardio\n 2.Yoga\n 3.Weight Training\n 4.Zumba\n 5.Personal Trainer\n\n";
         cout << "\nPlease type the numerical value of the program listed\n";
         cout << "to view its current schedule. ";
         cin >> choice;
         reciept.open( "Reciept.txt", ios::out | ios::app);
        switch (choice) //added a switch case, makes things simpler
        {
          
          if (choice == 1) // These case statements have repeating comments we only commented the first one. 
            {
          
          case 1: 
            cout<< "\nYou have selected: Cardio\n";
            cout<< "The times this class meets are:\n";
            cout<< "Mondays & Wednesdays\t\t 2:00PM to 3:30PM\n";   //Displays date time and Price
            cout<<"The price for this Class is $4.99\n";
            cout<<"Would you like to sign up for this class? (Y/N)\n"; //final choice
            cin >> addQ; 
            if (addQ == 'Y' || addQ == 'y')
            {
              cout<<"You have added this class to your membership\n";
              cout<< "Would you like to add an additional class? (Y/N) ";
              cin >> addQ;
              reciept << "Mondays & Wednesdays\t\t 2:00PM to 3:30PM\n";
              reciept << classes[1][0]<<"\t\t\t""$"; //Outputs schedule to the receipt using the array.
              reciept << classes[0][0]<<endl;
              total+= 4.99; //Price is added based on the selection to total.
           
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
             
              reciept << "Tuesdays & Thursdays\t\t 2:00PM to 3:30PM\n";
              reciept << classes[1][1]<<"\t\t\t""$";
              reciept << classes[0][1]<<endl;
              total+= 5.50;
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
              reciept << "Wednesdays & Fridays\t\t 12:00PM to 1:30PM\n";
              reciept << classes[1][2]<<"\t\t\t""$";
              reciept << classes[0][2]<<endl;
              total+= 6.50;
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
              reciept << "Thursdays & Saturdays\t\t 12:00PM to 1:30PM\n";
              reciept << classes[1][3]<<"\t\t\t""$";
              reciept << classes[0][3];

              total+=7.00;
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
              reciept<< "Mondays & Tuesdays\t\t 12:00PM to 1:30PM\n";
              reciept << classes[1][4]<<"\t\t\t""$";
              reciept << classes[0][4]<<endl;
              total+=10.00;


            }
          break;
            }  
            cout<< "Would you like to add an additional class?";
            cin >> addQ;
           
            }
            reciept.close();
             
       } while (addQ == 'Y' || addQ == 'y');
      lastFinal(firstName,lastName); //calls function prototype lastFinal
    
   
}
 
else
   {
  lastFinal(firstName,lastName); //calls function prototype lastFinal
   } 
  

  
    
  

return main(); //Retruns to main, Kiosk function
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

void lastFinal(string firstName, string lastName) //function prototype
{ 
  char addQ;
  
  
   string getcontent; //Displays content from receipt. All selections including membership.
    ifstream openfile ("Reciept.txt");
    if(openfile.is_open())
    {
       while(getline(openfile, getcontent))
        { 
          
                cout <<left<< getcontent;
        }
    }
  cout<<"\n\nHere is your Total Cost: $"<<total<< endl;
  cout<<"Would you like to sign up for this?(Y/N) "<<endl<<endl;
  cin>>addQ;

if ( addQ=='N'|| addQ=='n')
  {
    cout<<"\n\nThank you for your time!!\n\n\n";
   ofstream ofs;   //initiates open RECIEPT file and then  clears it if selected no
   ofs.open("Reciept.txt",  ofstream::out | ofstream::trunc);
   ofs.close();
   total = 0;
    
  }
 else
{
string getcontent;
    ifstream openfile ("Reciept.txt"); // This displays everything in the reciept on the screen for the customer
    if(openfile.is_open())
    {
       while(getline(openfile, getcontent))
        { 
          
                cout <<left<< getcontent; // Aligns all items left
        }
    }

cout<<"Congratulations!"<<endl;
cout<<"You have signed off for your membership.\n\n\n"<<endl;



}

 ofstream ofs; //Opens reciept file and then clears it
   ofs.open("Reciept.txt",  ofstream::out | ofstream::trunc);
   ofs.close();
total = 0;  //clears out any lingering values to total

  
}
