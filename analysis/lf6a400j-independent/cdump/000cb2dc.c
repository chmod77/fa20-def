
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb2dc(char param_1,uint param_2,char param_3,undefined2 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  param_2 = param_2 & 0xff;
  if (DAT_fffecbd6 == '\0') {
    puVar4 = &LAB_00003e80 + param_2 * 0x80;
  }
  else {
    puVar4 = (undefined1 *)(int)_DAT_fffecbd4;
  }
  bVar1 = (short)(((short)param_2 -
                  (short)((ulonglong)((longlong)(int)((uint)puVar4 & 0xffff) * 0x2000000) >> 0x20))
                 + 0x7d) < 0;
  if ((param_1 == '\x02') && (param_3 == '\0')) {
    puVar4 = (undefined1 *)((uint)puVar4 & 0xffff);
    puVar5 = (undefined1 *)0xffffffff;
    if ((puVar4 + 0x3ed0 < &UNK_00013e80) &&
       (puVar5 = (undefined1 *)0x0, (undefined1 *)0x3e7f < puVar4 + 0x3ed0)) {
      puVar5 = puVar4 + 0x50;
    }
    _DAT_fffecbd4 = (short)(&LAB_00003e80 + param_2 * 0x80);
    if ((undefined1 *)((uint)puVar5 & 0xffff) <= &LAB_00003e80 + param_2 * 0x80) {
      _DAT_fffecbd4 = (short)puVar5;
    }
  }
  else {
    _DAT_fffecbd4 = 0xbe00;
  }
  if ((param_1 == '\x01') && (bVar1)) {
    puVar4 = (undefined1 *)((uint)puVar4 & 0xffff);
    puVar5 = (undefined1 *)0xffffffff;
    if (((int)(puVar4 + -56000) < (int)&DAT_0000c180) &&
       (puVar5 = (undefined1 *)0x0, -0x3e81 < (int)(puVar4 + -56000))) {
      puVar5 = puVar4 + -40000;
    }
    _DAT_fffecbd4 = (short)(&LAB_00003e80 + param_2 * 0x80);
    if (&LAB_00003e80 + param_2 * 0x80 <= (undefined1 *)((uint)puVar5 & 0xffff)) {
      _DAT_fffecbd4 = (short)puVar5;
    }
  }
  if ((param_1 == '\x01') && (!bVar1)) {
    puVar3 = (undefined *)(((uint)puVar4 & 0xffff) + 0x3f20);
    uVar2 = 0xffffffff;
    if ((puVar3 < &UNK_00013e80) && (uVar2 = 0, (undefined *)0x3e7f < puVar3)) {
      uVar2 = ((uint)puVar4 & 0xffff) + 0xa0;
    }
    _DAT_fffecbd4 = (short)(&LAB_00003e80 + param_2 * 0x80);
    if ((undefined1 *)(uVar2 & 0xffff) <= &LAB_00003e80 + param_2 * 0x80) {
      _DAT_fffecbd4 = (short)uVar2;
    }
  }
  *param_4 = _DAT_fffecbd4;
  DAT_fffecbd6 = 1;
  return;
}

