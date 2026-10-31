
uint FUN_000bd8f4(undefined1 param_1,uint param_2,uint param_3,undefined2 *param_4,
                 undefined1 *param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar1 = FUN_0016ba04(&DAT_0001561b,param_1);
  *param_5 = (char)uVar1;
  uVar4 = (uVar1 & 0xff) * (param_2 & 0xff);
  if (uVar4 < 0x8000) {
    puVar3 = (undefined *)(uVar4 * 2);
  }
  else {
    puVar3 = &DAT_0000ffff;
  }
  uVar4 = (param_3 & 0xff) * ((uint)puVar3 & 0xffff);
  if (uVar4 < 0x7fff81) {
    uVar2 = (undefined2)(uVar4 >> 7);
  }
  else {
    uVar2 = 0xffff;
  }
  *param_4 = uVar2;
  return uVar1;
}

