
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015b008(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  char local_24;
  short sStack_22;
  short local_20;
  undefined1 uStack_1e;
  
  FUN_0015afa4();
  if (((int)(char)DAT_ffff209c & 0x80U) == 0) {
    if (local_24 == '\x01') {
      if (uRamffff209e != 0) {
        uStack_1e = 2;
        DAT_ffff209c = DAT_ffff209c & 0x7f;
        local_20 = sRamffff20aa;
        goto LAB_0015b17c;
      }
      uStack_1e = 1;
    }
    else if (uRamffff209e == 0x7a12) {
      uStack_1e = 2;
    }
    else {
      uStack_1e = 1;
    }
    local_20 = sRamffff20ae;
    DAT_ffff209c = DAT_ffff209c | 0x80;
    goto LAB_0015b17c;
  }
  FUN_0015b1ac(0);
  uVar1 = FUN_00001540((uint)_DAT_ffff20b2 * 0x7a12 >> 0xf);
  puVar4 = (undefined *)(uVar1 & 0xffff);
  puVar3 = &DAT_00007a12;
  if ((puVar4 < &UNK_00007919) && (puVar3 = puVar4, puVar4 < (undefined *)0xfa)) {
    puVar3 = (undefined *)0x0;
  }
  uVar5 = (ushort)puVar3;
  uRamffff20a2 = uVar5;
  sRamffff20a6 = FUN_0016bd34((int)&DAT_00007a12 - (int)puVar3);
  sRamffff20aa = sStack_22 + sRamffff20a6;
  sRamffff20ae = sStack_22 + 0x7a12;
  if (uRamffff209e < 0x7a12) {
    if (puVar3 == (undefined *)0x0) {
      uStack_1e = 1;
LAB_0015b0e2:
      DAT_ffff209c = DAT_ffff209c | 0x80;
      local_20 = sRamffff20ae;
      uRamffff209e = uVar5;
      goto LAB_0015b17c;
    }
    uStack_1e = 2;
    local_20 = sRamffff20aa;
  }
  else {
    if (puVar3 == &DAT_00007a12) {
      uStack_1e = 2;
      goto LAB_0015b0e2;
    }
    local_20 = sStack_22 + 2;
    uStack_1e = 1;
  }
  DAT_ffff209c = DAT_ffff209c & 0x7f;
  uRamffff209e = uVar5;
LAB_0015b17c:
  uVar2 = FUN_00001550(0xf0);
  FUN_0015af60(0,(int)local_20,uStack_1e);
  FUN_00001550(uVar2);
  return;
}

