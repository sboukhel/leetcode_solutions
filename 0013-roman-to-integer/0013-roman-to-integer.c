int romanToInt(char* s) {
    int tab[256] = {0};
    int result;
    int i;
    int stoc;

    result = 0;
    tab['I'] = 1;
    tab['V'] = 5;
    tab['X'] = 10;
    tab['L'] = 50;
    tab['C'] = 100;
    tab['D'] = 500;
    tab['M'] = 1000;
    i = 0;
    while (s[i])
    {
        if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
        {
            stoc = tab[s[i + 1]] - tab[s[i]];
            result = result + stoc;
            i += 2;
        }
        else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
        {
            stoc = tab[s[i + 1]] - tab[s[i]];
            result = result + stoc;
            i += 2;
        }
        else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
        {
            stoc = tab[s[i + 1]] - tab[s[i]];
            result = result + stoc;
            i += 2;
        }
        else
        {
            result = result + tab[s[i]];
            i++;
        }
    }
    return (result);
}