#include<include/Shinigami.hpp>

//.............................................................................
// Vec2i

Vec2i::Vec2i() : x(0), y(0){

}

Vec2i::Vec2i(const int _x, const int _y) : x(_x), y(_y){

}

Vec2i::Vec2i(Vec2i& _vec2i){
    this->x = _vec2i.getX();
    this->y = _vec2i.getY();
}

Vec2i::~Vec2i(){

}

Vec2i& Vec2i::operator=(const Vec2i& otherVec2i){
    this->x = otherVec2i.x;
    this->y = otherVec2i.y;

    return *this;
}

Vec2i& Vec2i::operator+(const Vec2i& otherVec2i){
    this->x += otherVec2i.x;
    this->y += otherVec2i.y;

    return *this;
}

Vec2i& Vec2i::operator-(const Vec2i& otherVec2i){
    this->x -= otherVec2i.x;
    this->y -= otherVec2i.y;

    return *this;
}

//.............................................................................

//.............................................................................
// Vec3i

Vec3i::Vec3i() : x(0), y(0), z(0){

}

Vec3i::Vec3i(const int _x, const int _y, const int _z) : x(_x), y(_y), z(_z){

}

Vec3i::Vec3i(Vec3i& _vec3i){
    this->x = _vec3i.getX();
    this->y = _vec3i.getY();
    this->z = _vec3i.getZ();
}

Vec3i::~Vec3i(){
    
}

Vec3i& Vec3i::operator=(const Vec3i& otherVec3i){
    this->x = otherVec3i.x;
    this->y = otherVec3i.y;
    this->z = otherVec3i.z;

    return *this;
}

Vec3i& Vec3i::operator+(const Vec3i& otherVec3i){
    this->x += otherVec3i.x;
    this->y += otherVec3i.y;
    this->z += otherVec3i.z;

    return *this;
}

Vec3i& Vec3i::operator-(const Vec3i& otherVec3i){
    this->x -= otherVec3i.x;
    this->y -= otherVec3i.y;
    this->z -= otherVec3i.z;

    return *this;
}

//.............................................................................

//.............................................................................
// Vec2f

Vec2f::Vec2f() : x(0.0f), y(0.0f){

}

Vec2f::Vec2f(const float _x, const float _y) : x(_x), y(_y){

}

Vec2f::Vec2f(Vec2f& _vec2f){
    this->x = _vec2f.getX();
    this->y = _vec2f.getY();
}

Vec2f::~Vec2f(){

}

Vec2f& Vec2f::operator=(const Vec2f& otherVec2f){
    this->x = otherVec2f.x;
    this->y = otherVec2f.y;

    return *this;
}

Vec2f& Vec2f::operator+(const Vec2f& otherVec2f){
    this->x += otherVec2f.x;
    this->y += otherVec2f.y;

    return *this;
}

Vec2f& Vec2f::operator-(const Vec2f& otherVec2f){
    this->x -= otherVec2f.x;
    this->y -= otherVec2f.y;

    return *this;
}

//.............................................................................

//.............................................................................
// Vec3f

Vec3f::Vec3f() : x(0.0f), y(0.0f), z(0.0f){

}

Vec3f::Vec3f(const float _x, const float _y, const float _z) : x(_x), y(_y), z(_z){

}

Vec3f::Vec3f(Vec3f& _vec3f){
    this->x = _vec3f.getX();
    this->y = _vec3f.getY();
    this->z = _vec3f.getZ();
}

Vec3f::~Vec3f(){

}

Vec3f& Vec3f::operator=(const Vec3f& otherVec3f){
    this->x = otherVec3f.x;
    this->y = otherVec3f.y;
    this->z = otherVec3f.z;

    return *this;
}

Vec3f& Vec3f::operator+(const Vec3f& otherVec3f){
    this->x += otherVec3f.x;
    this->y += otherVec3f.y;
    this->z += otherVec3f.z;

    return *this;
}

Vec3f& Vec3f::operator-(const Vec3f& otherVec3f){
    this->x -= otherVec3f.x;
    this->y -= otherVec3f.y;
    this->z -= otherVec3f.z;

    return *this;
}

//.............................................................................
//.............................................................................
// Vec2d

Vec2d::Vec2d() : x(0.0), y(0.0){

}

Vec2d::Vec2d(const double _x, const double _y) : x(_x), y(_y){

}

Vec2d::Vec2d(Vec2d& _vec2d){
    this->x = _vec2d.getX();
    this->y = _vec2d.getY();
}

Vec2d::~Vec2d(){

}

Vec2d& Vec2d::operator=(const Vec2d& otherVec2d){
    this->x = otherVec2d.x;
    this->y = otherVec2d.y;

    return *this;
}

Vec2d& Vec2d::operator+(const Vec2d& otherVec2d){
    this->x += otherVec2d.x;
    this->y += otherVec2d.y;

    return *this;
}

Vec2d& Vec2d::operator-(const Vec2d& otherVec2d){
    this->x -= otherVec2d.x;
    this->y -= otherVec2d.y;

    return *this;
}

//.............................................................................

//.............................................................................
// Vec3d

Vec3d::Vec3d() : x(0.0), y(0.0), z(0.0){

}

Vec3d::Vec3d(const double _x, const double _y, const double _z) : x(_x), y(_y), z(_z){

}

Vec3d::Vec3d(Vec3d& _vec3d){
    this->x = _vec3d.getX();
    this->y = _vec3d.getY();
    this->z = _vec3d.getZ();
}

Vec3d::~Vec3d(){

}

Vec3d& Vec3d::operator=(const Vec3d& otherVec3d){
    this->x = otherVec3d.x;
    this->y = otherVec3d.y;
    this->z = otherVec3d.z;

    return *this;
}

Vec3d& Vec3d::operator+(const Vec3d& otherVec3d){
    this->x += otherVec3d.x;
    this->y += otherVec3d.y;
    this->z += otherVec3d.z;

    return *this;
}

Vec3d& Vec3d::operator-(const Vec3d& otherVec3d){
    this->x -= otherVec3d.x;
    this->y -= otherVec3d.y;
    this->z -= otherVec3d.z;

    return *this;
}

//.............................................................................