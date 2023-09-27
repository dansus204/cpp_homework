string repeat1(string_view s) {
    string str{s};
    return str + str;
}

void repeat2(string& s) {
    s = s + s;
}

void repeat3(string* ps) {
    *ps = *ps + *ps;
}

string* repeat4(string_view s) {
    string* ps = new string;
    *ps = s;
    *ps = *ps + *ps;
    return ps;
}
