
void FUN_00060320(char param_1,undefined1 param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  if (param_1 == '\x14') {
    FUN_0006035a(0x13,1);
    FUN_0006035a(0x13,2);
    FUN_0006035a(0x13,4);
    FUN_0006035a(0x13,8);
    FUN_0006035a(0x14,1);
    FUN_0006035a(0x14,2);
    bVar3 = 0;
    while ((bVar3 < 8 && (uVar1 = FUN_0016c834(), (uVar1 & 0x80) == 0))) {
      bVar3 = bVar3 + 1;
    }
    bVar2 = *(byte *)(bVar3 - 0xcbd0);
    if (((int)DAT_ffff37ca & 0x80U) == 0) {
      bVar2 = bVar2 & 0xfe;
    }
    else {
      bVar2 = bVar2 | 1;
    }
    if (((int)DAT_ffff08af & 0x80U) != 0) {
      bVar2 = bVar2 | 6;
    }
    if (((int)cRamffff3763 & 0x80U) != 0) {
      bVar2 = bVar2 | 0x28;
    }
    *(byte *)(bVar3 - 0xcbd0) = bVar2 & 0xaf;
    return;
  }
  FUN_0006035a(param_1,param_2);
  return;
}

