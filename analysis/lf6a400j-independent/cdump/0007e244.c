
int FUN_0007e244(byte param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  short sVar4;
  
  cVar1 = DAT_fffeba08;
  uVar3 = DAT_fffeba06;
  DAT_fffeba06 = DAT_fffeba05;
  DAT_fffeba05 = DAT_fffeba04;
  iVar2 = (int)DAT_fffeba08;
  DAT_fffeba08 = uVar3;
  sVar4 = (ushort)param_1 - (ushort)DAT_fffeba07;
  DAT_fffeba07 = cVar1;
  if (sVar4 < 0) {
    sVar4 = -sVar4;
  }
  uVar3 = (undefined1)sVar4;
  if (sVar4 < 0) {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  DAT_fffeba04 = param_1;
  return iVar2;
}

