
void FUN_0007bcba(void)

{
  char *pcVar1;
  char *pcVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;
  ushort uVar7;
  uint uVar6;
  ushort uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  
  if (((4 < *DAT_0007bda0) &&
      (puVar9 = DAT_0007bda0, iVar5 = (*(code *)PTR_FUN_0007bdb0)(), pcVar2 = DAT_0007bd9c,
      pcVar1 = DAT_0007bd94, iVar5 == 0)) && ((int)(uint)*puVar9 <= (int)DAT_0007bd82)) {
    if (DAT_0007bd9c[1] != '\0') {
      *DAT_0007bd94 = '\x7f';
      pcVar1[1] = (char)DAT_0007bd86;
      pcVar1[2] = '\x12';
      goto LAB_0007bdce;
    }
    *DAT_0007bd94 = *DAT_0007bd9c + '@';
    uVar7 = (*(code *)PTR_FUN_0007bdb4)();
    uVar11 = 1;
    uVar10 = 2;
    *DAT_0007bda8 = uVar7 + 1;
    puVar3 = DAT_0007bdb8;
    uVar8 = 0;
    while( true ) {
      if (uVar7 <= (uVar8 & 0xff)) {
        return;
      }
      *puVar3 = 0;
      *puVar3 = *puVar3 + (uint)(byte)pcVar2[uVar10 & 0xff] * 0x10000;
      uVar10 = (uVar10 & 0xff) + 1 & 0xff;
      *puVar3 = *puVar3 + (uint)(byte)pcVar2[uVar10] * 0x100;
      uVar6 = uVar10 + 1 & 0xff;
      uVar10 = uVar6 + 1;
      *puVar3 = *puVar3 + (uint)(byte)pcVar2[uVar6];
      if ((uint)(int)DAT_0007bd84 <= *puVar3) break;
      DAT_0007bd94[uVar11 & 0xff] = **(char **)(PTR_PTR_0007bdbc + *puVar3 * 4);
      uVar11 = (uVar11 & 0xff) + 1;
      uVar8 = uVar8 + 1;
    }
  }
  puVar4 = DAT_0007c02c;
  *DAT_0007c02c = 0x7f;
  puVar4[1] = (char)DAT_0007bf16;
  puVar4[2] = 0x13;
LAB_0007bdce:
  *DAT_0007c030 = 3;
  return;
}

