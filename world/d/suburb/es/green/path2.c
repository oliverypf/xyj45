// Room: "/d/green/path2.c

inherit ROOM;

void create()
{
	set("short", "����·��");
	set("long", @LONG
С·�����������������ǳ��˴���. ������һ��СС��������, ��
����һ����լ�ƵĽ���, ������ڲ������. ������һ������·��.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : "/d/suburb/es/green/path3",
  "north" : "/d/suburb/es/green/path1",
  "west" : "/d/suburb/es/green/temple0",
]));
	set("outdoors", "green");
	set("objects", ([
	"/d/suburb/es/green/npc/kid2" : 2,
	]) );

	setup();
	replace_program(ROOM);
}