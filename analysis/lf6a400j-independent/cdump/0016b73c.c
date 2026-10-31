
uint FUN_0016b73c(undefined4 *param_1,ushort param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)*param_1;
  pbVar7 = (byte *)param_1[2];
  uVar1 = (uint)*(byte *)((int)param_1 + 0xd);
  uVar5 = 0;
  for (puVar6 = (ushort *)param_1[1]; *puVar6 < param_2; puVar6 = puVar6 + 1) {
    uVar2 = uVar5 & 0xff;
    uVar5 = uVar2 + 1;
    if ((int)(*(byte *)(param_1 + 3) - 1) <= (int)uVar2) {
      param_2 = *puVar6;
      break;
    }
    pbVar8 = pbVar8 + uVar1;
  }
  uVar2 = 0;
  do {
    if (param_3 <= *pbVar7) {
LAB_0016b7a2:
      if ((uVar2 & 0xff) == 0) {
        if ((uVar5 & 0xff) == 0) {
          return (int)(char)*pbVar8;
        }
        iVar4 = (int)(char)pbVar8[-uVar1];
        uVar2 = (uint)*pbVar8;
      }
      else {
        uVar3 = (uint)param_3;
        uVar2 = FUN_0016be94((int)(char)pbVar7[-1],(int)(char)*pbVar7,(int)(char)pbVar8[-1],
                             (int)(char)*pbVar8,uVar3,uVar3);
        uVar2 = uVar2 & 0xff;
        if ((uVar5 & 0xff) == 0) {
          return uVar2;
        }
        iVar4 = FUN_0016be94((int)(char)pbVar7[-1],(int)(char)*pbVar7,
                             (int)(char)(pbVar8 + -uVar1)[-1],(int)(char)pbVar8[-uVar1],uVar3);
      }
      uVar1 = FUN_0016bf30((int)(short)puVar6[-1],(int)(short)*puVar6,iVar4,uVar2,param_2);
      return uVar1;
    }
    uVar3 = uVar2 & 0xff;
    uVar2 = uVar3 + 1;
    if ((int)(uVar1 - 1) <= (int)uVar3) {
      param_3 = *pbVar7;
      goto LAB_0016b7a2;
    }
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
  } while( true );
}

