#include <string.h>
char* reverseVowels(char* s) {
    int i = 0;
    int k = strlen(s) - 1;
    int tab[256] = {0};
    tab['A'] = 1;
    tab['U'] = 1;
    tab['E'] = 1;
    tab['O'] = 1;
    tab['I'] = 1;
    tab['a'] = 1;
    tab['u'] = 1;
    tab['e'] = 1;
    tab['o'] = 1;
    tab['i'] = 1;
    while (s[i])
    {
        if (tab[s[i]] == 1)
        {
            while (i < k && s[k])
            {
                if (tab[s[k]] == 1)
                {
                    char tmp = s[i];
                    s[i] = s[k];
                    s[k] = tmp;
                    k--;
                    break;
                }
                k--;
            }
        }
        i++;
    }
    return s;
}