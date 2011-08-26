#pragma once
//------------------------------------------------------------------------------
/**
	@class Editor::EditTool

	�������࣬�������Ǳ༭���ﴥ���Ķ������紴���޸�ʵ�塢�༭���εȡ�

	(C) 2011 xiongyouyi
*/
#include "core/refcounted.h"


//------------------------------------------------------------------------------
namespace Editor
{
class EditTool : public Core::RefCounted
{
	__DeclareClass(EditTool);
public:
	EditTool();
	virtual ~EditTool();

	virtual void OnActivate();
	virtual void OnDeactivate();

	virtual void OnUpdate();

	/// ȡ����
	const Util::String& GetName() const;

protected:
	friend class ManipServer;

	/// ע��ʱ��������
	void SetName(const Util::String& n);

private:
	Util::String name;
};

//------------------------------------------------------------------------------
/**
*/
inline
void
EditTool::SetName(const Util::String& n)
{
	this->name = n;
}

//------------------------------------------------------------------------------
/**
*/
inline
const Util::String&
EditTool::GetName() const
{
	return this->name;
}

} // namespace Editor