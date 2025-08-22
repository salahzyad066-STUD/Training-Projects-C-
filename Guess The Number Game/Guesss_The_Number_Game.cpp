#include <iostream>
#include <array>
using namespace std ;
int main()
{
    int Sequences[3][5] = {
    {1, 5, 10, 16,23},
    {2, 4, 8, 16, 32},
    {1, 1, 2, 3, 5},
    };
    int points = 0;
    int answers [3];
    cout << "Type The Missing Number In Swquence " << "\n";
    cout << "Sequence 1" <<endl<< "1| 5| 10| 16| ??" << endl;
    cout << "Enter Your Answer " << endl ;
    cin >> answers[0];
    if(answers[0] == Sequences[0][4])
    {
        cout <<"You Answr Is Correct,You Got 1 Point \n";
        cout << "Your Points Now Is : " <<   ++points <<endl;
    } else
    {
        cout << "Your Answer Is Incorrect \n";
    }
    cout << "Sequence 2 "<< endl << "2| 4| 8| 16| ??" << endl;
    cout << "Enter Your Answer " << endl ;
    cin >> answers[1];
    if(answers[1] == Sequences[1][4] )
    {
        cout <<"You Answr Is Correct,You Got 1 Point \n";
        cout << "Your Points Now Is : " <<  ++points   <<endl;
    } else
    {
        cout << "Your Answer Is Incorrect \n";
    }
    cout << "Sequence 3 "<< endl <<  "1 | 1 | 2 | 3 | ??" << endl;
    cout << "Enter Your Answer " << endl ;
    cin >> answers[2];
    if(answers[2] == Sequences[2][4])
    {
        cout <<"You Answr Is Correct,You Got 1 Point \n";
        cout << "Your Points Now Is : " <<  ++points <<endl;
    } else
    {
        cout << "Your Answer Is Incorrect \n";
    }
    cout << "Final Result : You Got " << points << " Points From 3" ;
    return 0 ;
}
// 1, 1, 2, 3, 5