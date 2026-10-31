
uint FUN_001346fc(byte *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 local_1c;
  undefined4 auStack_18 [2];
  
  puVar5 = *(ushort **)(param_1 + 4);
  puVar7 = *(uint **)(param_1 + 8);
  param_2 = param_2 & 0xffff;
  if (*puVar5 < param_2) {
    if (param_2 < puVar5[*param_1 - 1]) {
      while (puVar6 = puVar5 + 1, *puVar6 < param_2) {
        puVar7 = puVar7 + 1;
        puVar5 = puVar6;
      }
      uVar1 = *puVar5;
      uVar2 = *puVar6;
      uVar3 = *puVar7;
      uVar8 = puVar7[1];
      iVar4 = uVar3 - uVar8;
      if (uVar3 < uVar8) {
        iVar4 = -iVar4;
      }
      (*(code *)PTR_FUN_0013479c)(iVar4,param_2 - uVar1,auStack_18,&local_1c);
      iVar4 = (*(code *)PTR_FUN_001347a0)(auStack_18[0],local_1c,(uint)uVar2 - (uint)uVar1);
      if (uVar3 < uVar8) {
        uVar3 = uVar3 + iVar4;
      }
      else {
        uVar3 = uVar3 - iVar4;
      }
    }
    else {
      uVar3 = puVar7[*param_1 - 1];
    }
  }
  else {
    uVar3 = *puVar7;
  }
  return uVar3;
}

