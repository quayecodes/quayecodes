#include <iostream>

using namespace std;

int main()
{
 //Entering My Details
   string name= "Michael Quaye Nii Ayi";
   string school= "Ghana Communication Technology";
   string course= "Bsc. COmputer Science";
   int level= 100;
   char group='B';
   cout << "Full Name: " << name <<endl;
   cout << "School: " << school <<endl;
   cout << "Programme: " << course <<endl;
   cout << "Level: " <<level <<endl;
   cout << "Group: " <<group <<endl;

   // User input(inserting object)
   cout << "Enter Your Full Name: " ;
   string name1;
   cin >> name1;
   cout << "You entered: " <<name1 <<endl;

   //integer types
   cout << "Max of Int: " <<  INT_MAX <<endl;
   cout << "Size of level:" << sizeof(level) <<endl;

   // Floating point types
   float value1=54.2;
   cout << "First value: " << value1 <<endl;

   //char and bool data types
   // bool is used to represent true or false
   bool bvalue= true;
   cout << "Bool Statement: " <<bvalue <<endl;
   // char is used to represent a single character
   char cvalue=6;
   cout << "Char value: " <<cvalue <<endl;

   //COnditional Statement
   string passcode= "newcode";
   string input;
   cout << "Enter your Password: ";
   cin >> input ;
   if (input == passcode)
   {
       cout << "Password is Correct!" <<endl;
   }
   if (input != passcode)
   {
       cout << "You entered invalid password!" <<endl;
   }
   //if-else statement
   int score;
   cout << "Enter your class score: ";
   cin >> score;
   if (score>=80)
   {
       cout <<score << " Is Grade A!" <<endl;
   }
   else if (70<=score && score<80)
   {
       cout << "Grade B!" <<endl;
   }
   else if (60<=score && score<70)
   {
       cout << "Grade C!" <<endl;
   }
   else if (50<=score && score<60)
   {
       cout << "Grade D!" <<endl;
   }
   else if (40<=score && score<50)
   {
       cout << "Grade E!" <<endl;
   }
   else if (40 < score)
   {
       cout << "Grade F!" <<endl;
   }
   else
   {
       cout << "invalide figure, Please Enter an interger!" <<endl;
   }

   //Comparing floats
   float val1;
   float val2;
   cout << "Enter Your First Value: ";
   cin >> val1;
   cout << "Enter Your second Value: ";
   cin >> val2;
   if (val1>val2)
   {
       cout << "The Value of " <<val1 << " is greater than " <<val2 <<endl;
   }
   else
   {
       cout << "The value of " <<val2 << " is greater than " <<val1 <<endl;
   }
   //repetitive Statements
   //while loop
   int a=1;
   while (a<=10)
   {
       cout <<a << " :I'm Learning Coding " <<endl; a++;
   }
   //Do-while loop

   // Learning about arrays
   cout << "Array of integers" <<endl;
   cout << "-----------------" <<endl;
   int arry[4]= {4,6,8,10};
   //Listing Arrays of integers
   cout << "First Array:" << arry[0] <<endl;
   cout << "Second Array:" << arry[1] <<endl;
   cout << "Third Array:" << arry[2] <<endl;
   cout << "Fouth Array:" << arry[3] <<endl;

    return 0;
}
