// Room: /d/gaibang/dlandao2.c
// Date: Haa 96/03/22

#include <room.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����ؤ�Ｋ�����ܵĵ���ͨ��������ؤ�Ｘ����֮��Ѫ��ɡ� 
LONG );
	set("exits", ([
		"southwest" : __DIR__"underdl",
		"northeast" : __DIR__"dlandao1",
	]));
	set("no_clean_up", 0);
	set("coor/x", -20000);
	set("coor/y", -30000);
	set("coor/z", -20);
	setup();
	replace_program(ROOM);
}