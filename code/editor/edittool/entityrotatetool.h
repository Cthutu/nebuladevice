#pragma once
//------------------------------------------------------------------------------
/**
	@class Editor::EntityRotateTool

	��ת�������

	(C) 2011 xiongyouyi
*/
#include "edittool.h"

namespace Game
{
	class Entity;
};


//------------------------------------------------------------------------------
namespace Editor
{
class EntityRotateTool : public EditTool
{
	__DeclareClass(EntityRotateTool);
public:
	EntityRotateTool();
	~EntityRotateTool();

	virtual void OnActivate();
	virtual void OnDeactivate();

	virtual void OnUpdate();

protected:
	Game::Entity*	entity;
};


} // namespace Editor