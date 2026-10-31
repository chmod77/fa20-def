
uint FUN_0005dfe0(uint param_1,uint param_2)

{
  int iVar1;
  undefined1 local_4;
  undefined1 uStack_3;
  
  param_1 = param_1 ^ param_2;
  iVar1 = (param_1 & 0xffff) << 1;
  uStack_3 = (byte)iVar1 |
             (byte)((param_1 & 0xffff) >> 0xf) ^ (byte)((int)(param_1 & 0x10) >> 4) ^
             (byte)((int)(param_1 & 4) >> 2) ^ (byte)((int)(param_1 & 2) >> 1);
  local_4 = (undefined1)((uint)iVar1 >> 8);
  return CONCAT11(uStack_3,local_4) ^ param_2;
}

