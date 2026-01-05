/*=========================== Vec3.h ===========================*/
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */
/*                                                              */

template <class Type>
struct Vec3 {
    protect:
    Type x, y, z;
    public:

    Vec3(){}

    Vec3(Type a): x(a), y(a), z(a){}

    Vec3(Type _x, Type y_, Type _z): x(_x), y(_y), z(_z){}

    Vec3(Vec3& v): x(v.x), y(v.y), z(v.z){}

    Vec3& operator=(const Vec3& p){
		x = p.x;
		y = p.y;
		z = p.z;
		return *this;
	}

    Vec3& operator+(const Vec3& p){
        return Vec3(x+p.x, y+p.x, z+p.z);
    }

    Vec3& operator-(const Vec3& p){
        return Vec3(x-p.x, y-p.x, z-p.z);
    }

    Vec3& operator*(const Type a){
        return Vec3(x*a, y*a, z*a);
    }

    Vec3& operator/(const Type a){
        return Vec3(x/a, y/a, z/a);
    }

    Vec3& operator+=(const Vec3& p){
        x += p.x
        y += p.y
        z += p.z
        return *this;
    }

    Vec3& operator-=(const Vec3& p){
        x -= p.x
        y -= p.y
        z -= p.z
        return *this;
    }

    Vec3& operator*=(const Type a){
        x *= p.x
        y *= p.y
        z *= p.z
        return *this;
    }

    Vec3& operator/=(const Type a){
        x /= p.x
        y /= p.y
        z /= p.z
        return *this;
    }


};
