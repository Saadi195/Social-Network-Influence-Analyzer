#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>
#include <limits>
#include <queue>
class Graph {
private:
    std::unordered_map<std::string, std::unordered_set<std::string>> adjacencyList;

public:
    // Add a connection between two users
    void addConnection(const std::string& user1, const std::string& user2) {
        adjacencyList[user1].insert(user2);
        adjacencyList[user2].insert(user1);
    }
    void clear() {
        adjacencyList.clear();
    }
    void removeConnection(const std::string& user1, const std::string& user2) {
        adjacencyList[user1].erase(user2);
        adjacencyList[user2].erase(user1);
    }
    bool Graph::isEmpty() const {
        return adjacencyList.empty();
    }
    const std::unordered_map<std::string, std::unordered_set<std::string>>& Graph::getAdjacencyList() const {
        return adjacencyList;
    }

    bool isConnectionExist(const std::string& user1, const std::string& user2) {
        return adjacencyList[user1].count(user2) > 0 && adjacencyList[user2].count(user1) > 0;
    }

    // Simulate information spread
    std::vector<std::string> simulateInformationSpread(const std::string& startNode) {
        std::vector<std::string> spreadOrder;
        if (adjacencyList.find(startNode) == adjacencyList.end()) {
            return spreadOrder; // Start node does not exist
        }

        std::queue<std::string> q;
        std::unordered_set<std::string> visited;

        q.push(startNode);
        visited.insert(startNode);

        while (!q.empty()) {
            std::string current = q.front();
            q.pop();
            spreadOrder.push_back(current);

            for (const auto& neighbor : adjacencyList[current]) {
                if (visited.find(neighbor) == visited.end()) {
                    visited.insert(neighbor);
                    q.push(neighbor);
                }
            }
        }
        return spreadOrder;
    }
    std::unordered_map<std::string, int> bfsShortestPaths(const std::string& start) const {
        std::unordered_map<std::string, int> distances;
        for (const auto& node : adjacencyList) {
            distances[node.first] = std::numeric_limits<int>::max(); // Initialize all distances to infinity
        }

        std::queue<std::string> q;
        distances[start] = 0;
        q.push(start);

        while (!q.empty()) {
            std::string current = q.front();
            q.pop();

            for (const auto& neighbor : adjacencyList.at(current)) {
                if (distances[neighbor] == std::numeric_limits<int>::max()) { // Not visited
                    distances[neighbor] = distances[current] + 1;
                    q.push(neighbor);
                }
            }
        }
        return distances;
    }
    std::unordered_map<std::string, double> calculateBetweennessCentrality() {
        std::unordered_map<std::string, double> centrality;

        // Initialize centrality for all nodes
        for (const auto& node : adjacencyList) {
            centrality[node.first] = 0.0;
        }

        // Calculate betweenness centrality using BFS for shortest paths
        for (const auto& sourceNode : adjacencyList) {
            std::unordered_map<std::string, int> shortestPathCount;
            std::unordered_map<std::string, std::vector<std::string>> predecessors;
            std::unordered_map<std::string, int> distance;
            std::queue<std::string> q;

            // Initialize
            for (const auto& node : adjacencyList) {
                shortestPathCount[node.first] = 0;
                distance[node.first] = -1;
            }
            shortestPathCount[sourceNode.first] = 1;
            distance[sourceNode.first] = 0;

            q.push(sourceNode.first);

            // BFS to find shortest paths
            while (!q.empty()) {
                std::string current = q.front();
                q.pop();

                for (const auto& neighbor : adjacencyList[current]) {
                    if (distance[neighbor] == -1) { // Unvisited
                        q.push(neighbor);
                        distance[neighbor] = distance[current] + 1;
                    }
                    if (distance[neighbor] == distance[current] + 1) {
                        shortestPathCount[neighbor] += shortestPathCount[current];
                        predecessors[neighbor].push_back(current);
                    }
                }
            }

            // Calculate dependencies
            std::unordered_map<std::string, double> dependency;
            for (const auto& node : adjacencyList) {
                dependency[node.first] = 0.0;
            }

            std::vector<std::string> nodes;
            for (const auto& node : adjacencyList) {
                nodes.push_back(node.first);
            }
            std::reverse(nodes.begin(), nodes.end());

            for (const auto& node : nodes) {
                for (const auto& pred : predecessors[node]) {
                    double contribution = (shortestPathCount[pred] / static_cast<double>(shortestPathCount[node])) * (1 + dependency[node]);
                    dependency[pred] += contribution;
                }
                if (node != sourceNode.first) {
                    centrality[node] += dependency[node];
                }
            }
        }

        // Normalize the centrality values
        for (auto& entry : centrality) {
            entry.second /= 2.0; // Since undirected graph counts paths twice
        }

        return centrality;
    }
    // Get all connections as a vector of tuples (user1, user2)
    std::vector<std::tuple<std::string, std::string>> getConnections() const {
        std::vector<std::tuple<std::string, std::string>> connections;
        for (const auto& user : adjacencyList) {
            for (const auto& connection : user.second) {
                if (user.first < connection) { // Avoid duplicate pairs
                    connections.emplace_back(user.first, connection);
                }
            }
        }
        return connections;
    }
}; 


