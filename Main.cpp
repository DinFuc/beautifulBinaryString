string change(string s)
{
    string res = "";
    for(int i = 0; i < s.size();){
        if(s[i] != s[i + 1]){
            res += s[i];
            i++;
        }
        else i += 2;
    }
    return res;
}
bool beautifulBinaryString(string binaryString)
{
    while(binaryString.find("AA") != string::npos || binaryString.find("BB") != string::npos)
        binaryString = change(binaryString);
    return binaryString == "";
}
