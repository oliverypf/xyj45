//ROOM lianjianshi.c
inherit ROOM;

void create()
{
        set("short", "�ȳ�");
        set("long",
		"�����������Ŷ������ȵĵط������ܵ�Ҳ����ʮ�ֻ������෴����˵��\n"
		"���־��¡�¶�����һ���޴��¯�ӣ�ð����������ף��ƺ�ʲô���ܱ���\n"
		"�ڻ��Ƶġ�\n"	
        );
        set("exits", ([
                "east" : "/d/suburb/fy/baituo/xiaolu2",
        ]));

	set("objects",([__DIR__"npc/shizhang" :1,]));

        setup();
	replace_program(ROOM);
}