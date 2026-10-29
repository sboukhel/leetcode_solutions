int maxVowels(char* s, int k) {     
    int max = 0;     
    int maxnum = 0;  
    int i = 0;     
    int longht = 0;  
    
    while (s[i]){         
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){             
            max++;         
        }         
        if (max == k){             
            return max;         
        }         
        longht++;                 
        
        
        if (longht == k){             
            if (max > maxnum){                 
                maxnum = max;                 
            }             
            char leaving = s[i - k + 1];
            if (leaving == 'a' || leaving == 'e' || leaving == 'i' || leaving == 'o' || leaving == 'u'){
                max--;
            }
            
            longht--; 
        }     
        i++; 
    }     
    return maxnum; 
}