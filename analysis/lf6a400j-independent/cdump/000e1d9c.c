
void FUN_000e1d9c(ushort param_1,ushort param_2,ushort param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ushort uVar4;
  undefined1 uVar5;
  
  bVar3 = true;
  if (((8999 < param_3) || (param_3 < 3000)) && (param_5 != -0x5b)) {
    bVar3 = false;
  }
  if (param_5 != -0x5b) {
    uVar1 = 0x1666;
    uVar2 = 0x2ee;
    uVar4 = 0x666;
  }
  else {
    uVar1 = 0x4cd;
    uVar2 = 500;
    uVar4 = 0x52;
  }
  uVar5 = 1;
  if (((param_1 < uVar2) || ((uVar4 <= param_2 && (bVar3)))) &&
     ((param_2 < uVar1 || ((param_4 != '\0' || (bVar3)))))) {
    uVar5 = 0;
  }
  *param_6 = uVar5;
  return;
}

