#pragma once
namespace shape {
    class Cube {
        public:
            double getArea();
            void setLength(double);
        private:
            double _length;
    };
}