class Solution {
    vector<string> res;
public:
    
    void helper (string ip, string op, int parts) {
        if (parts == 0 && ip.length() == 0) {
            op.pop_back();
            cout << op << endl;
            res.push_back(op);
            return;
        }
        
        if (ip.length() == 0 || parts == 0) {
            return;
        }
        
        int end = (ip.length() < 3) ? ip.length() : 3;
        for (int i = 1; i <= end; i++) {
            string temp = ip.substr(0, i);
            int val = stoi(temp);
            //cout << "temp is" << temp << endl;
            if (val > 255) {
                break;
            }
            //cout << "temp is" << temp << endl;
            if (val > 0) {
                while (temp[0] == '0') {
                    temp.erase(0);
                }
            }
            if (temp.length() == 0) {
                continue;
            }
            
            if (val == 0 and temp.length() > 1) {
               continue;
            }
            
            string op1 = op;
            op1 += (temp + '.');
            string ip1 = ip.substr(i);
            //cout << "ip1 is " << ip1 << endl;
            helper(ip1, op1, parts-1);
        }
    }
    
    vector<string> restoreIpAddresses(string s) {
        if (s.length() < 4) {
            return res;
        }
        string op = "";
        helper(s, op, 4);
        return res;
    }
};