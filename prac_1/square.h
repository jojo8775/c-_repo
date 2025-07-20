
class Square{
    public:
        explicit Square (double length);
        Square(double length, double breadth);
        ~Square();

        double getArea() const;

    private:
        double length;
        double breadth;
};

