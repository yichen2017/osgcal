// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osgCal/CoreModel>
#include <osgCal/Model>
#include <osgCal/SubMeshSoftware>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgCal::SubMeshSoftware)
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Constructor3(IN, osgCal::Model *, model, IN, int, meshIndex, IN, bool, meshIsStatic);
	I_ConstructorWithDefaults2(IN, const osgCal::SubMeshSoftware &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(void, create);
	I_Method0(void, update);
	I_Method0(osg::BoundingBox, computeBound);
	I_Method0(osgCal::CoreModel::Mesh *, getCoreModelMesh);
	I_ReadOnlyProperty(osgCal::CoreModel::Mesh *, CoreModelMesh);
END_REFLECTOR

