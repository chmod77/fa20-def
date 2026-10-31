
void FUN_00096750(byte param_1,byte param_2,byte param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  ushort uVar1;
  undefined1 uVar2;
  
  uVar1 = (ushort)param_3 - (ushort)DAT_fffebf38;
  if ((short)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  uVar2 = 1;
  if ((((param_5 == '\0') && (param_1 <= DAT_fffebf3a)) && (param_2 <= DAT_fffebf39)) &&
     (((uVar1 & 0xff) < 0x1a && (param_4 == '\0')))) {
    uVar2 = 0;
  }
  *param_6 = uVar2;
  DAT_fffebf3a = param_1;
  DAT_fffebf39 = param_2;
  DAT_fffebf38 = param_3;
  return;
}

