
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001506a8(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  
  if ((DAT_ffff1e16 & 2) != 0) {
    for (uVar5 = 0; (uVar5 & 0xff) < 4; uVar5 = uVar5 + 1) {
      uVar5 = uVar5 & 0xff;
      iVar1 = uVar5 * 2;
      if (*(short *)(iVar1 + -0xd2fc) != 0) {
        FUN_00150234(*(undefined2 *)(iVar1 + -0xd2fc),uVar5,2,(int)_DAT_ffff2d54);
      }
      iVar2 = uVar5 * 4;
      if (*(int *)(iVar2 + -0xd2f4) != 0) {
        uVar3 = FUN_00001550(0xf0);
        if (*(ushort *)(&DAT_00168ce8)[uVar5 * 4] < 0x8000) {
          uVar4 = -(int)(short)*(ushort *)(&DAT_00168ce8)[uVar5 * 4] - 1;
          if ((uVar4 & 0xffff) < *(uint *)(iVar2 + -0xd2f4)) {
            uVar4 = uVar4 & 0xffff;
            *(uint *)(iVar2 + -0xd2f4) = *(int *)(iVar2 + -0xd2f4) - uVar4;
          }
          else {
            uVar4 = *(uint *)(iVar2 + -0xd2f4);
            *(undefined4 *)(iVar2 + -0xd2f4) = 0;
          }
          FUN_0014f754(uVar5,uVar4);
        }
        FUN_00001550(uVar3);
      }
      if (*(int *)(iVar2 + -0xd2e4) != 0) {
        uVar3 = FUN_00001550(0xf0);
        uVar6 = _DAT_fffff440 - *(short *)(iVar1 + -0xd33c);
        if (0x7ffe < uVar6) {
          if ((uint)uVar6 < *(uint *)(iVar2 + -0xd2e4)) {
            uVar4 = (uint)uVar6;
            *(uint *)(iVar2 + -0xd2e4) = *(int *)(iVar2 + -0xd2e4) - uVar4;
          }
          else {
            uVar4 = *(uint *)(iVar2 + -0xd2e4);
            *(undefined4 *)(iVar2 + -0xd2e4) = 0;
          }
          FUN_0014f9b0(uVar5,uVar4);
          FUN_0014fa30(uVar5,uVar4);
        }
        FUN_00001550(uVar3);
      }
    }
  }
  return;
}

