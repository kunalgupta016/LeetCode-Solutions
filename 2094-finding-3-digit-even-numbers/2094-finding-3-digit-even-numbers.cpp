
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;

        for (int i = 100; i <= 999; i++) {

            if (i % 2 != 0) continue;

            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;

            vector<int> temp = digits;

            auto it1 = find(temp.begin(), temp.end(), a);
            if (it1 == temp.end()) continue;
            temp.erase(it1);

            auto it2 = find(temp.begin(), temp.end(), b);
            if (it2 == temp.end()) continue;
            temp.erase(it2);

            auto it3 = find(temp.begin(), temp.end(), c);
            if (it3 == temp.end()) continue;

            ans.push_back(i);
        }

        return ans;
    }
};
