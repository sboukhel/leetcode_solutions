int compress(char* chars, int charsSize) {
    int i = 0;
    int write = 0;

    while (i < charsSize) {
        char c = chars[i];
        int size = 0;

        while (i < charsSize && chars[i] == c) {
            size++;
            i++;
        }

        chars[write++] = c;

        if (size > 1) {
            char buf[12];
            int len = 0;
            while (size > 0) {
                buf[len++] = '0' + (size % 10);
                size /= 10;
            }
            while (len > 0) {
                chars[write++] = buf[--len];
            }
        }
    }

    return write;
}