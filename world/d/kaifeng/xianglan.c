// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// create by snowcat jan 21 1998

inherit ROOM;

void create ()
{
  set ("short", "����ͤ");
  set ("long", @LONG

����ͤ���������ʻ���ݣ���ζ����������Ȼ���ϱ���һ��ľ������
�������������ݡ�ͤ�ӵ�������һ������ͨ����ͤ�����ţ������е�
ͨ������ͤ��

LONG);

  set("exits", ([
        "west" : __DIR__"lanting",
        "north" : __DIR__"yulan",
      ]));
  set("objects", ([
        __DIR__"npc/yahuan" :  1,
        __DIR__"npc/xianglan" :  1,
      ]));

  setup();
}

