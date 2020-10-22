class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        for (int i = 0; i < as.size(); ++i) {
            if (i and as[i-1] > 0 and as[i] < 0) {
                int p = i-1, q = i;
                while (p > -1 and q < as.size() and as[p] > 0 and as[q] < 0) {
                    int left = abs(as[p]), right = abs(as[q]);
                    if (left == right) --p, ++q;
                    else left > right ? ++q : --p;
                }
                as.erase(as.begin()+p+1, as.begin()+q);
                i = p+1;
            }
        }
        return as;
    }
};
