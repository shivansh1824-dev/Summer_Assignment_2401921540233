class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        int totalGas = 0;
        int totalCost = 0;
        int gasReserve = 0;
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            totalGas += gas[i];
            totalCost += cost[i];
            gasReserve += gas[i] - cost[i];
            if (gasReserve < 0)
            {
                start = i + 1;
                gasReserve = 0;
            }
        }
        if (totalGas < totalCost)
        {
            return -1;
        }
        return start;
    }
};