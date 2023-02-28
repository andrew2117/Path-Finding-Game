#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <utility>

class Graphics
{
    private:
        int position[2];
        int previous_position[2];
        sf::Color color;
    

    public:
        Graphics(int i_position[2], sf::Color i_color);
        Graphics() = default;

        void updatePosition(int x, int y);
        int* getPosition() { return position; }
        int*getPreviousPosition() { return previous_position; }
        sf::Color getColor() { return color; }

};


class Grid
{
    private:
        int rows, columns;
        sf::RectangleShape** grid;
        std::vector<std::pair<int, int>> obstacles;

    public:
        Grid(int g_rows, int g_columns, int start_x, int start_y);
        Grid() = default;
        void render(sf::RenderWindow &window, Graphics c1, Graphics c2);
        bool check_obstacle(int position[2]);
        std::vector<std::pair<int, int>>getObstacles() {return obstacles;}
};

#endif