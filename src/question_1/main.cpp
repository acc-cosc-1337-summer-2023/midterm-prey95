#include "question1.h"

int main()
{
    string word;
    int choice;
    bool ans;
    do{
        
        cout<<"Hello Please enter a word: ";
        cin>>word;
        ans = is_palindrome(word);
        if(ans == 1){
            cout<<"True" << "\n";
        }else{
            cout<<"False" << "\n";
        }
        cout<<"Press 1 to CONTINUE or 0 to EXIT"<<"\n";
        cin>>(choice);
    }while(choice != 0);
    return 0;
}