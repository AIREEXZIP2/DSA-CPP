// Problem Statement

// XOR Query - CodeStudio

// Link - https://www.codingninjas.com/codestudio/problems/xor-query_893314

vector<int> xorQuery(vector<vector<int>> &queries)
{
	// Write your code here
    vector<int> x;

   int xo=0;
   for(int i=0;i<queries.size();i++)
   {
       if(queries[i][0]==1)
       {
            x.push_back(queries[i][1]);
       }    
       else
           xo^=queries[i][1];
   }

   int j=0;
   for(int i=0;i<queries.size();i++)
   {
       if(queries[i][0]==1)
       {
          x[j++]^=xo;
       }    
       else
           xo^=queries[i][1];
   }
   return x;
}
