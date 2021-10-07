//https://leetcode.com/problems/student-attendance-record-i/
class Solution {
public:
    bool checkRecord(string s) {
    int count = 0; int late =0 ; int absent = 0;
    for(int i=0;i<s.size(); ++i){
        if(s[i] == 'A'){
            absent++ ;
        }
        size_t found = s.find("LLL");
        if(found != s.npos){ // can use this also
            late =  3 ;
        }else{
            if(s[i] == 'L'){
                late = 0;
            }
        }
        // cout << late << endl ;

    } // for loop ends
    if(absent < 2 && late < 3){
        // cout << "true " << late << " " << absent << endl ;
        return 1 ;
    }else{
        // cout << "false " << late << " " << absent  << endl ;
        return 0 ;
    }
        
    }
};
