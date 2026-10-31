
int FUN_00070b58(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  char cVar4;
  byte *pbVar3;
  uint uVar5;
  uint uVar6;
  short local_24;
  
  pbVar3 = param_1;
  for (uVar5 = 0; (uVar5 & 0xff) < (param_3 & 0xff); uVar5 = (uVar5 & 0xff) + 1) {
    bVar1 = *(byte *)(param_2 + (uVar5 & 0xff));
    uVar6 = (uint)bVar1;
    if (uVar6 < 0x70) {
      cVar4 = FUN_00070bd8(uVar6);
      puVar2 = PTR_PTR_00070ca8;
      if ((*(int *)(PTR_PTR_00070ca8 + uVar6 * 4) != 0) && (cVar4 != '\0')) {
        *pbVar3 = bVar1;
        pbVar3 = (byte *)(**(code **)(puVar2 + uVar6 * 4))(pbVar3 + 1);
      }
    }
  }
  if ((int)pbVar3 - (int)param_1 < 2) {
    local_24 = 0;
  }
  else {
    local_24 = (ushort)(byte)((int)pbVar3 - (int)param_1) << 8;
  }
  return (int)local_24;
}

