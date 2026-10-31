
void FUN_00123f08(ushort param_1,uint param_2,char param_3,char param_4,char param_5,char param_6,
                 uint param_7,uint param_8,ushort *param_9)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  if ((param_8 & 0xffff) == 0) {
    puVar2 = &LAB_00003e80 + (param_7 & 0xff) * 0xa0;
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0((param_7 & 0xff) * 0x280000,param_8 & 0xffff);
    puVar2 = (undefined1 *)0xffffffff;
    if (puVar1 < &DAT_0000c180) {
      puVar2 = puVar1 + 16000;
    }
  }
  if (param_3 == '\0') {
    if (param_5 == '\0') {
      if (param_6 != '\0') {
        puVar2 = (undefined1 *)0xffffdde0;
      }
    }
    else {
      puVar2 = (undefined1 *)0x73a0;
    }
  }
  else if (param_4 == '\0') {
    puVar2 = (undefined1 *)LK_133A14((uint)&T_0300A4,param_2 & 0xff);
  }
  else {
    puVar2 = (undefined1 *)0xffffffff;
  }
  if (((uint)puVar2 & 0xffff) < (uint)param_1) {
    *param_9 = (ushort)puVar2;
  }
  else {
    *param_9 = param_1;
  }
  return;
}

