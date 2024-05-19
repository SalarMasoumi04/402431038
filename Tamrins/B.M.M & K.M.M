#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the GCD and LCM of two numbers ===== \n\n";

    //variable declaration
    int n1, n2, i;

    //variable declaration and initialization
    int gcd = 1, lcm = 1;  

    //taking input from the command line (user)
    cout << " Enter the two numbers you want to find the GCD and LCM of : \n\n";
    cin >> n1 >> n2;

    //logic to calculate the GCD and LCM of the two numbers
    for ( i = 1; i < 1000; i++)
    {
        //i is the least value that perfectly divides both the numbers and hence the GCD
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd = i;          
        }
    }

    lcm = (n1 * n2) / gcd;

    cout << " \n\nThe GCD of the two numbers : " << n1 << " and " << n2 << " is : " << gcd;
    cout << " \n\nThe LCM of the two numbers : " << n1 << " and " << n2 << " is : " << lcm << "\n\n";
    cout << "\n\n\n";

    return 0;
}
