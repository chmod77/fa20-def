
void FUN_00095b54(ushort param_1,ushort param_2,ushort *param_3,byte param_4,char param_5,
                 ushort param_6,uint param_7,uint param_8,undefined1 *param_9,undefined1 *param_10)

{
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  uVar1 = LK_133BCC((uint)&T_02D44C,param_8 & 0xffff);
  *param_10 = (char)uVar1;
  uVar3 = param_2 + 0x666;
  if (uVar3 < param_2) {
    uVar3 = 0xffff;
  }
  uVar2 = 0;
  if (((((param_1 <= uVar3) ||
        (uVar1 = ((uVar1 & 0xff) * 0x280 >> 8) + ((int)(param_7 & 0xffff) >> 2), *param_3 <= uVar1))
       || (param_3[1] <= uVar1)) || ((param_3[2] <= uVar1 || (param_3[3] <= uVar1)))) &&
     ((0x54 < param_4 && ((param_5 != '\0' && (0x89ff < param_6)))))) {
    uVar2 = 1;
  }
  *param_9 = uVar2;
  return;
}

