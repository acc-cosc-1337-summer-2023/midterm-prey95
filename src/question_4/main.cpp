#include "question4.h"

int main()
{
    int input, result;

    do{
        do{
            cout<<"Please enter a number from 1-15 or 0 to EXIT: ";
            cin>>input;
            if(input<0 || input>15 || cin.fail()){
                cout<<"Invalid Option"<<"\n";
            }
        }while(input < 0 || input > 15);

        result = get_fib_sequence(input);
        cout << result << "\n";

    }while(input != 0);


    return 0;
}