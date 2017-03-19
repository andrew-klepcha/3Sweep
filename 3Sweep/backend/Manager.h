#pragma once
#include "Geometry.h"
#include "Solution.h"

using namespace glm;
class Manager
{
public:
	Manager();
	~Manager();
	void update(const vec3 & point, const vec3 & camera_direction, bool is_line);
	void update_line(const vec3 & point, const vec3 & camera_direction);
	void update_curve(const vec3 & point, const vec3 & camera_direction);
	void end();
	Solution* curt_solution;
private:
	//std::vector<Solution*> solutions;
};
