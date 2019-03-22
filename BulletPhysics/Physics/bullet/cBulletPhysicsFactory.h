#pragma once
#include <Interfaces/iPhysicsFactory.h>



namespace nPhysics
{
	class cBulletPhysicsFactory : public iPhysicsFactory
	{
	public:
		virtual ~cBulletPhysicsFactory();
		virtual iPhysicsWorld* CreatePhysicsWorld();
		virtual iRigidBody* CreateRigidBody(const sRigidBodyDef& def, iShape* shape);

		virtual iSphereShape* CreateSphereShape(float radius);
		virtual iPlaneShape* CreatePlaneShape(const glm::vec3& normal, float constant);

		virtual iCylinderShape* CreateCylinderShape(const glm::vec3& halfExtent, int axis);
		virtual iCapsuleShape* CreateCapsuleShape(float height, float radius, int axis);
	};
}
