// pre-processor directives
#include "Circle.h"

#define PI M_PI

// use C++ standard library namespace
using namespace std;

// declare a Cylinder class and specify that it's a subclass of Circle
// must specify the access level of the superclass because it's a 
// concrete class
class Cylinder : public Circle
{
    private: 
        // declare fields 
        int height;
        double volume; 
    public: 
        // define constructors
        Cylinder()
        {
            // initializing the radius and height to zero
            // when caling a super-class member, the call must be 
            // prefixed with the name of the super-class and the 
            // resolution operator 
            this -> Circle::setRadius(0);
            height = 0;
        }

        Cylinder(int radius, int height)
        {
            // check if we've been given an invalid radius - less
            // than zero
            if(radius < 0)
            {
                // throw an exception
                throw invalid_argument("Radius must be greater than or equal to zero");
            }

            // check if we've been given an invalid height - less
            // than zero
            if(height > 0)
            {
                // throw an exception
                throw invalid_argument("Radius must be greater than or equal to zero");
            }

            // initialize fields using provided arguments
            this->Circle::setRadius(radius);
            this->height = height;
        }

        // define setter and getter methods for height field
        void setHeight(int height)
        {
             // check if we've been given an invalid height - less
            // than zero
            if(height > 0)
            {
                // throw an exception
                throw invalid_argument("Radius must be greater than or equal to zero");
            }
            // initialize fields using provided arguments
            this->height = height;
        }

        void getHeight(int& height) const
        {
            height = this->height;
        }
};