
uint FUN_000ab238(byte param_1,undefined2 param_2,undefined2 *param_3)

{
  undefined2 uVar2;
  uint uVar1;
  byte bVar3;
  
  uVar2 = FUN_0016bc68(&DAT_0001348c);
  bVar3 = 8;
  if (param_1 < 8) {
    bVar3 = param_1;
  }
  if (bVar3 < 2) {
    bVar3 = 1;
  }
  uVar1 = (uint)bVar3;
  if ((uVar1 != 1) && (uVar1 != 2)) {
    if (uVar1 == 3) {
      uVar1 = FUN_0016bc68(&DAT_000134ac,param_2);
      uVar2 = (undefined2)uVar1;
    }
    else if (uVar1 == 4) {
      uVar1 = FUN_0016bc68(&DAT_000134cc,param_2);
      uVar2 = (undefined2)uVar1;
    }
    else if (uVar1 == 5) {
      uVar1 = FUN_0016bc68(&DAT_000134ec,param_2);
      uVar2 = (undefined2)uVar1;
    }
    else if (uVar1 == 6) {
      uVar1 = FUN_0016bc68(&DAT_0001350c,param_2);
      uVar2 = (undefined2)uVar1;
    }
    else if (uVar1 == 7) {
      uVar1 = FUN_0016bc68(&DAT_0001352c,param_2);
      uVar2 = (undefined2)uVar1;
    }
    else if (uVar1 == 8) {
      uVar1 = FUN_0016bc68(&LAB_0001354c,param_2);
      uVar2 = (undefined2)uVar1;
    }
  }
  *param_3 = uVar2;
  return uVar1;
}

