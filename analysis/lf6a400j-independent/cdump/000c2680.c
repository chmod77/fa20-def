
void FUN_000c2680(uint param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (DAT_fffeca0d == '\0') {
    uVar1 = 0x666;
  }
  else {
    uVar1 = 0x6b8;
  }
  DAT_fffeca0d = (param_1 & 0xffff) < (param_3 & 0xffff) + (uint)uVar1;
  if (DAT_fffeca0c == '\0') {
    uVar1 = 0x666;
  }
  else {
    uVar1 = 0x6b8;
  }
  DAT_fffeca0c = (param_2 & 0xffff) < (param_4 & 0xffff) + (uint)uVar1;
  uVar2 = 1;
  if ((!(bool)DAT_fffeca0d) && (!(bool)DAT_fffeca0c)) {
    uVar2 = 0;
  }
  *param_5 = uVar2;
  return;
}

