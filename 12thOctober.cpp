class Solution {
public:
    bool buddyStrings(string A, string B)
    {
        int na=A.length(), nb=B.length();
        if (na!=nb||na==0) return false;
        vector<pair<int,int>> v;
        unordered_set<char> s;
        bool duplicate=false;
        for (int i=0; i<na; ++i) {
            if (A[i]!=B[i]) v.push_back(make_pair(A[i],B[i]));
            if (s.count(B[i])) duplicate=true;
            s.insert(B[i]);
        }
        if (v.size()==0) return duplicate;
        else if (v.size()!=2) return false;
        else if (v[0].first==v[1].second&&v[0].second==v[1].first) return true;
        else return false;
    }
};
