class Solution {
public:

long atoi(string s,int sign , int i , long result){
    if(sign*result>=INT_MAX)
    return INT_MAX;
    if(sign*result<=INT_MIN)
    return INT_MIN;
    if(i>=s.size() or s[i]<'0' or s[i]>'9')
    return sign*result;

    result = atoi(s,sign,i+1,(result*10+(s[i]-'0')));
    return result;
}
    int myAtoi(string s) {
        int i=0,n=s.size(),sign=1;
        while(i<n and s[i]==' ')
        i++;
        if(s[i]=='-'){
            sign=-1,i++;
        }
        else if(s[i]=='+')
        i++;
        return atoi(s,sign,i,0);
    }
};