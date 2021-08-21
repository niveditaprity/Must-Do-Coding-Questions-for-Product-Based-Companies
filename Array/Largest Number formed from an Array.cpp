class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool comp(string s1,string s2)
	{
	    return s1+s2>s2+s1;
	}
	string printLargest(vector<string> &arr) {
	  sort(arr.begin(),arr.end(),comp);
	  string s1="";
	  for(int i=0;i<arr.size();i++)
	  {
	      s1+=arr[i];
	  }
	  return s1;// code here
	}
};
