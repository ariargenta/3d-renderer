#ifndef __MODEL_HPP__
#define __MODEL_HPP__

#include <vector>
#include "geometry.hpp"


class Model {

    private:
        std::vector<Vec3f> verts_;
        std::vector<std::vector<int> > faces_;

    public:

        Model(const char* filename);
        ~Model();

        int nverts();
        int nfaces();
        Vec3f vert(int i);
        std::vector<int> face(int idx);
};

#endif // __MODEL_HPP__