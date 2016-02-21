// Room: /d/shaolin/fumoquan.c
// Date: YZC 96/01/19

#include <ansi.h>

inherit ROOM;

void create()
{
	set("short", "��շ�ħȦ");
	set("long", @LONG
���ô������������ϸ����˸�������һ�˵Ĵ󶴣��и�����
¶����ɫɮ��һ�ǣ��ƺ�ס�����ˡ�������һƬ���ƺ�����Ĵ�
��ͺͺ�ģ��ƺ������ܴ����������´�ݲ�����
LONG
	);

	set("exits", ([
		"out" : __DIR__"qyping",
	]));

	set("objects",([
		CLASS_D("shaolin") + "/du-nan" : 1,
		CLASS_D("shaolin") + "/du-e" : 1,
		CLASS_D("shaolin") + "/du-jie" : 1,
	]));
	setup();
}

void init()
{	
	mapping mine;

	mine = this_player()->query("family");

	if( interactive( this_player()) ) {
	message_vision(HIR "ͻȻ�侢���ݺᣬ��������������������͵ع�����˲�������
����һ�����Եı��У��糤ì����˰������������ֱ���$N��ͷ��
�أ�������Ҫ�����̶�����$NһƳ�䣬����������ɮ�־�������
��֮�У���ȫ���ֱ���$N������$N��������������֮�̺����Ͻ�
ħ�󷨵Ľ�շ�ħȦ��\n\n" NOR, this_player());
	}

	if ( mapp(mine)
	&& mine["generation"] > 2 
	&& mine["family_name"] == "������" 
	&& this_player()->query("kee") < 300 ) 
	{
		message_vision(HIR "$N��һ����ɽ������ľ������У���ʱ���˳�ȥ !\n" NOR, this_player());
	}

}

int valid_leave(object me, string dir)
{

	if( dir == "out" && present("puti zi", me) )
	{
		return notify_fail("����˵��: ���ܴ����������뿪��ħȦ !\n");
	}
	me->delete_temp("fighter");

	return ::valid_leave(me, dir);
}