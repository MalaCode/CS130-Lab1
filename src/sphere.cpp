#include "sphere.h"
#include "ray.h"


// Determine if the ray intersects with the sphere
bool Sphere::Intersection(const Ray& ray, std::vector<Hit>& hits) const
{
    // TODO
    double a = 1;
    double b = 2*(dot(ray.direction, (ray.endpoint-this->center)));
    double c = dot(ray.endpoint-this->center, ray.endpoint-this->center)-pow(this->radius,2);

    double delta = pow(b,2)-(4*a*c);

    Hit t1;
    t1.object = this;
    t1.ray_exiting = false;

    Hit t2;
    t2.object = this;
    t2.ray_exiting = true;

    //no intersection
    if (delta < 0)
    {
      return false;
    }

    t1.t = (-b - sqrt(delta))/(2);
    t2.t = (-b + sqrt(delta))/(2);

    if (t1.t >= 0)
    {
      hits.push_back(t1);
    }
    hits.push_back(t2);




    return true;
}

vec3 Sphere::Normal(const vec3& point) const
{
    vec3 normal;
    // TODO: set the normal
    return normal;
}
