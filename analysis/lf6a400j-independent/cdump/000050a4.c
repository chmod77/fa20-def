
uint FUN_000050a4(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)*param_1 & 0xf;
  DAT_ffffa2e0 = (byte)uVar1;
  uVar2 = 0;
  while ((uVar2 & 0xff) < (uint)DAT_ffffa2e0) {
    uVar2 = uVar2 & 0xff;
    (&DAT_ffffa2e4)[uVar2] = *(undefined1 *)(param_2 + uVar2);
    uVar1 = uVar2 + 1;
    uVar2 = uVar1;
  }
  return uVar1;
}

