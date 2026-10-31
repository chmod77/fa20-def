
uint FUN_000bda04(undefined1 param_1,uint param_2,undefined2 *param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar1 = FUN_0016ba04(&DAT_000152dc,param_1);
  *param_4 = (char)uVar1;
  uVar3 = (param_2 & 0xffff) * (uVar1 & 0xff);
  if (uVar3 < 0x7fff81) {
    uVar2 = (undefined2)(uVar3 >> 7);
  }
  else {
    uVar2 = 0xffff;
  }
  *param_3 = uVar2;
  return uVar1;
}

