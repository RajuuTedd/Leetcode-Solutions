// Last updated: 12/10/2025, 8:28:12 AM
class Solution {
public:

    int backspacecnt(const string& s,int index){
        int back = 0;
        while(index>=0){
            if(s[index] =='#'){
                back++;
            }
            else if( back > 0){
                back--;
            }
            else{
                break;
            }
            index--;
        }
        return index;
    }
    bool backspaceCompare(string s, string t) {
        int l = s.length()-1;
        int r = t.length()-1;

        while(l >= 0 || r >= 0){
            l = backspacecnt(s,l);
            r = backspacecnt(t,r);

            if(l < 0 && r < 0) return true;

            if(l<0 || r<0) return false;

            if(s[l]!=t[r]) return false;

            l--;
            r--;
        }
        return true;
    }
};