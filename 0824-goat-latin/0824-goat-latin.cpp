class Solution {
public:
    string addcharacter(string &s) {
    char ch = tolower(s[0]);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u') {
        s += "ma";
    } else {
        char c = s[0];
        s = s.substr(1);
        s += c;
        s += "ma";
    }

    return s;
}

    string toGoatLatin(string sentence) {
        string ans;
        int cnt = 1;

        sentence += ' ';

        for (int i = 0; i < sentence.size(); i++) {
            string temp = "";

            while (sentence[i] != ' ') {
                temp += sentence[i];
                i++;
            }

            temp = addcharacter(temp);

            for (int j = 0; j < cnt; j++)
                temp += 'a';

            ans += temp;
            ans += ' ';

            cnt++;
        }

        ans.pop_back();

        return ans;
    }
};