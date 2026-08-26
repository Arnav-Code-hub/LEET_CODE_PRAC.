bool isPalindrome(int x) {
    if (x<0)
        return false;

    int d,n=x;
    long int sum=0;
    while (x!=0){
        d=x%10;
        sum=(sum*10)+d;
        x=x/10;
    }

    return (sum == n);
}
