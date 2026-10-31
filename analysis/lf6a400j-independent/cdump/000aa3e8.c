
void FUN_000aa3e8(uint param_1,short param_2,ushort param_3,uint param_4,char param_5,
                 undefined *param_6,short param_7,ushort *param_8)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  iVar1 = (param_1 & 0xffff) * 2 + (int)param_2 + (int)param_7;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (param_5 == '\0') {
    param_4 = 0x20;
  }
  uVar3 = (param_4 & 0xff) * iVar1;
  puVar2 = &DAT_0000ffff;
  if (uVar3 < 0x3fffc1) {
    puVar2 = (undefined *)(uVar3 >> 6);
  }
  if (((uint)puVar2 & 0xffff) < ((uint)param_6 & 0xffff)) {
    puVar2 = param_6;
  }
  if ((uint)param_3 < ((uint)puVar2 & 0xffff)) {
    *param_8 = param_3;
  }
  else {
    *param_8 = (ushort)puVar2;
  }
  return;
}

