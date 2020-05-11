#include <iostream>
#include <string>

bool isPalindrome(const std::string & text){
    for(auto i = 0; i < (text.size()/2); i++)
        return(text[i]==text[text.size()-i-1]);
}

int main(){

    std:: string palindrom;
    std::cin >> palindrom;
    if(isPalindrome(palindrom))
        std::cout << "YES" << "\n";
    else 
        std::cout << "NO" << "\n";

    return 0;
}

//no spaces, no capital letter
//only one word to check