
void FUN_000dbf64(uint param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 & 0xff) + (param_2 & 0xff) + (param_3 & 0xff);
  uVar2 = uVar1 + (param_4 & 0xff);
  if ((uVar1 <= uVar2) && (uVar2 < 0x100)) {
    *param_5 = (char)uVar2;
    return;
  }
  *param_5 = 0xff;
  return;
}

