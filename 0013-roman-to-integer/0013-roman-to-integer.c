int romanToInt(char* s) {
     int values[128] = {0};
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;
    
    int total = 0;
    int n = strlen(s);
    
    for (int i = 0; i < n; i++) {
        int current = values[(int)s[i]];
        int next = (i + 1 < n) ? values[(int)s[i + 1]] : 0;
        
        if (current < next) {
            total -= current;
        } else {
            total += current;
        }
    }
    
    return total;
}