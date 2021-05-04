//#pragma once
#include <ostream>
#include <fstream>
#include <iostream>

class Cube {
    private:
    int x, y, z, len;
    public:
    Cube(int x, int y, int z, int len) : x(x), y(y), z(z), len(len) {}
    void print() const {
        std::ofstream of("cube.stl");
        of << "solid OpenSCAD_Model\n"
        "facet normal -0 0 1\n"
            "outer loop\n"
            "vertex 0 30 30\n"
            "vertex 30 0 30\n"
            "vertex 30 30 30\n"
            "endloop\n"
        "endfacet\n"
        "facet normal 0 0 1\n"
            "outer loop\n"
            "vertex 30 0 30\n"
            "vertex 0 30 30\n"
            "vertex 0 0 30\n"
            "endloop\n"
        "endfacet\n"
        "facet normal 0 0 -1\n"
            "outer loop\n"
            "vertex 0 0 0\n"
            "vertex 30 30 0\n"
            "vertex 30 0 0\n"
            "endloop\n"
        "endfacet\n"
        "facet normal -0 0 -1\n"
            "outer loop\n"
            "vertex 30 30 0\n"
            "vertex 0 0 0\n"
            "vertex 0 30 0\n"
            "endloop\n"
        "endfacet\n"
        "facet normal 0 -1 0\n"
            "outer loop\n"
            "vertex 0 0 0\n"
            "vertex 30 0 30\n"
            "vertex 0 0 30\n"
            "endloop\n"
        "endfacet\n"
        "facet normal 0 -1 -0\n"
            "outer loop\n"
            "vertex 30 0 30\n"
            "vertex 0 0 0\n"
            "vertex 30 0 0\n"
            "endloop\n"
        "endfacet\n"
        "facet normal 1 -0 0\n"
            "outer loop\n"
            "vertex 30 0 30\n"
            "vertex 30 30 0\n"
            "vertex 30 30 30\n"
            "endloop\n"
        "endfacet\n"
        "facet normal 1 0 0\n"
            "outer loop\n"
            "vertex 30 30 0\n"
            "vertex 30 0 30\n"
            "vertex 30 0 0\n"
            "endloop\n"
        "endfacet\n"
        "facet normal 0 1 -0\n"
            "outer loop\n"
            "vertex 30 30 0\n"
            "vertex 0 30 30\n"
            "vertex 30 30 30\n"
            "endloop\n"
        "endfacet\n"
        "facet normal 0 1 0\n"
            "outer loop\n"
            "vertex 0 30 30\n"
            "vertex 30 30 0\n"
            "vertex 0 30 0\n"
            "endloop\n"
        "endfacet\n"
        "facet normal -1 0 0\n"
            "outer loop\n"
            "vertex 0 0 0\n"
            "vertex 0 30 30\n"
            "vertex 0 30 0\n"
            "endloop\n"
        "endfacet\n"
        "facet normal -1 -0 0\n"
            "outer loop\n"
            "vertex 0 30 30\n"
            "vertex 0 0 0\n"
            "vertex 0 0 30\n"
            "endloop\n"
        "endfacet\n"
        "endsolid OpenSCAD_Model\n";
    }
    friend std::ostream& operator <<(std::ostream& s, const Cube a);
};

    std::ostream& operator <<(std::ostream& s, const Cube a) {
        a.print();
        return s;
    }