
void FUN_00124f08(uint param_1,uint param_2,uint param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = LK_1390DC((uint)&T_030494,param_1,param_2);
  iVar2 = ((param_3 & 0xffff) * (uVar1 & 0xffff) >> 0xf) - ((uVar1 & 0xffff) * 32000 >> 0x10);
  if (iVar2 < (int)&DAT_0000c180) {
    if (iVar2 < -16000) {
      *param_4 = 0;
    }
    else {
      *param_4 = (short)iVar2 + 16000;
    }
  }
  else {
    *param_4 = -1;
  }
  return;
}

