#include <unistd.h>

#define ROOT 0

uid_t getuid() {
	return ROOT;
}

uid_t geteuid() {
	return ROOT;
}

int getresuid(uid_t* ruid, uid_t* euid, uid_t* suid) {
	*ruid = ROOT;
	*euid = ROOT;
	*suid = ROOT;
	return 0;
}

gid_t getgid() {
	return ROOT;
}

gid_t getegid() {
	return ROOT;
}

int getresgid(gid_t* rgid, gid_t* egid, gid_t* sgid) {
	*rgid = ROOT;
	*egid = ROOT;
	*sgid = ROOT;
	return 0;
}
