class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size();
        vector<long long> pre(n + 1);

        for (int i = 0; i < n; i++)
            pre[i + 1] = pre[i] + tasks[i];

        long long total = pre[n];
        int idx = 0;
        long long offset = 0;
        vector<int> ans;

        for (long long t : shifts) {
            long long progress = pre[idx] + offset;
            long long remain = total - progress;

            if (t >= remain) {
                ans.push_back(0);
                idx = 0;
                offset = 0;
            } else {
                long long np = progress + t;
                idx = upper_bound(pre.begin(), pre.end(), np) - pre.begin() - 1;
                offset = np - pre[idx];
                ans.push_back(n - idx);
            }
        }

        return ans;
    }
};