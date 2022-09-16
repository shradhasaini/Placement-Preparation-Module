class Solution {
public:
    string simplifyPath(string path) {
        
        int n = path.size();

        vector<string> st;
        st.push_back("/");

        for (int i = 0; i < n; i++)
        {
            int idx = i + 1;
            if ( path[i] == '/') {
                
                string str = "";

                while ( idx < n && path[idx] != '/') {
                    str += path[idx++];
                }


                if ( !str.empty()) {

                    if ( str == "..") {
                        if ( st.back() != "/") {
                            st.pop_back();
                        }
                    } else if ( str != ".") {
                        st.push_back(str);
                    }
                }
            }

            i = idx-1;
        }

        string str = "";
        for (int i = 1; i < st.size(); ++i)
        {
            str += "/" + st[i];
        }

        return str.size() == 0 ? "/" : str;
    }
};