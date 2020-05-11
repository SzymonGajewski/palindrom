bool isPalindrome(const std::string & text){
    for(auto i = 0; i < (text.size()/2); i++)
        return(text[i]==text[text.size()-i-1]);
}
