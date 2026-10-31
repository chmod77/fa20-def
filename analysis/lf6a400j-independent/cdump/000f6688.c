
void FUN_000f6688(int param_1,int param_2,char param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = param_1 - param_2;
  if (((param_1 < 0) || (-1 < param_2)) || (-1 < (int)uVar2)) {
    if (((param_1 < 0) && (-1 < param_2)) && (-1 < (int)uVar2)) {
      uVar2 = 0x80000000;
    }
  }
  else {
    uVar2 = 0x7fffffff;
  }
  if ((int)uVar2 < 0) {
    bVar1 = 0 < (int)uVar2;
    uVar2 = -uVar2;
    if ((0 < (int)-(uint)bVar1) || ((-(uint)bVar1 == 0 && (0x7fffffff < uVar2)))) {
      uVar2 = 0x7fffffff;
    }
  }
  if (((int)&DAT_00002710 < (int)uVar2) || (uVar3 = 1, param_3 == '\0')) {
    uVar3 = DAT_fffed7b4;
  }
  if ((param_4 != '\0') || ((int)&DAT_00002710 < (int)uVar2)) {
    uVar3 = 0;
  }
  *param_5 = uVar3;
  DAT_fffed7b4 = uVar3;
  return;
}

