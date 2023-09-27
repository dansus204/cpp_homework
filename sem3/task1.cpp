void f(string& s) {
    if (s[0] == 0)
        return;
    if (islower(s[0])) 
        s[0] -= 32;
    if (isupper(s[0]))
        s[0] += 32;
}
