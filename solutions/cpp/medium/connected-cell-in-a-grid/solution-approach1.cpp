// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/connected-cell-in-a-grid/problem?isFullScreen=true
// Problem     Connected Cells in a Grid
// Difficulty  Medium
// Subdomain   Search
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-06, 12:19 p.m.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'connectedCell' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY matrix as parameter.
 */

// Helper function to perform Depth First Search (DFS)
int dfs(vector<vector<int>>& matrix, int r, int c, int n, int m) {
    // Base case: Out of bounds or cell is not 1
    if (r < 0 || r >= n || c < 0 || c >= m || matrix[r][c] != 1) {
        return 0;
    }

    // Mark current cell as visited by changing 1 to 0
    matrix[r][c] = 0;
    int size = 1;

    // Explore all 8 directions (horizontal, vertical, diagonal)
    for (int dr = -1; dr <= 1; ++dr) {
        for (int dc = -1; dc <= 1; ++dc) {
            if (dr != 0 || dc != 0) {
                size += dfs(matrix, r + dr, c + dc, n, m);
            }
        }
    }

    return size;
}

int connectedCell(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int maxRegion = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 1) {
                // Find size of region starting at (i, j)
                int currentRegion = dfs(matrix, i, j, n, m);
                maxRegion = max(maxRegion, currentRegion);
            }
        }
    }

    return maxRegion;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        string matrix_row_temp_temp;
        getline(cin, matrix_row_temp_temp);

        vector<string> matrix_row_temp = split(rtrim(matrix_row_temp_temp));

        for (int j = 0; j < m; j++) {
            int matrix_row_item = stoi(matrix_row_temp[j]);

            matrix[i][j] = matrix_row_item;
        }
    }

    int result = connectedCell(matrix);

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
