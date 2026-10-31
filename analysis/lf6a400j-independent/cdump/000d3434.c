
void FUN_000d3434(uint param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  
  uVar1 = LK_133E10((uint)&T_02ED44,param_2);
  puVar2 = (undefined *)(param_1 & 0xffff);
  cVar3 = '\0';
  if (&UNK_0000a665 < puVar2) {
    cVar3 = DAT_fffecddc;
  }
  if (&DAT_0000bfff < puVar2) {
    cVar3 = '\x01';
  }
  if (cVar3 == '\0') {
    if (puVar2 < (undefined *)(uVar1 & 0xffff)) {
      *param_3 = 0;
    }
    else {
      *param_3 = 0xdc;
    }
  }
  else {
    *param_3 = 0xdc;
  }
  DAT_fffecddc = cVar3;
  return;
}

