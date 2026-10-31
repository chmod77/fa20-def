
void FUN_000e0488(char param_1,byte param_2,uint param_3,uint param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (((8 < param_2) && (param_2 < 0x4f)) || (bVar1 = false, param_5 != '\0')) {
    bVar1 = (int)&DAT_00008000 + (param_4 & 0xffff) <= (param_3 & 0xffff);
  }
  uVar2 = 0;
  if ((param_1 != '\0') && (bVar1)) {
    uVar2 = 1;
  }
  *param_6 = uVar2;
  return;
}

