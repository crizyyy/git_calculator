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
			case 5:
			cout<<"give the number";
            cin>>firstNumber;
            result = sqrtl(firstNumber);
			cout<<"the square root of"<<firstNumber<<"is"<<result;
            break;
			

			case 1:
			  cout <<"first number is:"<<endl;
			  cin>>firstNumber;
			  cout <<"second number is"<<endl;
			  cin>>secondNumber;
			  if(firstNumber<0){
				  cout<<"Negative number";
			  }
			  if(secondNumber<0){
				  cout<<"Negative number";
			  }
			  result = firstNumber+secondNumber;
			  cout << "Result of Addition = "<<result;
			  break;
			  
			case 3:
				cout << "Enter first number: ";
				cin >> firstNumber;

				cout << "Enter second number: ";
				cin >> secondNumber;

				result =firstNumber * secondNumber;

				cout << "Multiplication: " << result << endl;
				break;
        }
 
    } while (choice != 7);
 
    return 0;

}
 