
void FUN_000b8320(byte *param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  uint uVar2;
  byte local_4;
  
  uVar2 = (uint)*param_1 + (uint)*param_2;
  if (uVar2 < 0x180) {
    if (uVar2 < 0x80) {
      local_4 = 0;
    }
    else {
      local_4 = (char)uVar2 + 0x80;
    }
  }
  else {
    local_4 = 0xff;
  }
  uVar2 = (uint)param_1[1] + (uint)param_2[1];
  bVar1 = 0xff;
  if ((uVar2 < 0x180) && (bVar1 = 0, 0x7f < uVar2)) {
    bVar1 = (char)uVar2 + 0x80;
  }
  *param_3 = (char)((int)(uint)local_4 >> 1) + '@';
  param_3[1] = (char)((int)(uint)bVar1 >> 1) + '@';
  return;
}

