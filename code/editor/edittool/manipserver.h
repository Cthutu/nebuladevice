#pragma once
//------------------------------------------------------------------------------
/**
	@class Editor::ManipServer

	Manip��ϵͳ�ĺ��Ŀ����ࡣ

	(C) 2011 xiongyouyi
*/
#include "core/singleton.h"
#include "manip.h"

//------------------------------------------------------------------------------
namespace Editor
{
class ManipServer : public Core::RefCounted
{
	__DeclareClass(ManipServer);
	__DeclareSingleton(ManipServer);
public:
	ManipServer();
	virtual ~ManipServer();

	/// ����ϵͳ
	virtual bool Open();
	/// �ر���ϵͳ
	virtual void Close();
	// ��ϵͳ�Ƿ��Ѵ�
	bool IsOpen() const;

	/// ֡��Ⱦǰ����
	void OnBeginFrame();
	/// ֡��Ⱦ�����
	void OnEndFrame();

	/// ע��Manip
	virtual void RegisterManip(const Util::String& name, const Ptr<Manip>& Manip);
	/// ע��Manip
	virtual void UnregisterManip(const Util::String& name);

	/// Manip�Ƿ����
	bool HasManip(const Util::String& name) const;
	/// ͨ������ȡ��Manip
	Ptr<Manip> GetManip(const Util::String& name);

	/// ���õ�ǰManip
	void SetActiveManip(const Util::String& name);
	void SetActiveManip(Ptr<Manip> Manip);
	/// ȡ�õ�ǰManip
	Ptr<Manip> GetActiveManip();

protected:
	/// register manips
	void RegisterManips();

private:
	bool			isOpen;
	Ptr<Manip>		activeManip;
	Util::Dictionary<Util::String, Ptr<Manip> > manipRegistry;
};

//------------------------------------------------------------------------------
/**
*/
inline
bool
ManipServer::IsOpen() const
{
	return this->isOpen;
}

//------------------------------------------------------------------------------
/**
*/
inline
Ptr<Manip>
ManipServer::GetActiveManip()
{
	return this->activeManip;
}

} // namespace Editor