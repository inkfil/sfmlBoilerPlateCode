/*
    Purpose: configuration attributes of Game.
    Classes(s): None.
    Author(s): inkfil.
    Date Added: 22-04-2022
    Notes: 
        {
            to compute magnitude optimally, first find
            the inverse and then multiply instead of divide
            as division is costly operation that multiplication.
        }
        {

        }
*/

#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vec2i{
    public:
        Vec2i();
        Vec2i(const int _x, const int _y);
        Vec2i(Vec2i& _vec2i);
        ~Vec2i();

        // Getters-Setters.
        int getX() const { return this->x; }
        int getY() const { return this->y; }
        void setX(const int _x){ this->x = _x; }
        void setY(const int _y){ this->y = _y; }

        // Operator to assign a vector to another vector.
        Vec2i& operator=(const Vec2i& otherVec2i);
        Vec2i& operator+(const Vec2i& otherVec2i);
        Vec2i& operator+=(const Vec2i& otherVec2i);
        Vec2i& operator-(const Vec2i& otherVec2i);
        Vec2i& operator-=(const Vec2i& otherVec2i);
        Vec2i& operator*(const double shift);
        Vec2i& operator*(const Vec2i& otherVec2i);

        // Functions
        double magnitude();
        Vec2i& addScalar(double shift);
        Vec2i& addVector(Vec2i& otherVec2i);
        Vec2i& subtractScalar(double shift);
        Vec2i& subtractVector(Vec2i& otherVec2i);
        Vec2i& crossProduct();
        double dotProduct();
        double computeInverse();
        Vec2i& normalise();

        // Linear Transformation
        Vec2i& translate();
        Vec2i& scale();
        Vec2i& rotate();

    private:
        int x = 0;
        int y = 0;
        double inv = 0.0;
        double magnitude = 0.0;
};

class Vec3i{
    public:
        Vec3i();
        Vec3i(const int _x, const int _y, const int _z);
        Vec3i(Vec3i& _vec3i);
        ~Vec3i();

        // Getters-Setters.
        int getX() const { return this->x; }
        int getY() const { return this->y; }
        int getZ() const { return this->z; }
        void setX(const int _x){ this->x = _x; }
        void setY(const int _y){ this->y = _y; }
        void setZ(const int _z){ this->z = _z; }
        
        // Operator to assign a vector to another vector.
        Vec3i& operator=(const Vec3i& otherVec3i);
        Vec3i& operator+(const Vec3i& otherVec3i);
        Vec3i& operator+=(const Vec3i& otherVec3i);
        Vec3i& operator-(const Vec3i& otherVec3i);
        Vec3i& operator-=(const Vec3i& otherVec3i);
        Vec3i& operator*(const double shift);
        Vec3i& operator*(const Vec3i& otherVec3i);

        // Functions
        double magnitude();
        Vec3i& addScalar(double shift);
        Vec3i& addVector(Vec3i& otherVec3i);
        Vec3i& subtractScalar(double shift);
        Vec3i& subtractVector(Vec3i& otherVec3i);
        Vec3i& crossProduct();
        double dotProduct();
        double computeInverse();
        Vec3i& normalise();

        // Linear Transformation
        Vec3i& translate();
        Vec3i& scale();
        Vec3i& rotate();

    private:
        int x = 0;
        int y = 0;
        int z = 0;
        double inv = 0.0;
        double magnitude = 0.0;
};

class Vec2f{
    public:
        Vec2f();
        Vec2f(const float _x, const float _y);
        Vec2f(Vec2f& _vec2f);

        // Getters-Setters.
        float getX() const { return this->x; }
        float getY() const { return this->y; }
        void setX(const float _x){ this->x = _x; }
        void setY(const float _y){ this->y = _y; }

        // Operator to assign a vector to another vector.
        Vec2f& operator=(const Vec2f& otherVec2f);
        Vec2f& operator+(const Vec2f& otherVec2f);
        Vec2f& operator+=(const Vec2f& otherVec2f);
        Vec2f& operator-(const Vec2f& otherVec2f);
        Vec2f& operator-=(const Vec2f& otherVec2f);
        Vec2f& operator*(const double shift);
        Vec2f& operator*(const Vec2f& otherVec2f);

        // Functions
        double magnitude();
        Vec2f& addScalar(double shift);
        Vec2f& addVector(Vec2f& otherVec2f);
        Vec2f& subtractScalar(double shift);
        Vec2f& subtractVector(Vec2f& otherVec2f);
        Vec2f& crossProduct();
        double dotProduct();
        double computeInverse();
        Vec2f& normalise();

        // Linear Transformation
        Vec2f& translate();
        Vec2f& scale();
        Vec2f& rotate();

    private:
        float x = 0.0f;
        float y = 0.0f;
        double inv = 0.0;
        double magnitude = 0.0;
};

