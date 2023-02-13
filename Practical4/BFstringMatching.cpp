#include <bits/stdc++.h>

using namespace std;

int bruteForce(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m)
            return i;
    }
    return -1;
}

int main() {
    string text, pattern;

    cout << "Enter the text string: ";
    cin >> text;

    cout << "Enter the pattern string: ";
    cin >> pattern;

    int index = bruteForce(text, pattern);
    if (index != -1)
        cout << "The pattern was found at index " << index << endl;
    else
        cout << "The pattern was not found in the text" << endl;

    return 0;
}
