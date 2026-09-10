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
            int result = sqrtl(firstNumber);
			cout<<"the square root of"<<firstNumber<<"is"<<result;
            break;
			
        }
 
    } while (choice != 7);
 
    return 0;

}
 