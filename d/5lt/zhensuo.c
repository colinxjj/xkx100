// Room: /d/5lt/zhensuo.c

inherit  ROOM;

void  create  ()
{
	set  ("short",  "��������");
	set  ("long",  @LONG
������ǽ���ҽ�����ܵ������ˡ���͵ĵƹ��£��մɵذ������
����������ǽ�ǵļ������񡢹걳�;����������ž͸��������ĸо���
��ɢ�ŵ��������ķ������м��Ȳ����ţ���������������ʿ�ǵ�����̸
Ц�����ſڰڷ�һ�����ӣ�һ����ò���������������Σ�������ź��
���鼮��һ��������΢΢ð��������ǽ��û��һ�������ﳣ���Ľ��콱
״��ֻ���ſ�һ�Ź��(guanggao��˵���˴˴������á�
LONG);
	set("item_desc", ([
		"guanggao" : "�����������ҩƷ��
���Ʊ����裺\tһ���ƽ�
���廻�ʵ���\tһ���ƽ�
��ʯ�񶴵���\tʮ���ƽ�\n"
	]));
	set("exits",  ([  //sizeof()  ==  2
		"west"  :  __DIR__"sroad2",
		"up"    :  __DIR__"zhensuo2",
	]));
	set("objects",  ([
		__DIR__"npc/afrog": 1,
		__DIR__"npc/huoji": 1,
	]));
	set("no_fight", "1");
	set("coor/x", -140);
	set("coor/y", -30);
	set("coor/z", 0);
	setup();
}