
void FUN_000803a8(char param_1,char param_2,uint param_3,uint param_4,uint param_5,ushort param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,char param_11,char param_12,
                 uint param_13,undefined2 *param_14)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (-0x7d01 < (int)-(param_10 & 0xffff)) {
    uVar3 = (int)&DAT_00007d00 + -(param_10 & 0xffff);
  }
  uVar2 = param_8;
  if (((param_1 != '\x01') && (uVar2 = param_7, param_1 != '\x02')) &&
     (uVar2 = param_4, param_1 == '\b')) {
    uVar2 = param_3;
  }
  if ((param_2 == '\x18') && ((param_8 & 0xffff) < (uVar2 & 0xffff))) {
    uVar2 = param_8;
  }
  if ((param_2 == '\x17') && ((param_9 & 0xffff) < (uVar2 & 0xffff))) {
    uVar2 = param_9;
  }
  if ((param_2 == '\x16') && ((param_8 & 0xffff) < (uVar2 & 0xffff))) {
    uVar2 = param_8;
  }
  if (param_2 == '\x14') {
    uVar2 = param_8;
  }
  if ((param_2 == '\f') && ((param_5 & 0xffff) < (uVar2 & 0xffff))) {
    uVar2 = param_5;
  }
  if ((param_2 == '\v') && ((uint)param_6 < (uVar2 & 0xffff))) {
    uVar2 = (uint)(short)param_6;
  }
  if ((param_2 != '\x1b') || ((uVar2 & 0xffff) <= (param_13 & 0xffff))) {
    param_13 = uVar2;
  }
  uVar1 = (short)param_13;
  if ((param_2 == '\x19') && ((uVar3 & 0xffff) < (param_13 & 0xffff))) {
    uVar1 = (short)uVar3;
  }
  if (param_12 == '\0') {
    if (param_11 == '\0') {
      *param_14 = uVar1;
    }
    else {
      *param_14 = (short)uVar3;
    }
  }
  else {
    *param_14 = (short)param_8;
  }
  return;
}

