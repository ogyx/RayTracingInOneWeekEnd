#pragma once

#include "vec3.h"

class ray
{
public:
	ray() { }
	ray(const point3& orig, const vec3& dir)
		: orig(orig), dir(dir)
	{

	}

	point3    origin()    const { return orig; }
	vec3      direction() const { return dir; }

	// where is point when t;
	point3 at(double t) const { return orig + t * dir; }

public:
	point3 orig;  // ray origin position
	vec3 dir;		// ray direction
};
