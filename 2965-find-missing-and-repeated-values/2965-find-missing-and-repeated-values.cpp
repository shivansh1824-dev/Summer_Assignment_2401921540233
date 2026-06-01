class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;
        vector<int> freq(N + 1, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                freq[grid[i][j]]++;
            }
        }
        int repeated=-1;
        int missing=-1;
        for (int k = 1; k <= N; k++)
        {
            if(freq[k]==2) repeated=k;
            if(freq[k]==0) missing=k;
        }
        return {repeated,missing};
    }
};