//#pragma once
//#ifndef GRAPH_H
//#define GRAPH_H
//
//#include <unordered_map>
//#include <unordered_set>
//#include <string>
//#include <vector>
//#include <tuple>
//#include <queue>
//#include <limits>
//
//class Graph {
//private:
//    std::unordered_map<std::string, std::unordered_set<std::string>> adjacencyList;
//
//public:
//    // Add a connection between two users
//    void addConnection(const std::string& user1, const std::string& user2) {
//        adjacencyList[user1].insert(user2);
//        adjacencyList[user2].insert(user1);
//    }
//
//    void removeConnection(const std::string& user1, const std::string& user2) {
//        adjacencyList[user1].erase(user2);
//        adjacencyList[user2].erase(user1);
//    }
//
//    bool isEmpty() const {
//        return adjacencyList.empty();
//    }
//
//    const std::unordered_map<std::string, std::unordered_set<std::string>>& getAdjacencyList() const {
//        return adjacencyList;
//    }
//
//    bool isConnectionExist(const std::string& user1, const std::string& user2) {
//        return adjacencyList[user1].count(user2) > 0 && adjacencyList[user2].count(user1) > 0;
//    }
//
//    // Get all connections as a vector of tuples (user1, user2)
//    std::vector<std::tuple<std::string, std::string>> getConnections() const {
//        std::vector<std::tuple<std::string, std::string>> connections;
//        for (const auto& user : adjacencyList) {
//            for (const auto& connection : user.second) {
//                if (user.first < connection) { // Avoid duplicate pairs
//                    connections.emplace_back(user.first, connection);
//                }
//            }
//        }
//        return connections;
//    }
//
//    //// Calculate shortest paths using BFS for centrality calculation
//    //std::unordered_map<std::string, int> bfsShortestPaths(const std::string& start) {
//    //    std::unordered_map<std::string, int> distances;
//    //    for (const auto& pair : adjacencyList) {
//    //        distances[pair.first] = std::numeric_limits<int>::max(); // Initialize all distances to max
//    //    }
//
//    //    distances[start] = 0;
//    //    std::queue<std::string> q;
//    //    q.push(start);
//
//    //    while (!q.empty()) {
//    //        std::string node = q.front();
//    //        q.pop();
//
//    //        for (const auto& neighbor : adjacencyList[node]) {
//    //            if (distances[neighbor] == std::numeric_limits<int>::max()) { // Not visited
//    //                distances[neighbor] = distances[node] + 1;
//    //                q.push(neighbor);
//    //            }
//    //        }
//    //    }
//
//    //    return distances;
//    //}
//};
//
//#endif
