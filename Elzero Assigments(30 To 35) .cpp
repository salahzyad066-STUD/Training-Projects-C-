#include <iostream>
using namespace std;
// (condition ? True : Falso)
int main()
{
    // int by = 82; // by => Birth Year
    // int s = 500; // s => Salary
    // if (by > 80)
    // {
    // if (s < 600)
    //     cout << "Ok\n";
    // else
    //     cout << "High\n";
    // }
    // else
    // {
    // cout << "Not Ok\n";
    // }
    // // cout << (by > 80?   (s < 600? "Ok\n":" High\n" ): "Not Ok\n" );

    int result =0 ;
    int num1, num2, num3, num4;
    cout << "Please Type 4 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;
        // num 1
    if(num1 < 20 && num1 % 2 == 0)
    {
        // cout << num1 + result;
        result = num1+result;
        cout << "Result One Is\n "  << result;
    }
        //num2
        if(num2 < 20 && num2 % 2 == 0)
    {
        // cout << num2 + result << endl ;
        result = num2+result;
        // cout << "Result Two  Is \n"  << result;
    }
    // num3
        if(num3 < 20 && num3 % 2 == 0)
    {
        // num4
        // cout << num3 + result;
        result = num3+result;
        // cout << "Result Three Is \n"  << result;
    }
        if(num4 < 20 && num4 % 2 == 0)
        
    {
        // cout << (num4 + result) << endl;
        result = num4+result;
        // cout << "Result Four Is  \n"  << result << endl;
    }
    cout << "Final Result Is "<<  result << endl;
}