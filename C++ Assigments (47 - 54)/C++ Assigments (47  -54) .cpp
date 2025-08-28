// #include <iostream> 
// #include <string>
// #include <libgen.h>
// #include <limits.h>
// #include <array>
// #include <algorithm>
// using namespace std ;
// int main()
// {
    // Assigmrnt [1] 
    // Method With For 

    // int i = 0 ;
    // for( ;; )
    // {
    //     cout << i << endl ;
    //     i++;
    //     if (i ==10 )
    //     {
    //         break;
    //     }
    // }
    // Method With While 


    // int i = 0 ;
    // while(i < 10 )
    // {
    //     cout <<  i  << endl;
    //     i ++  ;
    // }

    // Method With Do While 
    // int i = 0 ;
    // do {
    //     cout << i <<endl ; 
    //     i++ ;
    // } while ( i < 10) ;


    // Assigmrnt [2]
    // int index = 2 ;
    // for (;;)
    // {
    // cout << index << "\n"; // From 2 To 10
    // index ++ ;
    // if(index == 9)
    // {
    //     break;
    // }
    // }


    // Assigmrnt [3]


    // int num1 ;
    // int num2 ;
    // cout << "Please Enter numbers " << endl;
    // cin >> num1 >> num2 ; 
    // cout << "\n======================\n" ;
    // // int range  = 0;
    
    // if(num1 > num2 )
    //     {
    //     int temp;
    //     temp = num2 ; // 8
    //     num2 = num1 ;  // 
    //     num1 = temp ;  // 
    //     }
    // for( int range = num1 +1 ; range < num2 ; range ++ )
    // {
    //     if(range % 2 == 0)
    //     {
    //         continue;
    //     }
    //     cout << range << endl  ;
    // }

        // Assigmrnt [4]


    // for(int i = 0 ; i < 20 ; i++)
    // {
    //     if(i == 10 )
    //     {
    //         continue;
    //     }
    //     if(i == 12 )
    //     {
    //         continue;
    //     }
    //     if(i % 2 == 1)
    //     {
    //         continue;
    //     }
    //     cout << i << endl ;
    //     i++  ;
    // }
    // int i = 0;
    // while(i <  20 )
    // {
    //     if(i > 9 || i < 12 )
    //     {
    //         cout << i << endl ;  
    //     }

    //     i +=2 ; 
    // }

    // Assigmrnt [5]
    // for 

    // for(int i = 0 ; i <  29 ; i +=  3 )
    // {
    //     cout << i  << endl;

    // }
    // // while 
    // int i = 0;
    //     while(i < 29  )
    //     {
    //         cout << i << endl ;
    //         i +=  3 ;
    //     }


    // Assigmrnt [6]

    // for(int i = 10 ; i < 1000000000 ;  i = i*i)
    // {
    //     cout << i << endl ;
    // }
    // int i = 10 ;
    // while (i < 1000000000)
    // {
    //     cout << i << endl ;
    //     i = i*i ;
    //     }
    // Assigmrnt [7]


    // for(int i = 2 ; i < 130 ; i = i*2)
    // {
    //     cout << i  << endl ;
    // }

    // int i= 2 ;
    // while(i<  130 )
    // {
    //     cout << i << endl ;
    //     i =i*2 ;
    // }

    // Assigmrnt [8]



    // for(int i = 2 ; i < 127 ; i = (i *2) + 2 )
    // {
    //     cout << i << endl ;
    // }

    // int i = 2 ;

    // while(i < 127)
    // {   
    //     cout << i << endl ;
    //     i = (i *2) + 2 ;
    // }



    // Assigmrnt [9]

    // string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

    // for(int i = 1 ; i < 3 ; i++ )
    // {
    //     cout << friends[i] <<  endl ;
    // }

    // int  i = 1 ;
    // while( i < 3)
    // {
    //     cout << friends[i] <<  endl ;
    //     i++;
    // }


    // Assigmrnt [10]


    // string friends [] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    
    // for(int i = 0 ;  i < 5 ; i++ )
    // {
    //     if(i== 0 || i > 2   )
    //         {
    //         cout <<   friends[i]  << endl ;
    //         }
    
    // }

    // int i = 0;
    // while(i < 5)
    // {
    //     if(i == 0  || i >  2 )
    //     {   
        
    //         cout << friends[i]  << endl ; 
        
    //     }
    //     i++ ;
    // }

    // Assigmrnt [11]


    //     string friends[] = {"Ahmed", "Osama", "Ameer"};
    //     int size_of = sizeof(friends) / sizeof(friends[0]) ;
    //     for(int i = 0 ; i < size_of ; i++ )
    // {
    //     cout << "\n============================== \n";
    //     cout << "== " << friends[i] << " ==" <<  endl;
    //     cout << "\n============================== \n";
    //     for(int j =0 ; j< friends[i].length();j ++)
    //     {
    //         cout <<  friends[i][j] << ","  ;
    //     }

    // }


        // Assigmrnt [12]
        // int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
        // int numsize = sizeof(nums) / sizeof(nums[0]) ;

        // for(int i = 0 ; i< numsize  ; i ++  )
        // {
        //     if(nums[i] +nums[i] == nums[i+1 ])
        //     {
        //         cout << nums[i] << endl;
        //     } else
        //     {
        //         continue;
        //     }
        // }

        // Assigmrnt [13]

    // for (int i = 30 ; i > 2 ; i-= 3)
    // {   
    //     if(i % 2 == 0)
    //     {
    //         continue;
    //     }
    //     cout << i << endl;
    // }

        // Assigmrnt [14]

    // int num = 2;
    // int i = 2 ;
    // while (num < 520) {

    //     if(num== 2)
    //     {
    //         num = num-1 ;
    //         cout << num  << endl ;
    //     }
    //     num = (num*i) + i ;
    //     cout << num  << endl;
    //     if(num== 382)
    //     {
    //         break;
    //     }
    // }    


    // Assigmrnt [15] التاسك ده هبلني اقسم بالله و هيجيلي جلطة بسببه بقالي 3 ايام فيه مش عارف احله ولسه still مش عارف احله 
    

    // int help_num = 4;
    // int nums[] = {2, 4, 5, 6, 10};

    //     int i , j ;
    //     i = 0 ;
    //     j = 4 ;



    // while(true )
    // {
    //     cout << nums[i] << endl;
    //     i++ ;
    //     if(nums[i] ==5 )
    // {
    //     cout << nums [i] + nums[i] << endl;
    //     swap (i,j) ;
    //     break;
    // }
    // }


    // while(true )
    // {
        
    //     j-- ;
    //     cout << "\""<< nums[i] << "+" << nums[j] << "="  << nums[i] + nums[j] << "\""  ;
    //     if(nums[j] == 5 )
    //     {
    //         cout << nums[j] + nums [j] << endl;
    //         break;
    //     }
    // }


    // "2 + 10 = 12"
    // "4 + 6 = 10"
    // "5 + 5 = 10"
    // "6 + 4 = 10"
    // "10 + 2 = 12"


    // Assigmrnt [16]


    //     int index = 10;
    //     int jump = 2;

    // for (;;)
    // {
    // int result = index  ;
    // // if(result == 10 )
    // // {
    // //     cout << result  << endl;
    // // }
    // cout << result << endl ;
    // result = index-jump;
    // index -= 2 ; 
    // if(result == 4)
    // {
    //     cout << result << endl;
    //     break;

    // }
    // }

    // Assigmrnt [17]

    //     int i = 1  ; 
    // while(i< 11 ) // While 1 
    // {   
    //     if(i == 10 )
    //     {
    //         cout << "0" << i  << endl;
    //         break;
    //     }
    //     cout << "00" << i << endl;
    //     i++ ;
    // }
        

    // for(int j = 11 ; j < 21 ; j ++ )
    // {
    //     cout << "0" << j << endl;
    // }


    // for(int k = 100 ; k < 103 ; k++)
    // {
    //     cout <<  k << endl;
    // }

    // Assigmrnt [18]


    // for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
    // {
    // if(i == 500 )
    // {
    //     continue;
    // } else if(i == 1000)
    // {   
    //     continue;
    // } else if(i == 0)
    // {
    //     continue;
    // }
    // cout << i << "\n";
    // }

    // Output Needed
    // 100
    // 200
    // 300
    // 400
    // 600
    // 700
    // 800
    // 900



    // Assigmrnt [19]

    // int i [] = {100, 200, 300 , 400 ,500 , 600 ,700 ,800 ,900, 1000 , 1100 } ;

    // for(int i = 100 ; i < 1200 ; i += 100)
    // {
    //     if(i == 100 )
    //     {
    //         cout << i << endl; 
    //     } else if(i == 1100 )
    //     {
    //         cout << i << endl;
    //     } else
    //     {
    //         cout << i << endl;
    //         cout << i << endl;

    //     }

        
    // Assigmrnt [20]


    // string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    // Output Needed
    // "Osama"
    // "Ahmed"
    // "Hagar"
    // "Salwa"
    // cout << size(names[0]) ; // Testing 

    // for(int i = 0 ; i < 6 ; i++)
    // {
    //     if( size(names[i]) == 5 )
    //     {
    //         cout << names[i] << endl;
    //     }
    // }

    // return 0 ;  

    // }
