class Solution {
public:
    
         int distributeCandies(vector<int>& candyType) {
             //  /////////////////////////correct answer only
        /*int n=candyType.size();
        vector<int> a;
        int k=0;
        for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j=0; j<i; j++)
           if (candyType[i] == candyType[j])
               break;
 
        // If not printed earlier, then print it
        if (i == j)
          a.push_back(candyType[i]);
            if(a.size()>(n/2))
                break;
    }
        if(a.size()>(n/2))
            return n/2;
        else
            return a.size();
         }*/
             set<int>s;
        for(int i =0; i<candyType.size(); i++){
            s.insert(candyType[i]);
        }
        int check =candyType.size()/2;
        if(s.size()<=check)  return s.size();
        return check;
         }
};