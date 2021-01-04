#include <iostream>
#include <olc_net.h>

enum class CustomMsgTypes : uint32_t {
	FireBullet,
	MovePlayer
};

int main() {
	olc::net::message<customMsgTypes> msg;
	msg.header.id = 8;// CustomMsgTypes::FireBullet;

	return 0;
}