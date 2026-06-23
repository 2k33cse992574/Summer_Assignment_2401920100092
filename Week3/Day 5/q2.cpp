/*
Question: Number of Recent Calls (LC 933)
Approach: Using a queue to keep track of recent pings
Time complexity: O(1) for each ping operation
Difficulty: Easy
Concept: Queue
*/

class RecentCounter {
    private:
    queue<int> q;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
         q.push(t);  
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */