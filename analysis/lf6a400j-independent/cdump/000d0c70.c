
int FUN_000d0c70(int param_1,undefined1 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar2 = (uint)bVar1 * 0x41;
  if (uVar2 < 0x3fc1) {
    uVar3 = (undefined1)((int)uVar2 >> 6);
  }
  else {
    uVar3 = 0xff;
  }
  *param_2 = uVar3;
  return (int)(char)bVar1;
}

