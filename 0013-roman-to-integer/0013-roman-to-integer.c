int romanToInt(char* s) {
    int total = 0;
    int i = 0;

    while (s[i] != '\0') {
        int curr, next;

        if (s[i] == 'I') curr = 1;
        else if (s[i] == 'V') curr = 5;
        else if (s[i] == 'X') curr = 10;
        else if (s[i] == 'L') curr = 50;
        else if (s[i] == 'C') curr = 100;
        else if (s[i] == 'D') curr = 500;
        else curr = 1000; 

        if (s[i+1] == 'I') next = 1;
        else if (s[i+1] == 'V') next = 5;
        else if (s[i+1] == 'X') next = 10;
        else if (s[i+1] == 'L') next = 50;
        else if (s[i+1] == 'C') next = 100;
        else if (s[i+1] == 'D') next = 500;
        else if (s[i+1] == 'M') next = 1000;
        else next = 0;

        if (curr < next) {
            total += (next - curr);
            i += 2;
        } else {
            total += curr;
            i++;
        }
    }

    return total;
}