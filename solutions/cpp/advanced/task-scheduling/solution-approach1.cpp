// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/task-scheduling/problem?isFullScreen=true
// Problem     Task Scheduling 
// Difficulty  Advanced
// Subdomain   Search
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-20, 02:26 p.m.
// Technique   segment-tree-lazy-propagation
// Time        O(T * log(MAXD))
// Space       O(MAXD)
// Insight     The segment tree maintains the maximum value of (completion_time - deadline) across all possible deadlines by applying range updates for task durations and querying the global maximum.
// Interview   Before: "How would you track the maximum overshoot as tasks arrive?" After: "I used a segment tree with lazy propagation to perform O(log MAXD) updates and queries, ensuring the maximum overshoot is tracked efficiently as each task's duration is added to all relevant deadlines."
// Pitfalls    (1) The segment tree range must cover the maximum possible deadline value defined in the constraints.  (2) The initial state of the segment tree must correctly represent the baseline overshoot for each deadline before any tasks are added.  (3) The maximum overshoot must be clamped to zero because a task finishing before its deadline results in a negative overshoot value.
// ──────────────────────────────────────────────────

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXD = 100000;

struct Node {
    int max_val;
    int lazy;
};

Node tree[4 * MAXD + 5];

void build(int node, int start, int end) {
    tree[node].lazy = 0;
    if (start == end) {
        tree[node].max_val = -start; // Initial value without any task time added
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node].max_val = max(tree[2 * node].max_val, tree[2 * node + 1].max_val);
}

void push(int node) {
    if (tree[node].lazy != 0) {
        int val = tree[node].lazy;
        
        tree[2 * node].max_val += val;
        tree[2 * node].lazy += val;
        
        tree[2 * node + 1].max_val += val;
        tree[2 * node + 1].lazy += val;
        
        tree[node].lazy = 0;
    }
}

void update(int node, int start, int end, int l, int r, int val) {
    if (r < start || end < l) return;
    if (l <= start && end <= r) {
        tree[node].max_val += val;
        tree[node].lazy += val;
        return;
    }
    
    push(node);
    int mid = (start + end) / 2;
    update(2 * node, start, mid, l, r, val);
    update(2 * node + 1, mid + 1, end, l, r, val);
    
    tree[node].max_val = max(tree[2 * node].max_val, tree[2 * node + 1].max_val);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;

    build(1, 1, MAXD);

    for (int i = 0; i < T; ++i) {
        int d, m;
        cin >> d >> m;
        
        // Add duration 'm' to all deadlines >= d
        update(1, 1, MAXD, d, MAXD, m);
        
        // Query the global maximum overshoot
        int max_overshoot = tree[1].max_val;
        
        // Maximum overshoot cannot be negative
        cout << max(0, max_overshoot) << "\n";
    }

    return 0;
}
