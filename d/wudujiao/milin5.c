// Room: /d/wudujiao/milin5.c

inherit ROOM;

void create()
{
        set("short", "��ɭ��");
        set("long", @LONG
������������ĺ�ɭ�֣����ܾ���ï�ܵĴ��֣��޴�Ĺ�ľ��
����գ�ͷ��������һƬ��ա����²�ʱ������΢�����죬�ƺ���
ʲô�����Ӳݴ����ι���Զ��ż������һ��Ұ�޵ĺ�������
LONG
        );
        set("outdoors", "wudujiao");
	set("no_clean_up", 0);
        set("exits", ([
                "east" : __DIR__"milin4",
                "south" : __DIR__"milin3",
                "west" : __DIR__"milin6",
                "north" : __DIR__"milin4",
        ]));

	set("coor/x", -45000);
	set("coor/y", -80000);
	set("coor/z", 0);
	setup();
        replace_program(ROOM);
}