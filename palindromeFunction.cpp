bool isPalindrome(const std::string & text){
    int counter = 0;
    for(auto i = 0; i < (text.size()/2); i++)
        if(text[i]==text[text.size()-i-1])
            counter++;
    return(counter==(text.size()/2));
}
