
char FUN_0010044c(uint param_1,uint param_2,uint param_3,ushort param_4,char param_5,char param_6,
                 uint param_7,undefined2 *param_8,undefined2 *param_9,undefined2 *param_10)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar1 = LK_1361C8((uint)&T_02F8CC,param_1,param_2);
  *param_9 = (short)uVar1;
  uVar1 = (int)&DAT_00008000 + ((uVar1 & 0xffff) - (param_3 & 0xffff));
  if (param_5 == '\x01') {
    uVar3 = 0;
  }
  else {
    uVar3 = LK_133F40((uint)&T_02F8C0,param_2);
    uVar3 = uVar3 & 0xffff;
  }
  *param_10 = (short)uVar3;
  if (param_6 != '\x04') {
    uVar3 = (int)&DAT_00008000 + (((param_7 & 0xffff) - uVar3) - (param_3 & 0xffff));
    if ((int)uVar1 <= (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar1 = (uint)param_4;
    if ((int)(uint)param_4 <= (int)uVar3) {
      uVar1 = uVar3;
    }
  }
  if (param_5 == '\x01') {
    uVar1 = 0;
  }
  if ((int)uVar1 < (int)&DAT_00010000) {
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    uVar2 = (undefined2)uVar1;
  }
  else {
    uVar2 = 0xffff;
  }
  *param_8 = uVar2;
  return param_5;
}

