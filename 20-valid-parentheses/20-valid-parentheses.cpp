class Solution {
public:
	unordered_map<char,int> symbol={{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1}};
	bool isValid(string s) {
		stack<char> st;
		for(char bracket:s)
		{
			if(symbol[bracket]<0)
				st.push(bracket);
			else
			{
				if(st.empty()) return false;
				char top=st.top();
				st.pop();
				if(symbol[top]+symbol[bracket] != 0)
					return false;
			}
		}
		if(st.empty()) return true;
		else return false;

	}
};