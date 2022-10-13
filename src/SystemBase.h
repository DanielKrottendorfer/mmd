#pragma once
template <typename PlatformSystem>
class SystemBase
{
public:
	// Platform-independent
	size_t GetUserCount() const { return m_numUsers; }
	// Platform-specific interface
	void CheckUsers()
	{
		m_numUsers = m_platform->CheckUsers();
	}

private:
	size_t m_numUsers = 0u;
	PlatformSystem *m_platform; // can be PlatformSystem instance as well
};
