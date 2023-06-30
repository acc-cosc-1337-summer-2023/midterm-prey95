#include "question1.h"

bool is_palindrome(const string& word)
{
    int i = 0;
    int z = word.size();

    for(i; i < word.size(); i++){
        if(word[i] == word[z-1]){
            z--;
        }else{
            return false;
        }  
    }
    return true;
}