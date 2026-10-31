
int FUN_0016b44c(byte *param_1,ushort param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(short)((param_2 & 0xff) - (ushort)*param_1);
  if (iVar2 < 1) {
    uVar1 = (param_3 & 0xff) * -iVar2 + 0xff;
    iVar2 = (uint)*param_1 - ((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff);
  }
  else {
    uVar1 = (param_3 & 0xff) * iVar2 + 0xff;
    iVar2 = ((int)(char)(uVar1 >> 0x18) << 0x10 | uVar1 >> 8 & 0xffff) + (int)(char)*param_1;
  }
  *param_1 = (byte)iVar2;
  return iVar2;
}

