bool isPalindrome(int x) {
    if (x<0)
        return false;

    int digit,n=x;
    long int sum=0;
    while (x!=0){
        digit=x%10;
        sum=(sum*10)+digit;
        x=x/10;
    }

    return (sum == n);
}
