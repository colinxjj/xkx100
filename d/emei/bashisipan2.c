//Room: bashisipan2.c ��ʮ����
//Date: Oct. 2 1997 by That

inherit ROOM;

void create()
{
      set("short","��ʮ����");
      set("long",@LONG
��ʮ���̣���·���ն��ͣ��ػ����ۣ����˲��ܴ�Ϣ��·���Ǳ��������
��ɼ�֣�·��������׵ľ���Ͽ�ȡ��ɴ���������������µ�ϴ��ء�
LONG);
      set("outdoors", "emei");
      set("exits",([ /* sizeof() == 1 */
          "southup"    : __DIR__"bashisipan3",
          "northeast"  : __DIR__"bashisipan1",
          "east"       : __DIR__"lengsl3",
      ]));
      set("no_clean_up", 0);
	set("coor/x", -6230);
	set("coor/y", -1120);
	set("coor/z", 160);
	setup();
}
int valid_leave(object me, string dir)
{
      int c_exp,c_skill;
      if (dir == "southup" )
      {
         c_exp=me->query("combat_exp");
         c_skill=me->query_skill("dodge",1);
         if ( me->query("qi") < 10 )
                me->unconcious();
         else
         {
                me->add("qi",-10);
                if (((c_skill*c_skill*c_skill/10)< c_exp) && (c_skill< 101))
                me->improve_skill("dodge", (int)me->query_skill("dodge", 1));
                tell_object(me,"�����ϰ�ʮ���̣���Щ���ˡ�\n");
          }
      }
      return 1;
}