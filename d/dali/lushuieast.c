//Room: /d/dali/lushuieast.c
//Date: June. 29 1998 by Java

inherit ROOM;
void create()
{
	set("short","����ˮ�ӹ�");
	set("long",@LONG
������һ��Ƭ�ӹȴ��ڱ���ѩɽ�͸���ɽ֮�䣬�ɶ���ˮ��ˢ��
�ɣ����Ƶ��ݣ�����������ů���۾��˴����������ˡ�����������
�ӹȿ�����һЩ�������ɽ�����ܣ����Ӷ�������ԡ����Ž��µ�
����ֱ��һ�������ӡ�
LONG);
	set("outdoors", "daliw");
	set("exits",([ /* sizeof() == 1 */
	    "westdown"   : __DIR__"badidian",
	    "eastup"     : __DIR__"biluoxueshan",
	]));
	set("no_clean_up", 0);
	set("coor/x", -80000);
	set("coor/y", -70000);
	set("coor/z", 20);
	setup();
	replace_program(ROOM);
}