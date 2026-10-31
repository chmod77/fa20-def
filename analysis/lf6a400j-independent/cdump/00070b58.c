
int FUN_00070b58(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  char cVar3;
  byte *pbVar2;
  uint uVar4;
  uint uVar5;
  short local_24;
  
  pbVar2 = param_1;
  for (uVar4 = 0; (uVar4 & 0xff) < (param_3 & 0xff); uVar4 = (uVar4 & 0xff) + 1) {
    bVar1 = *(byte *)(param_2 + (uVar4 & 0xff));
    uVar5 = (uint)bVar1;
    if (uVar5 < 0x70) {
      cVar3 = FUN_00070bd8(uVar5);
      if (((&PTR_LAB_0007d450)[uVar5] != (undefined *)0x0) && (cVar3 != '\0')) {
        *pbVar2 = bVar1;
        pbVar2 = (byte *)(*(code *)(&PTR_LAB_0007d450)[uVar5])(pbVar2 + 1);
      }
    }
  }
  if ((int)pbVar2 - (int)param_1 < 2) {
    local_24 = 0;
  }
  else {
    local_24 = (ushort)(byte)((int)pbVar2 - (int)param_1) << 8;
  }
  return (int)local_24;
}

