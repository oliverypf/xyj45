// 
// 

inherit ROOM;
void create()
{
        set("short", "�޴�ľ���");
        set("long", @LONG
����ղ�ᣱ�¶��һ�澧Ө���޴�ľ��ӣ������������������鱦����
������Щ��ֵ���ǵ��鱦��Ҳ�����ڱξ��ӵĹ�ʣ��⾵�ӱ��������Ǵ�����
�ص�ħ����
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "northup" : __DIR__"bedroom",
  "southup" : __DIR__"flower2",
]));
        set("objects", ([
                __DIR__"npc/mirror_soul" : 1,
       ]) );
        setup();
        replace_program(ROOM);
}