// char* toLowerCase(char* s) {
//     static char word[100];
//     strncpy(word, s, 99);
//     word[99] = '\0';

//     for(int i=0;i<100;i++){
//         if(word[i] <= 90 && word[i] >= 65){
//             word[i]=word[i]+32;
//         }
//     }    
//     return word;
// }


#include <string.h>
#include <stdlib.h> // Required for malloc

char* toLowerCase(const char* s) {
    // 1. Get the exact length of the incoming string
    int len = strlen(s);
    
    // 2. Allocate an array of the exact size needed (+1 for the '\0' terminator)
    char* word = (char*)malloc((len + 1) * sizeof(char));
    
    // 3. Copy the string normally
    strcpy(word, s);

    // 4. Run your exact logic, but loop up to 'len' instead of a hardcoded 100
    for(int i = 0; i < len; i++){
        if(word[i] <= 90 && word[i] >= 65){
            word[i] = word[i] + 32;
        }
    }
    
    return word;
}