class Solution {
public:
    string addBinary(string a, string b) {
        string c="",r="";
        
        if(a.size()>b.size())
        {
            int y=a.size()-b.size();
            for(int i=0;i<y;i++)
            {
                b.insert(0,"0");   //Inserting 0 in short string to make both equal
            }
        }
        else
        {
            int y=b.size()-a.size();
            for(int i=0;i<y;i++)
            {
                a.insert(0,"0");    //Inserting 0 in short string to make both equal
            }
        }
        
       
            for(int j = b.size()-1;j>=0;j--)
            {
                
                if(a[j]=='1' && b[j]=='1')
                {
                    if(r=="1")   //r -> remainder
                        c.insert(0,"1");
                    else
                        c.insert(0,"0");
                    
                    r="1"; 
                }
                
                else if((a[j]=='1' && b[j]=='0') || (a[j]=='0' && b[j]=='1'))
                {
                    if(r=="1")
                    {
                        c.insert(0,"0");
                        r="1";
                    }
                    else
                        c.insert(0,"1");
                    
                }
                
                else if(a[j]=='0' && b[j]=='0')
                {
                    if(r=="1"){
                        c.insert(0,"1");
                        r="0";
                    }
                    else
                        c.insert(0,"0");
                }
                cout<<c<<"\n";
            }
            if(r=="1")
                c.insert(0,"1");
        
        return c;
    }
};