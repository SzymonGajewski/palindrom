#include <iostream>
#include <string>

bool isPalindrome(const std::string & text){
    int counter = 0;
    for(auto i = 0; i < (text.size()/2); i++)
        if(text[i]==text[text.size()-i-1])
            counter++;
    return(counter==(text.size()/2));
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