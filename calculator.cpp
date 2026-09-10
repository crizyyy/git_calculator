#include <iostream>

#include <cmath>
 
using namespace std;
 
int main()

{

    int choice;
 
    do

    {

        cout << "\n============================\n";

        cout << "     GIT TEAM CALCULATOR\n";

        cout << "============================\n";

        cout << "1. Addition\n";

        cout << "2. Subtraction\n";

        cout << "3. Multiplication\n";

        cout << "4. Division\n";

        cout << "5. Square Root\n";

        cout << "6. Average\n";

        cout << "7. Exit\n";

        cout << "============================\n";
 
        cout << "Enter your choice: ";

        cin >> choice;
 
        double firstNumber;

        double secondNumber;
		
		double result;
 
        switch (choice)

        {
			case 1:{
			  cout <<"first number is:"<<endl;
			  cin>>firstNumber;
			  cout <<"second number is"<<endl;
			  cin>>secondNumber;
			  int c = firstNumber+secondNumber;
			  cout << "Result of Addition = "<<c;
			  
			  }

			
        }
 
    } while (choice != 7);
 
    return 0;

}
 