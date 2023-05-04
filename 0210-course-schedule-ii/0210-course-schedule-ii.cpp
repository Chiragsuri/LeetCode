#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
private:
    class DetectCycleGraph {
    private:
        int V;
        std::vector<std::vector<int>> edges;

    public:
        DetectCycleGraph(int n) : V(n), edges(n) {}

        void addEdge(int i, int j) {
            edges[i].push_back(j);
        }

        std::vector<int> l;

        std::vector<int> isCycle(DetectCycleGraph& graph) {
            std::vector<bool> visited(V, false);
            std::vector<bool> curRec(V, false);
            for (int i = 0; i < V; i++) {
                if (isCycleUtil(visited, curRec, i)) {
                    return {};
                }
            }

            std::vector<int> res(V);
            int index = 0;
            for (int i : l) {
                res[index] = i;
                index++;
            }

            return res;
        }

        bool isCycleUtil(std::vector<bool>& visited, std::vector<bool>& curRec, int i) {
            if (!visited[i]) {
                visited[i] = true;
                curRec[i] = true;

                std::vector<int> neighbours = edges[i];
                for (int v : neighbours) {
                    if (!visited[v] && isCycleUtil(visited, curRec, v)) {
                        return true;
                    }
                    else if (curRec[v]) {
                        return true;
                    }
                }
                l.push_back(i);
            }

            curRec[i] = false;

            return false;
        }
    };

public:
    std::vector<int> findOrder(int numCourses, std::vector<std::vector<int>>& prerequisites) {
        DetectCycleGraph graph(numCourses);
        for (auto& sub : prerequisites) {
            graph.addEdge(sub[0], sub[1]);
        }
        return graph.isCycle(graph);
    }
};
