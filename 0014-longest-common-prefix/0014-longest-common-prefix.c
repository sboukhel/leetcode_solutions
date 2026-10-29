char* longestCommonPrefix(char** strs, int strsSize)
{
    int i;
    int j;
    char* str;

    str = (char*)malloc((strlen(strs[0]) + 1) * sizeof(char));
    str[0] = '\0';

    i = 0;
    while (strs[0][i])
    {
        j = 1;
        while (j < strsSize)
        {
            if (strs[j][i] == '\0' || strs[0][i] != strs[j][i])
                return (str);
            j++;
        }
        str[i] = strs[0][i];
        str[i + 1] = '\0';
        i++;
    }
    return (str);
}