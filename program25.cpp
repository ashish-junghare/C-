/*
35 = fail
50 = pass
60 = second
70 = first
70+ = Distinc 
*/


#include<iostream>
using namespace std;

class Display
{
   public:
      void ClassDisplay(float fMarks)
      {
         if(
            (fMarks<0.0) &&
            (fMarks>35.0)
            )
            {
               cout<<"You are fail\n";
            }
         else if(
            (fMarks<50.0) &&
            (fMarks>=35.0)
            )
            {
               cout<<"You are in pass class\n";
            }

         else if(
            (fMarks<60.0) &&
            (fMarks>=50.0)
            )
            {
               cout<<"You are in second class\n";
            }
         else if(
            (fMarks>=60.0) &&
            (fMarks<70.0)
            )
            {
               cout<<"You are in first class\n";
            }
         
         else if(
            (fMarks>=70.0) &&
            (fMarks<100.0)
            )
            {
               cout<<"You are in first class with distinction\n";
            }
         else
         {
            cout<<"Invalid input\n";
         }
      }

};

int main()
{
   float fValue=0.0;
   cout<<"Enter your percentage: \n";
   cin>>fValue;
   Display obj;
   obj.ClassDisplay(fValue);
   
   return 0;
}


/*
coding_machine@AshishJ:~/Desktop/LB/C++_Program$ g++ program25.cpp -o program25
coding_machine@AshishJ:~/Desktop/LB/C++_Program$ ./program25
Enter your percentage: 
35
You are in pass class
coding_machine@AshishJ:~/Desktop/LB/C++_Program$ ./program25
Enter your percentage: 
50
You are in second class
coding_machine@AshishJ:~/Desktop/LB/C++_Program$ ./program25
Enter your percentage: 
60
You are in first class
coding_machine@AshishJ:~/Desktop/LB/C++_Program$ ./program25
Enter your percentage: 
70
You are in first class with distinction
coding_machine@AshishJ:~/Desktop/LB/C++_Program$ ./program25
Enter your percentage: 
102
Invalid input
coding_machine@AshishJ:~/Desktop/LB/C++_Program$ 


*/