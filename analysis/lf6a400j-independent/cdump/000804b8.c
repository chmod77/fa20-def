
void FUN_000804b8(char param_1,uint param_2,byte param_3,uint param_4,short *param_5)

{
  undefined1 *puVar1;
  byte bVar3;
  int iVar2;
  char cVar4;
  
  if (param_3 == 1) {
    cVar4 = -0x40;
  }
  else if (param_3 == 2) {
    cVar4 = -0x80;
  }
  else if (param_3 == 3) {
    cVar4 = '@';
  }
  else {
    cVar4 = '\n';
  }
  if (((param_1 == '\b') && (param_3 != 0)) && (param_3 < 5)) {
    bVar3 = 0;
    if (cVar4 != '\0') {
      bVar3 = cVar4 - 1;
    }
    iVar2 = ((uint)bVar3 * (param_2 & 0xffff) >> 8) - ((uint)bVar3 * 16000 >> 8);
    puVar1 = (undefined1 *)0xffffffff;
    if (iVar2 < (int)&DAT_0000c180) {
      puVar1 = &LAB_00003e80 + iVar2;
    }
    iVar2 = ((uint)puVar1 & 0xffff) - (param_4 & 0xffff);
    if ((int)&DAT_0000c17f < iVar2) {
LAB_0008057a:
      *param_5 = -1;
      return;
    }
    if (-0x3e81 < iVar2) {
      *param_5 = (short)iVar2 + 16000;
      return;
    }
  }
  else {
    iVar2 = (param_2 & 0xffff) - (param_4 & 0xffff);
    if ((int)&DAT_0000c17f < iVar2) goto LAB_0008057a;
    if (-0x3e81 < iVar2) {
      *param_5 = (short)iVar2 + 16000;
      return;
    }
  }
  *param_5 = 0;
  return;
}

