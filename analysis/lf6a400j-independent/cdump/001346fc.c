
/* WARNING: Unknown calling convention */

uint LK_1346FC(uint p0,uint p1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 local_1c;
  undefined4 auStack_18 [2];
  
  puVar5 = *(ushort **)(p0 + 4);
  puVar8 = *(uint **)(p0 + 8);
  uVar7 = p1 & 0xffff;
  if (*puVar5 < uVar7) {
    if (uVar7 < puVar5[*(byte *)p0 - 1]) {
      while (puVar6 = puVar5 + 1, *puVar6 < uVar7) {
        puVar8 = puVar8 + 1;
        puVar5 = puVar6;
      }
      uVar1 = *puVar5;
      uVar2 = *puVar6;
      uVar3 = *puVar8;
      uVar9 = puVar8[1];
      iVar4 = uVar3 - uVar9;
      if (uVar3 < uVar9) {
        iVar4 = -iVar4;
      }
      FUN_0016bfc8(iVar4,uVar7 - uVar1,auStack_18,&local_1c);
      iVar4 = FUN_0016c02c(auStack_18[0],local_1c,(uint)uVar2 - (uint)uVar1);
      if (uVar3 < uVar9) {
        uVar3 = uVar3 + iVar4;
      }
      else {
        uVar3 = uVar3 - iVar4;
      }
    }
    else {
      uVar3 = puVar8[*(byte *)p0 - 1];
    }
  }
  else {
    uVar3 = *puVar8;
  }
  return uVar3;
}

