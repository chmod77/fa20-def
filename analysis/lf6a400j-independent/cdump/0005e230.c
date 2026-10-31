
void FUN_0005e230(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar2 = 0;
  if (((int)(char)*param_1 & 0x80U) != 0) {
    bVar2 = 0x20;
  }
  *param_1 = *param_1 << 1;
  pbVar3 = param_1;
  for (bVar1 = 0; param_1 = param_1 + 1, bVar1 < 4; bVar1 = bVar1 + 1) {
    *pbVar3 = *pbVar3 | ((int)(char)*param_1 & 0x80U) != 0;
    pbVar3[1] = *param_1 << 1;
    pbVar3 = pbVar3 + 1;
  }
  *pbVar3 = *pbVar3 & 0xc0 | bVar2;
  return;
}