class Vec3f{
    public:
        Vec3f();
        Vec3f(const float _x, const float _y, const float _z);
        Vec3f(Vec3f& _vec3f);

        // Getters-Setters.
        float getX() const { return this->x; }
        float getY() const { return this->y; }
        float getZ() const { return this->z; }
        void setX(const float _x){ this->x = _x; }
        void setY(const float _y){ this->y = _y; }
        void setZ(const float _z){ this->z = _z; }

        // Operator to assign a vector to another vector.
        Vec3f& operator=(const Vec3f& otherVec3f);
        Vec3f& operator+(const Vec3f& otherVec3f);
        Vec3f& operator+=(const Vec3f& otherVec3f);
        Vec3f& operator-(const Vec3f& otherVec3f);
        Vec3f& operator-=(const Vec3f& otherVec3f);
        Vec3f& operator*(const double shift);
        Vec3f& operator*(const Vec3f& otherVec3f);

        // Functions
        double magnitude();
        Vec3f& addScalar(double shift);
        Vec3f& addVector(Vec3f& otherVec3f);
        Vec3f& subtractScalar(double shift);
        Vec3f& subtractVector(Vec3f& otherVec3f);
        Vec3f& crossProduct();
        double dotProduct();
        double computeInverse();
        Vec3f& normalise();

        // Linear Transformation
        Vec3f& translate();
        Vec3f& scale();
        Vec3f& rotate();

    private:
        float x = 0.0f;
        float y = 0.0f;
        float z = 0.0f;
        double inv = 0.0;
        double magnitude = 0.0;
};

class Vec2d{
    public:
        Vec2d();
        Vec2d(const double _x, const double _y);
        Vec2d(Vec2d& _vec2d);

        // Getters-Setters.
        double getX() const { return this->x; }
        double getY() const { return this->y; }
        void setX(const double _x){ this->x = _x; }
        void setY(const double _y){ this->y = _y; }

        // Operator to assign a vector to another vector.
        Vec2d& operator=(const Vec2d& otherVec2d);
        Vec2d& operator+(const Vec2d& otherVec2d);
        Vec2d& operator+=(const Vec2d& otherVec2d);
        Vec2d& operator-(const Vec2d& otherVec2d);
        Vec2d& operator-=(const Vec2d& otherVec2d);
        Vec2d& operator*(const double shift);
        Vec2d& operator*(const Vec2d& otherVec2d);

        // Functions
        double magnitude();
        Vec2d& addScalar(double shift);
        Vec2d& addVector(Vec2d& otherVec2d);
        Vec2d& subtractScalar(double shift);
        Vec2d& subtractVector(Vec2d& otherVec2d);
        Vec2d& crossProduct();
        double dotProduct();
        double computeInverse();
        Vec2d& normalise();

        // Linear Transformation
        Vec2d& translate();
        Vec2d& scale();
        Vec2d& rotate();

    private:
        double x = 0.0;
        double y = 0.0;
        double inv = 0.0;
        double magnitude = 0.0;
};

class Vec3d{
    public:
        Vec3d();
        Vec3d(const double _x, const double _y, const double _z);
        Vec3d(Vec3d& _vec3d);

        // Getters-Setters.
        double getX() const { return this->x; }
        double getY() const { return this->y; }
        double getZ() const { return this->z; }
        void setX(const double _x){ this->x = _x; }
        void setY(const double _y){ this->y = _y; }
        void setZ(const double _z){ this->z = _z; }

        // Operator to assign a vector to another vector.
        Vec3d& operator=(const Vec3d& otherVec3d);
        // Operator to add a vector with another vector.
        Vec3d& operator+(const Vec3d& otherVec3d);
        // Operator to add and assign a vector to another vector.
        Vec3d& operator+=(const Vec3d& otherVec3d);
        // Operator to subtract a vector from another vector.
        Vec3d& operator-(const Vec3d& otherVec3d);
        // Operator to subtract and assign a vector from another vector.
        Vec3d& operator-=(const Vec3d& otherVec3d);
        // Operator to multiply a vector to a scalar [dot product].
        Vec3d& operator*(const double shift);
        // Operator to multiply a vector to another vector [cross product].
        Vec3d& operator*(const Vec3d& otherVec3d);

        // Functions
        double magnitude();
        Vec3d& addScalar(double shift);
        Vec3d& addVector(Vec3d& otherVec3d);
        Vec3d& subtractScalar(double shift);
        Vec3d& subtractVector(Vec3d& otherVec3d);
        Vec3d& crossProduct();
        double dotProduct();
        double computeInverse();
        Vec3d& normalise();

        // Linear Transformation
        Vec3d& translate();
        Vec3d& scale();
        Vec3d& rotate();

    private:
        double x = 0.0;
        double y = 0.0;
        double z = 0.0;
        double inv = 0.0;
        double magnitude = 0.0;
};

#endif