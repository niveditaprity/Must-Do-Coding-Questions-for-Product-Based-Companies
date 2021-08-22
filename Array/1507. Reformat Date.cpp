class Solution {
public:
    unordered_map<string, string> mp = {
        {"Jan", "01"},
        {"Feb", "02"},
        {"Mar", "03"},
        {"Apr", "04"},
        {"May", "05"},
        {"Jun", "06"},
        {"Jul", "07"},
        {"Aug", "08"},
        {"Sep", "09"},
        {"Oct", "10"},
        {"Nov", "11"},
        {"Dec", "12"}
    };   
    string getmonth(string month)
    {
        return mp[month];
    }
    string getDate(string date)
    {
        string temp=date.substr(0,date.length()-2);
        return temp.length()==1? "0"+temp:temp;
    }
    string reformatDate(string date) { 
       vector<string>tokens;
        stringstream stream(date);
        string intermediate;
        while(getline(stream,intermediate,' '))
        {
            tokens.push_back(intermediate);
        }
        return tokens[2]+"-"+getmonth(tokens[1])+"-"+getDate(tokens[0]);
    }
};
