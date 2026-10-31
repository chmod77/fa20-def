
void FUN_0006035a(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  param_1 = param_1 & 0xff;
  if (((int)(char)(&DAT_00023b08)[param_1] & param_2 & 0xff) != 0) {
    param_2 = param_2 & 0xff;
    for (uVar4 = 0; (uVar4 & 0xff) < 8; uVar4 = uVar4 + 1) {
      uVar1 = __shl_r0_by_r1(1,uVar4 & 0xff);
      if ((uVar1 & param_2) != 0) break;
    }
    iVar2 = param_1 * 8 + (uVar4 & 0xff);
    bVar3 = *(byte *)(iVar2 + -0xce90);
    if ((param_2 & (int)(char)(&DAT_ffff3772)[param_1]) == 0) {
      bVar3 = bVar3 & 0xfe;
    }
    else {
      bVar3 = bVar3 | 1;
    }
    if ((param_2 & (int)*(char *)(param_1 - 0xf7a9)) != 0) {
      bVar3 = bVar3 | 6;
    }
    if ((param_2 & (int)*(char *)(param_1 - 0xc8f5)) != 0) {
      bVar3 = bVar3 | 0x28;
    }
    *(byte *)(iVar2 + -0xce90) = bVar3 & 0xaf;
  }
  return;
}

