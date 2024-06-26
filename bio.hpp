#ifndef __MORLOC_BIO_TREE_TREE_TYPES_HPP__
#define __MORLOC_BIO_TREE_TREE_TYPES_HPP__

#include <variant>
#include <vector>

template <typename Node, typename Edge, typename Leaf>
struct RootedTree {
    Node data;
    std::vector<std::variant<RootedTree<Node, Edge, Leaf>, Leaf>> children;
    std::vector<Edge> edges;
};

template <typename Node, typename Edge, typename Leaf>
struct UnrootedTree {
    std::vector<std::vector<std::tuple<int, Edge>>> out;
    std::vector<std::variant<Node,Leaf>> verts;
};

template <typename Node, typename Edge, typename Leaf>
struct DirectedTree {
    std::vector<std::vector<std::tuple<int, Edge>>> edge;
    std::vector<std::variant<Node,Leaf>> verts;
};

#endif
