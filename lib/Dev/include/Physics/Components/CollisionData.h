#pragma once
#include "General\GameObject.h"
class CollisionData
{

public:

	GameObject target;
	glm::vec3 diff;
	glm::vec3 diff2;

	CollisionData()
	{

	}

	CollisionData(GameObject bc, glm::vec3 depth, glm::vec3 depth2)
	{
		target = bc;
		diff = depth;
		diff2 = depth2;
	}

	static void registerLua(lua_State* L)
	{
		using namespace luabridge;

		getGlobalNamespace(L)
			.beginClass<CollisionData>("CollisionData")
			.addData<GameObject>("gameObject", &CollisionData::target)
			.endClass();
	}
};