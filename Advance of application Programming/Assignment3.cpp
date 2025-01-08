// Create a program to calculate the sum of numbers inputted from the users.
#include <iostream>
using namespace std;
int main()
{
    int num = 0, sum = 0;
    cout<<"Enter a Number:";
    while (1)
    {
        cin >> num;
        if (num == 10)
        {
            sum += num;
            cout<<"Sum is: "<<sum<<endl;
            return 0;
        }
        sum += num;
    }

    cout<<"Sum is: "<<sum<<endl;
    return 0;
}
