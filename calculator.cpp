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
			case 2:
			cout<<"\nEnter the first Number:\n"
			cin>>firstNumber;
			cout<<"\nEnter the second Number:\n"
			cin>>secondNumber;
			result = firstNumber - secondNumber;
			cout<<"the result is:"<<result;
			break;
			

			
        }
 
    } while (choice != 7);
 
    return 0;

}
 