
int FUN_000caf78(uint param_1,uint param_2,undefined1 *param_3)

{
  int b;
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  b = (int)&UNK_0000a9fb - (param_2 & 0xffff);
  iVar1 = 0;
  iVar3 = 0xff;
  if (b != 0) {
    iVar1 = __sdiv32_r1_by_r0((param_1 & 0xffff) * 0xff,b);
    iVar3 = iVar1;
  }
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    uVar2 = (undefined1)iVar3;
  }
  else {
    uVar2 = 0xff;
  }
  *param_3 = uVar2;
  return iVar1;
}

