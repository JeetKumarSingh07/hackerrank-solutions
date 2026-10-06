// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/castle-on-the-grid/problem?isFullScreen=true
// Problem     Castle on the Grid
// Difficulty  Medium
// Subdomain   Queues
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-06, 12:14 p.m.
// Technique   breadth-first-search-with-line-traversal
// Time        O(n^3)
// Space       O(n^2)
// Insight     The algorithm performs a breadth-first search where each state transition explores all reachable cells in a straight line until a boundary or obstacle is encountered, updating the distance for each newly visited cell.
// Interview   Before: "I would use a standard BFS to find the shortest path." After: "Since the piece moves in lines, I must extend the search in each direction until hitting an obstacle. This results in O(n^3) time complexity, as each of the n^2 cells can be visited and scanned in four directions."
// Pitfalls    (1) Failing to update the distance for all cells in the line, which prevents subsequent paths from correctly identifying the shortest distance to those intermediate cells.  (2) Stopping the line traversal prematurely upon encountering a previously visited cell, which prevents the algorithm from reaching cells further along the same line.  (3) Incorrectly resetting the search direction or boundary conditions, leading to out-of-bounds memory access when checking grid[nx][ny].
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumMoves' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING_ARRAY grid
 *  2. INTEGER startX
 *  3. INTEGER startY
 *  4. INTEGER goalX
 *  5. INTEGER goalY
 */

int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {
    int n = grid.size();
    
    // Distance array initialized to -1 (unvisited)
    vector<vector<int>> dist(n, vector<int>(n, -1));
    queue<pair<int, int>> q;
    
    // Direction vectors: Down, Up, Right, Left
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    q.push({startX, startY});
    dist[startX][startY] = 0;
    
    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        
        int x = current.first;
        int y = current.second;
        
        if (x == goalX && y == goalY) {
            return dist[x][y];
        }
        
        // Explore all 4 directions
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            // Move along straight line until blocked by 'X' or grid boundary
            while (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] != 'X') {
                if (dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
                nx += dx[i];
                ny += dy[i];
            }
        }
    }
    
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int startX = stoi(first_multiple_input[0]);

    int startY = stoi(first_multiple_input[1]);

    int goalX = stoi(first_multiple_input[2]);

    int goalY = stoi(first_multiple_input[3]);

    int result = minimumMoves(grid, startX, startY, goalX, goalY);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char ch) { return !isspace(ch); })
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !isspace(ch); }).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string token;
    stringstream ss(str);

    while (ss >> token) {
        tokens.push_back(token);
    }

    return tokens;
}
