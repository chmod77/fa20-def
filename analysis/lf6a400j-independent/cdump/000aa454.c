
void FUN_000aa454(uint param_1,uint param_2,uint param_3,ushort param_4,short param_5,short param_6,
                 uint param_7,uint param_8,undefined2 *param_9)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (((param_1 & 0xffff) + ((int)(param_2 & 0xffff) >> 1) + ((int)(param_3 & 0xffff) >> 1) +
            ((int)(uint)param_4 >> 1) + (int)(param_5 >> 1) + (int)(param_6 >> 1)) -
          ((int)(param_7 & 0xffff) >> 1)) + ((int)(param_8 & 0xffff) >> 1);
  uVar2 = 0xffff;
  if (iVar1 < (int)&DAT_00010000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    uVar2 = (undefined2)iVar1;
  }
  *param_9 = uVar2;
  return;
}

