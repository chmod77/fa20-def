
void FUN_0009128c(ushort param_1,uint param_2,ushort param_3,byte param_4,ushort param_5,
                 byte param_6,float *param_7)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = (int)(short)((short)((ulonglong)((longlong)(int)(param_2 & 0xffff) * 0x2000000) >> 0x20) -
                      (param_3 & 0xff));
  uVar1 = 0;
  if (-0x81 < iVar2) {
    uVar1 = iVar2 + 0x80;
  }
  uVar3 = param_4 + 0x80;
  if ((ushort)(param_4 + 0x100) < 0x80) {
    uVar3 = 0;
  }
  *param_7 = (float)param_1 * (float)(uVar1 & 0xffff) * (float)uVar3 * (float)param_5 *
             (float)param_6 * 9.313226e-10;
  return;
}

