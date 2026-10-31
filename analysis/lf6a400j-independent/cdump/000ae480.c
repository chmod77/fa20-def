
uint FUN_000ae480(char param_1,uint param_2,undefined1 *param_3)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  
  cVar1 = -2;
  if (param_1 != -1) {
    cVar1 = param_1;
  }
  bVar3 = 1;
  if (1 < (byte)(cVar1 + 1U)) {
    bVar3 = cVar1 + 1U;
  }
  if (3 < bVar3) {
    bVar3 = 4;
  }
  uVar2 = (uint)bVar3;
  if (uVar2 == 1) {
    uVar2 = LK_133B38((uint)&T_02DFC8,param_2);
  }
  else if (uVar2 == 2) {
    uVar2 = LK_133B38((uint)&T_02DFD4,param_2 & 0xff);
  }
  else if (uVar2 == 3) {
    uVar2 = LK_133B38((uint)&T_02DFE0,param_2 & 0xff);
  }
  else if (uVar2 == 4) {
    uVar2 = LK_133B38((uint)&T_02DFEC,param_2 & 0xff);
  }
  *param_3 = (char)uVar2;
  return uVar2;
}

