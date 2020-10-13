class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans ; 
        
        vector < int > v ; 
        map < char , int > mp , c ; 
        
        
        int n = s.length() ; 
        
        for ( auto i : s )
                    mp [ i ] ++  ; 
        
        for ( int i = 0 ; i < n ; i ++ )
        {
            
            while ( ans.size() and mp [ ans.back() ] > 0 and ans.back() > s [ i ] and c [ s [ i ] ]  == 0 )
            {
                c [ ans.back() ] = 0 ; 
                ans.pop_back () ; 
            }
            
            if ( c [ s [ i ] ] == 0 )
            {
                c [ s [ i ] ] = 1 ; 
                ans = ans+ s [ i ]  ; 
            }
            
            mp [ s [ i ] ] -- ;
        }
        
        return ans ;
    }
};
