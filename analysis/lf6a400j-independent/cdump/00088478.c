
void FUN_00088478(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  
  uVar2 = (short)param_2 - (short)param_3;
  if ((short)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  if ((short)uVar2 < 0) {
    uVar2 = 0;
  }
  uVar1 = 1;
  if (8 < (uVar2 & 0xff)) {
    uVar1 = DAT_fffebc1c;
  }
  if (param_1 == '\x01') {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffebc1c = uVar1;
  return;
}

