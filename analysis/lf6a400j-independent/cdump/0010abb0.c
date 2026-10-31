
void FUN_0010abb0(short param_1,ushort param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if ((param_1 != 0x2ee) || (uVar1 = 1, param_2 < 0x28a)) {
    uVar1 = DAT_fffedc88;
  }
  if ((param_1 == 0x2ee) && (param_2 < 0x28a)) {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffedc88 = uVar1;
  return;
}

