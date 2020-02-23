class Cube {
    public:
        Cube();
        Cube(int);
        Cube(const Cube&);
        const Cube& operator=(const Cube&);
        int getVolunme();
    private:
        int _length;
};