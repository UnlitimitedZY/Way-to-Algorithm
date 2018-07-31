// MIT License
// Copyright 2018 linrongbin16@gmail.com

#pragma once
#include <vector>
#include <string>

struct Node {
    char number[9];

    explicit Node(const std::string &s);
    friend bool operator==(const Node &a, const Node &b);
    friend int operator-(const Node &a, const Node &b);
};

std::vector<Node> AStarSearch(Node beg, Node end);
