bool isSubsequence(char* s, char* t) {
    int i;
    int j;

    i = 0;
    j = 0;
    while (t[i])
    {
        if (s[j] && s[j] == t[i])
        {
            j++;
        }
        i++;
    }
    if (s[j] == '\0')
        return (true);
    else
        return (false); 
}