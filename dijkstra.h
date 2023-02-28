#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include "graphics.h"
#include <cmath>
#include <vector>
#include <utility>

typedef std::pair<int, int> pi;
typedef std::pair<int, pi> node;

class DijkstraAlgorithm
{
    private:
        int rows, columns;
        int **grid;
        std::vector<pi> obstacles;
        
        int start_position[2];
        int goal_position[2];

        std::vector<pi> restore_path(node **parent);
        bool check_obstacle(int position[2]);

    public:
        DijkstraAlgorithm(int i_rows, int i_column, int start[2], int end[2], std::vector<pi> i_obstacles);
        DijkstraAlgorithm() = default;

        std::vector<pi> plan();

};

#endif