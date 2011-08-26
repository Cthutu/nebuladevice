#pragma once
//------------------------------------------------------------------------------
/**
	@class Editor::EntityMoveTool

	�ƶ��������

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
class EntityMoveTool : public EditTool
{
	__DeclareClass(EntityMoveTool);
public:
	EntityMoveTool();
	~EntityMoveTool();

	virtual void OnActivate();
	virtual void OnDeactivate();

	virtual void OnUpdate();

protected:
	Game::Entity*	entity;
};


} // namespace Editor