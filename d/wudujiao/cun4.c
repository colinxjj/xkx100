// Room: /d/wudujiao/cun4.c

inherit ROOM;

void create()
{
        set("short", "С��");
        set("long", @LONG
����С���ʯ��·�ϣ����Զ�������ʯ���ɵķ��ݡ������ﾲ���ĵģ�
���������ˣ�ż������һ�������С�
LONG
        );
        set("outdoors", "wudujiao");

        set("exits", ([
                "northeast" : __DIR__"cun5",
                "southeast" : __DIR__"cun6",
                "west" : __DIR__"cun3",
                "north" : __DIR__"minju3",
        ]));
        set("objects", ([
                __DIR__"npc/boy": 2,
        ]));


	set("coor/x", -44960);
	set("coor/y", -81010);
	set("coor/z", 0);
	setup();
        replace_program(ROOM);
}