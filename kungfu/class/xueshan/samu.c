// /kungfu/class/xueshan/samu.c  ��ľ���
// by secret

#include <ansi.h>

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("��ľ���", ({ "samu huofo", "huofo", "samu" }));
        set("long",@LONG
��ľ�����ѩɽ���е��ĸ�ɮ���Է��о�����о���
������һ����ɫ���ģ�ͷ��ɮñ��һ��������˼�����ӡ�
LONG
        );
        set("title", HIY "���" NOR);
        set("gender", "����");
        set("age", 45);
        set("attitude", "peaceful");
        set("shen_type", -1);
        set("str", 30);
        set("int", 30);
        set("con", 30);
        set("dex", 30);
        set("max_qi", 1000); 
        set("max_jing", 2500); 
        set("neili", 2000); 
        set("max_neili", 2000); 
        set("jiali", 50); 
        set("combat_exp", 400000); 
        set("score", 40000); 

        set_skill("lamaism", 120);
        set_skill("literate", 80);
        set_skill("force", 120);
        set_skill("xiaowuxiang", 100);
        set_skill("dodge", 120);
        set_skill("shenkong-xing", 160);
        set_skill("unarmed", 120);
        set_skill("yujiamu-quan", 160);
        set_skill("parry", 120);
        set_skill("sword", 100);
        set_skill("mingwang-jian", 160);

        map_skill("force", "xiaowuxiang");
        map_skill("dodge", "shenkong-xing");
        map_skill("unarmed", "yujiamu-quan");
        map_skill("parry", "mingwang-jian");
        map_skill("sword", "mingwang-jian");
        
         set("env/wimpy", 60);

        create_family("ѩɽ��", 3, "���");
        set("class", "lama");

        setup();
	carry_object(WEAPON_DIR"changjian")->wield();
	carry_object(CLOTH_DIR"seng-shoe")->wear();
        carry_object("/d/xueshan/obj/y-jiasha")->wear();
        carry_object("/d/xueshan/obj/sengmao")->wear();
        add_money("gold",1);
}

void attempt_apprentice(object ob)
{

        if ((string)ob->query("gender") != "����") {
                command("say ��ϰ�����ڹ���Ҫ����֮�塣");
                command("say ��λ" + RANK_D->query_respect(ob) +
                        "������ذɣ�");
                return;
        }

        if ((string)ob->query("class") != "lama") {
                command("say �����ػƽ����ڵ����������ࡣ");
                command("say ��λ" + RANK_D->query_respect(ob) +
                        "������ذɣ�");
                return;
        }

        if ((string)ob->query("family/family_name") != "ѩɽ��")        {
                command("say ��λ" + RANK_D->query_respect(ob) +
                        "�ȷǱ��µ��ӣ�������ذɣ�");
                return;
        }

        if ((int)ob->query_skill("lamaism", 1) < 60) {
                command("say ����ѩɽ�£���ϰ�����ķ�����Ҫ�ġ�");
                command("say ��λ" + RANK_D->query_respect(ob) +
                        "�Ƿ�Ӧ�ö�����б��ŵ��ķ���");
                return;
        }

        command("smile");
        command("nod");
        command("say �������ѧϰ�𷨰ɣ�");
        command("recruit " + ob->query("id"));

        ob->set("title", HIY"������"NOR);
}