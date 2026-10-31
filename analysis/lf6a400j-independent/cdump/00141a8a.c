
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000305ae) overlaps instruction at (ram,0x000305ac)
    */
/* WARNING: Removing unreachable block (ram,0x00020007) */
/* WARNING: Removing unreachable block (ram,0x000701a4) */
/* WARNING: Removing unreachable block (ram,0x00070234) */
/* WARNING: Removing unreachable block (ram,0x000702de) */
/* WARNING: Removing unreachable block (ram,0x00070368) */
/* WARNING: Removing unreachable block (ram,0x00070350) */
/* WARNING: Removing unreachable block (ram,0x0007028c) */
/* WARNING: Removing unreachable block (ram,0x00070218) */
/* WARNING: Removing unreachable block (ram,0x0007005e) */
/* WARNING: Removing unreachable block (ram,0x000700e4) */
/* WARNING: Removing unreachable block (ram,0x00070126) */
/* WARNING: Removing unreachable block (ram,0x0007017e) */
/* WARNING: Removing unreachable block (ram,0x000700ea) */
/* WARNING: Removing unreachable block (ram,0x000700ec) */
/* WARNING: Removing unreachable block (ram,0x000309ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00141a8a(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,int param_5,
            undefined4 param_6,int *param_7)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  byte bVar9;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar10;
  int extraout_r1;
  int *piVar12;
  undefined1 *puVar13;
  undefined1 *extraout_r2;
  int extraout_r3;
  undefined1 *puVar14;
  int extraout_r3_00;
  int extraout_r3_01;
  undefined1 in_r3;
  int iVar15;
  char cVar16;
  undefined1 *puVar17;
  undefined **ppuVar18;
  int iVar19;
  int unaff_r8;
  int unaff_r9;
  int iVar20;
  undefined1 *puVar21;
  uint unaff_r10;
  byte *unaff_r11;
  byte *unaff_r12;
  int iVar22;
  undefined1 *puVar23;
  int unaff_r13;
  code *pcVar24;
  code *unaff_r14;
  uint uVar25;
  uint uVar26;
  uint in_sr;
  int unaff_gbr;
  code *in_tbr;
  undefined *in_fr13;
  undefined1 *in_stack_00000024;
  byte bStack000000f8;
  byte bStack000000fc;
  byte bStack00000100;
  byte bStack00000104;
  byte bStack00000108;
  byte bStack0000010c;
  int in_stack_00000130;
  uint uVar6;
  uint uVar11;
  
  bVar9 = *param_4;
  uVar26 = in_sr & 0xfffffffe;
  piVar12 = (int *)(&PTR_LAB_001611c8)[(uint)bVar9 * 3];
  bVar1 = param_4[1];
  puVar8 = (undefined4 *)(int)(char)bVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar9) {
  case 0:
    puVar8 = (undefined4 *)(*(code *)&LAB_000054da)(bVar1);
    return puVar8;
  case 1:
    _UNK_00000000 = (int *)0x6e4;
    UNK_00000006 = 0xc0;
    UNK_0000000c = 0;
    UNK_0000002b = 0xe4;
    UNK_00000045 = 0;
    _UNK_00008756 = (undefined *)0xab3c68ef;
    _UNK_00008776 = (undefined *)0xab3c68ef;
    _UNK_00008796 = (undefined *)0xab3c68ef;
    _UNK_00008812 = (undefined *)0x6427620f;
    _UNK_0000db70 = (undefined *)0xfffdfffd;
    _DAT_0000fbfc = (undefined *)0xffffffff;
    _UNK_0000fc39 = (undefined *)0x1020304;
    _UNK_0000fc3e = (undefined *)0xfa00fa00;
    _UNK_0000fcde = (undefined *)0x1020304;
    _UNK_0000fce4 = (undefined *)0xfa00fa00;
    _UNK_0000fda4 = (undefined *)0x64006400;
    _UNK_00010a01 = (int *)0x703f7040;
    uRam00088400 = 0x22288b03;
    uRam000b05ff = 0x10;
    uRam000d0cff = 1;
    uRam000f0dff = 1;
    uRam001010ff = 0x2c;
    _UNK_00000008 = 0;
    _UNK_00000024 = 0x6e4;
    PTR_LAB_001611c4 = &LAB_00141b88;
    return (undefined4 *)&UNK_00000001;
  case 2:
    _UNK_00000000 = (int *)0x6e4;
    UNK_00000006 = 0xc0;
    UNK_0000000c = 0;
    UNK_0000002b = 0xe4;
    UNK_00000045 = 0;
    _UNK_00008756 = (undefined *)0xab3c68ef;
    _UNK_00008776 = (undefined *)0xab3c68ef;
    _UNK_00008796 = (undefined *)0xab3c68ef;
    _UNK_00008812 = (undefined *)0x6427620f;
    _UNK_0000db70 = (undefined *)0xfffdfffd;
    _DAT_0000fbfc = (undefined *)0xffffffff;
    _UNK_0000fc39 = (undefined *)0x1020304;
    _UNK_0000fc3e = (undefined *)0xfa00fa00;
    _UNK_0000fcde = (undefined *)0x1020304;
    _UNK_0000fce4 = (undefined *)0xfa00fa00;
    _UNK_0000fda4 = (undefined *)0x64006400;
    _UNK_00010a01 = (int *)0x703f7040;
    uRam00088400 = 0x22288b03;
    uRam000b05ff = 0x10;
    uRam000d0cff = 1;
    uRam000f0dff = 1;
    uRam001010ff = 0x2c;
    _UNK_00000008 = 0;
    _UNK_00000024 = 0x6e4;
    PTR_LAB_001611c4 = &LAB_00141b88;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
    *(int *)(unaff_r12 + 0x1c) = param_5;
    *(undefined4 *)(param_5 + (int)puVar8) = param_3;
                    /* WARNING (jumptable): Read-only address (ram,0x001611c4) is written */
                    /* WARNING: Read-only address (ram,0x001611c4) is written */
    ppuVar18 = &PTR_LAB_001611c4;
    PTR_LAB_001611c4 = in_fr13;
    *(undefined ***)(param_5 + 0x30) = &PTR_LAB_001611c4;
    iVar15 = FUN_000a006c();
    sVar2 = *(short *)((int)ppuVar18 + iVar15);
    *(short *)(unaff_r12 + 0x50) = sVar2;
    *(short *)(extraout_r3_01 + iVar15) = sVar2;
    *(int *)(param_5 + iVar15) = (int)sVar2;
    *(code **)(extraout_r3_01 + iVar15) = unaff_r14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    uVar26 = ((uint)unaff_r12 & 0xff00) >> 8 | ((uint)unaff_r12 & 0xff) << 8 |
             (uint)unaff_r12 & 0xffff0000;
    *(int *)((int)&PTR_DAT_000660c8 + uVar26) = unaff_r13;
    *(undefined1 *)(unaff_r8 + uVar26) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    *(undefined1 *)((int)puVar8 * 2) = 200;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    uRam001010ff = 0x2c;
    uRam000f0dff = 1;
    uRam000d0cff = 1;
    uRam000b05ff = 0x10;
    uRam00088400 = 0x22288b03;
    _UNK_00010a01 = (int *)0x703f7040;
    _UNK_0000fda4 = (undefined *)0x64006400;
    _UNK_0000fce4 = (undefined *)0xfa00fa00;
    _UNK_0000fcde = (undefined *)0x1020304;
    _UNK_0000fc3e = (undefined *)0xfa00fa00;
    _UNK_0000fc39 = (undefined *)0x1020304;
    _DAT_0000fbfc = (undefined *)0xffffffff;
    _UNK_0000db70 = (undefined *)0xfffdfffd;
    _UNK_00008812 = (undefined *)0x6427620f;
    _UNK_00008796 = (undefined *)0xab3c68ef;
    _UNK_00008776 = (undefined *)0xab3c68ef;
    _UNK_00008756 = (undefined *)0xab3c68ef;
    UNK_00000045 = 0;
    UNK_0000002b = 0xe4;
    UNK_0000000c = 0;
    UNK_00000006 = 0xc0;
                    /* WARNING: Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000006) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000002b) is written */
                    /* WARNING: Read-only address (ram,0x00000045) is written */
                    /* WARNING: Read-only address (ram,0x00008756) is written */
                    /* WARNING: Read-only address (ram,0x00008776) is written */
                    /* WARNING: Read-only address (ram,0x00008796) is written */
                    /* WARNING: Read-only address (ram,0x00008812) is written */
                    /* WARNING: Read-only address (ram,0x0000db70) is written */
                    /* WARNING: Read-only address (ram,0x0000fbfc) is written */
                    /* WARNING: Read-only address (ram,0x0000fc39) is written */
                    /* WARNING: Read-only address (ram,0x0000fc3e) is written */
                    /* WARNING: Read-only address (ram,0x0000fcde) is written */
                    /* WARNING: Read-only address (ram,0x0000fce4) is written */
                    /* WARNING: Read-only address (ram,0x0000fda4) is written */
                    /* WARNING: Read-only address (ram,0x00010a01) is written */
                    /* WARNING: Read-only address (ram,0x00088400) is written */
                    /* WARNING: Read-only address (ram,0x000b05ff) is written */
                    /* WARNING: Read-only address (ram,0x000d0cff) is written */
                    /* WARNING: Read-only address (ram,0x000f0dff) is written */
                    /* WARNING: Read-only address (ram,0x001010ff) is written */
    _UNK_00000000 = (int *)0x6e4;
    _UNK_00000008 = 0;
    _UNK_00000024 = 0x6e4;
    PTR_LAB_001611c4 = &LAB_00141b88;
    return (undefined4 *)0xffffff99;
  case 7:
    *param_7 = (int)(char)bVar9;
    *param_7 = -1;
    return puVar8;
  case 8:
    FUN_00131998((int)*(char *)(unaff_gbr + 0x23),param_5,(int)*(char *)(unaff_gbr + 0xc2),
                 (int)*(char *)(unaff_gbr + 0xc4),(*(byte *)(unaff_r8 + 4) & 8) != 0,*unaff_r11 & 1,
                 (*unaff_r12 & 4) != 0,&stack0x000000f8);
    (*unaff_r14)(0xf0);
    bVar9 = *(byte *)(unaff_gbr + 0xd3) | 8;
    if ((bStack000000f8 & 1) == 0) {
      bVar9 = *(byte *)(unaff_gbr + 0xd3) & 0xf7;
    }
    *(byte *)(unaff_gbr + 0xd3) = bVar9;
    (*unaff_r14)();
    FUN_001319f0((int)*(char *)(unaff_gbr + 0x23),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 (int)*(char *)(unaff_gbr + 0xc2),(int)*(char *)(unaff_gbr + 0xc4),
                 (*(byte *)(unaff_r8 + 4) & 2) != 0,*unaff_r11 & 1,(*unaff_r12 & 4) != 0,
                 &stack0x000000fc);
    uVar7 = (*unaff_r14)(0xf0);
    bVar9 = *(byte *)(unaff_gbr + 0xd3) | 2;
    if ((bStack000000fc & 1) == 0) {
      bVar9 = *(byte *)(unaff_gbr + 0xd3) & 0xfd;
    }
    *(byte *)(unaff_gbr + 0xd3) = bVar9;
    (*unaff_r14)(uVar7);
    FUN_00131bc4((int)*(char *)(unaff_gbr + 0x35),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 (int)*(char *)(unaff_gbr + 199),(int)*(char *)(unaff_gbr + 0xc5),
                 (DAT_fffefa39 & 8) != 0,*unaff_r11 & 1,(*unaff_r12 & 4) != 0,&stack0x00000100);
    (*unaff_r14)(0xf0);
    bVar9 = *(byte *)(unaff_gbr + 0xdf) | 8;
    if ((bStack00000100 & 1) == 0) {
      bVar9 = *(byte *)(unaff_gbr + 0xdf) & 0xf7;
    }
    *(byte *)(unaff_gbr + 0xdf) = bVar9;
    (*unaff_r14)();
    FUN_00131c1c((int)*(char *)(unaff_gbr + 0x35),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 (int)*(char *)(unaff_gbr + 199),(int)*(char *)(unaff_gbr + 0xc5),
                 (DAT_fffefa39 & 4) != 0,*unaff_r11 & 1,(*unaff_r12 & 4) != 0,&stack0x00000104);
    (*unaff_r14)(0xf0);
    bVar9 = *(byte *)(unaff_gbr + 0xdf) | 2;
    if ((bStack00000104 & 1) == 0) {
      bVar9 = *(byte *)(unaff_gbr + 0xdf) & 0xfd;
    }
    *(byte *)(unaff_gbr + 0xdf) = bVar9;
    (*unaff_r14)();
    FUN_00131e70((int)*(char *)(unaff_gbr + 0x35),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 (int)*(char *)(unaff_gbr + 199),(int)*(char *)(unaff_gbr + 0xc5),
                 (*(byte *)(unaff_r8 + 4) & 4) != 0,*unaff_r11 & 1,(*unaff_r12 & 4) != 0,
                 &stack0x00000108);
    uVar7 = (*unaff_r14)(0xf0);
    bVar9 = *(byte *)(unaff_gbr + 0xe4) | 8;
    if ((bStack00000108 & 1) == 0) {
      bVar9 = *(byte *)(unaff_gbr + 0xe4) & 0xf7;
    }
    *(byte *)(unaff_gbr + 0xe4) = bVar9;
    (*unaff_r14)(uVar7);
    FUN_00131ec8((int)*(char *)(unaff_gbr + 0x35),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 (int)*(char *)(unaff_gbr + 199),(int)*(char *)(unaff_gbr + 0xc5),
                 *(byte *)(unaff_r8 + 4) & 1,*unaff_r11 & 1,(*unaff_r12 & 4) != 0,&stack0x0000010c);
    uVar7 = (*unaff_r14)(0xf0);
    bVar9 = *(byte *)(unaff_gbr + 0xe4) | 2;
    if ((bStack0000010c & 1) == 0) {
      bVar9 = *(byte *)(unaff_gbr + 0xe4) & 0xfd;
    }
    *(byte *)(unaff_gbr + 0xe4) = bVar9;
    (*unaff_r14)(uVar7);
    FUN_00129a94((int)*(char *)(unaff_gbr + 0x1a),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 (int)*(char *)(unaff_gbr + 0xc0),(int)*(char *)(unaff_gbr + 0xc3),
                 (*(byte *)(unaff_gbr + 0xcf) & 2) != 0,_DAT_ffff3a3e,DAT_ffff3853,DAT_fffefa45,
                 &DAT_ffff3a3e);
    FUN_00129bb8((int)DAT_ffff3856,(int)*(char *)(unaff_gbr + 0x23),
                 (*(byte *)(unaff_gbr + 0xd1) & 8) != 0,(int)*(char *)(unaff_gbr + 0xc2),
                 *(undefined1 *)(unaff_gbr + 0xc4),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 _DAT_ffff3a44,DAT_fffefa45,(DAT_fffefa3c & 2) != 0,*unaff_r11 & 1,
                 (*unaff_r12 & 4) != 0,&DAT_ffff3a44);
    FUN_00129c50((int)DAT_ffff3857);
    FUN_00129ce8((int)*(char *)(unaff_gbr + 0x23),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 (int)*(char *)(unaff_gbr + 0xc2),(int)*(char *)(unaff_gbr + 0xc4),
                 (*(byte *)(unaff_gbr + 0xd3) & 8) != 0,DAT_ffff3858,_DAT_ffff3a48,DAT_fffefa45,
                 (*(byte *)(unaff_r8 + 4) & 8) != 0,*unaff_r11 & 1,(*unaff_r12 & 4) != 0,
                 &DAT_ffff3a48);
    FUN_00129d80((int)*(char *)(unaff_gbr + 0x23),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 (int)*(char *)(unaff_gbr + 0xc2),(int)*(char *)(unaff_gbr + 0xc4),
                 (*(byte *)(unaff_gbr + 0xd3) & 2) != 0,DAT_ffff3859,_DAT_ffff3a4a,DAT_fffefa45,
                 (*(byte *)(unaff_r8 + 4) & 2) != 0,*unaff_r11 & 1,(*unaff_r12 & 4) != 0,
                 &DAT_ffff3a4a);
    FUN_0012a09c((int)_DAT_ffff3ace,0,(int)_DAT_ffff3a7a,(int)_DAT_ffff3a5e,_DAT_ffff3a38,
                 &DAT_ffff3a5a);
    FUN_0012a1e4((int)DAT_ffff3864,(int)*(char *)(unaff_gbr + 0x35),
                 (*(byte *)(unaff_gbr + 0xdf) & 8) != 0,(int)*(char *)(unaff_gbr + 199),
                 *(undefined1 *)(unaff_gbr + 0xc5),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 _DAT_ffff3a62,DAT_fffefa45,(DAT_fffefa39 & 8) != 0,*unaff_r11 & 1,
                 (*unaff_r12 & 4) != 0,&DAT_ffff3a62);
    FUN_0012a27c((int)DAT_ffff3865,(int)*(char *)(unaff_gbr + 0x35),
                 (*(byte *)(unaff_gbr + 0xdf) & 2) != 0,(int)*(char *)(unaff_gbr + 199),
                 *(undefined1 *)(unaff_gbr + 0xc5),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 _DAT_ffff3a64,DAT_fffefa45,(DAT_fffefa39 & 4) != 0,*unaff_r11 & 1,
                 (*unaff_r12 & 4) != 0,&DAT_ffff3a64);
    FUN_0012a654((int)DAT_ffff386c,(int)*(char *)(unaff_gbr + 0x35),
                 (*(byte *)(unaff_gbr + 0xe4) & 8) != 0,(int)*(char *)(unaff_gbr + 199),
                 *(undefined1 *)(unaff_gbr + 0xc5),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 _DAT_ffff3a72,DAT_fffefa45,(*(byte *)(unaff_r8 + 4) & 4) != 0,*unaff_r11 & 1,
                 (*unaff_r12 & 4) != 0,&DAT_ffff3a72);
    FUN_0012a6ec((int)DAT_ffff386d,(int)*(char *)(unaff_gbr + 0x35),
                 (*(byte *)(unaff_gbr + 0xe4) & 2) != 0,(int)*(char *)(unaff_gbr + 199),
                 *(undefined1 *)(unaff_gbr + 0xc5),(*(byte *)(unaff_gbr + 200) & 0x10) != 0,
                 _DAT_ffff3a74,DAT_fffefa45,*(byte *)(unaff_r8 + 4) & 1,*unaff_r11 & 1,
                 (*unaff_r12 & 4) != 0,&DAT_ffff3a74);
    FUN_00130ac4((int)_DAT_ffff3acc,(int)_DAT_ffff3ace,0,(int)_DAT_ffff3a7a,_DAT_ffff3a76,
                 _DAT_ffff3a5e,_DAT_ffff3a38,&DAT_ffff3ac4);
    FUN_00130b90((int)_DAT_ffff3ace,0,(int)_DAT_ffff3a7a,(int)_DAT_ffff3a5e,_DAT_ffff3a38,
                 &DAT_ffff3ac8);
    FUN_0012aa94((int)_DAT_ffff3a82,(int)_DAT_ffff3a3e,&DAT_ffff3853);
    FUN_0012aab4((int)_DAT_ffff3a82,(int)_DAT_ffff3a3e,&DAT_ffff3a84);
    FUN_0012c680((int)_DAT_ffff3a92,(int)_DAT_ffff3a44,&DAT_ffff3856);
    FUN_0012c6a0((int)_DAT_ffff3a92,(int)_DAT_ffff3a44,&DAT_ffff3a94);
    FUN_0012c73c((int)_DAT_ffff3a96,(int)_DAT_ffff3a46,&DAT_ffff3857);
    FUN_0012c75c((int)_DAT_ffff3a96,(int)_DAT_ffff3a46,&DAT_ffff3a98);
    FUN_0012c7f8((int)_DAT_ffff3a9a,(int)_DAT_ffff3a48,&DAT_ffff3858);
    FUN_0012c818((int)_DAT_ffff3a9a,(int)_DAT_ffff3a48,&DAT_ffff3a9c);
    FUN_0012c8b4((int)_DAT_ffff3a9e,(int)_DAT_ffff3a4a,&DAT_ffff3859);
    FUN_0012c8d4((int)_DAT_ffff3a9e,(int)_DAT_ffff3a4a,&DAT_ffff3aa0);
    FUN_00130dec((int)_DAT_ffff3ad4,(int)_DAT_ffff3a62,unaff_r9 + 6);
    FUN_00130e0c((int)_DAT_ffff3ad4,(int)_DAT_ffff3a62,in_stack_00000130 + 10);
    FUN_00130ea8((int)_DAT_ffff3ad8,(int)_DAT_ffff3a64,unaff_r9 + 7);
    in_stack_00000130 = in_stack_00000130 + 0xe;
    FUN_00130ec8((int)_DAT_ffff3ad8,(int)_DAT_ffff3a64);
    FUN_0013150c((int)_DAT_ffff3af4,(int)_DAT_ffff3a72,unaff_r9 + 0xe);
    FUN_0013152c((int)_DAT_ffff3af4,(int)_DAT_ffff3a72,unaff_r10 + 10);
    FUN_001315c8((int)_DAT_ffff3af8,(int)_DAT_ffff3a74,unaff_r9 + 0xf);
    puVar8 = (undefined4 *)FUN_001315e8((int)_DAT_ffff3af8,(int)_DAT_ffff3a74,unaff_r10 + 0xe);
    return puVar8;
  case 9:
    *(int *)(int)*(char *)((int)param_7 + 0xe) = (int)*(char *)((int)param_7 + 0xe);
    *(int *)(int)*(char *)(uVar26 + 0xe) = (int)*(char *)(uVar26 + 0xe);
                    /* WARNING (jumptable): Read-only address (ram,0x00008812) is written */
                    /* WARNING: Read-only address (ram,0x00008812) is written */
    _UNK_00008812 = &UNK_00008812;
    *(int *)(int)*(char *)(uVar26 + 0xe) = (int)*(char *)(uVar26 + 0xe);
                    /* WARNING (jumptable): Read-only address (ram,0x00008796) is written */
                    /* WARNING: Read-only address (ram,0x00008796) is written */
    _UNK_00008796 = &UNK_00008796;
                    /* WARNING (jumptable): Read-only address (ram,0x00008776) is written */
                    /* WARNING: Read-only address (ram,0x00008776) is written */
    _UNK_00008776 = &UNK_00008776;
                    /* WARNING (jumptable): Read-only address (ram,0x00008756) is written */
                    /* WARNING: Read-only address (ram,0x00008756) is written */
    _UNK_00008756 = &UNK_00008756;
    uVar26 = uVar26 | param_7 < piVar12;
    uRam00319600 = 0x319600;
    if (((byte)uVar26 & 1) == 1) {
      uVar5 = 1;
                    /* WARNING (jumptable): Read-only address (ram,0x00010a01) is written */
                    /* WARNING: Read-only address (ram,0x00010a01) is written */
      _UNK_00010a01 = piVar12;
    }
    else {
      uVar5 = uVar26;
      if (((byte)uVar26 & 1) == 1) {
        uVar5 = 0;
      }
    }
    *(uint *)uVar5 = uVar5;
                    /* WARNING (jumptable): Read-only address (ram,0x0000db70) is written */
                    /* WARNING: Read-only address (ram,0x0000db70) is written */
    _UNK_0000db70 = &UNK_0000db70;
                    /* WARNING (jumptable): Read-only address (ram,0x00088400) is written */
                    /* WARNING: Read-only address (ram,0x00088400) is written */
    uRam00088400 = 0x88400;
    *puVar8 = 2;
    *(uint *)((uint)param_7 & 0xff) = (uint)param_7 & 0xff;
    *puVar8 = 2;
    iVar19 = 0;
                    /* WARNING (jumptable): Read-only address (ram,0x0000fc39) is written */
                    /* WARNING: Read-only address (ram,0x0000fc39) is written */
    _UNK_0000fc39 = &UNK_0000fc39;
                    /* WARNING (jumptable): Read-only address (ram,0x0000fc3e) is written */
                    /* WARNING: Read-only address (ram,0x0000fc3e) is written */
    _UNK_0000fc3e = &UNK_0000fc3e;
    *puVar8 = 2;
    *(uint *)uVar26 = uVar26;
    *puVar8 = 2;
                    /* WARNING (jumptable): Read-only address (ram,0x0000fcde) is written */
                    /* WARNING: Read-only address (ram,0x0000fcde) is written */
    _UNK_0000fcde = &UNK_0000fcde;
                    /* WARNING (jumptable): Read-only address (ram,0x0000fce4) is written */
                    /* WARNING: Read-only address (ram,0x0000fce4) is written */
    _UNK_0000fce4 = &UNK_0000fce4;
    *puVar8 = 2;
    *(uint *)uVar26 = uVar26;
    *puVar8 = 2;
    *(uint *)uVar26 = uVar26;
    *puVar8 = 2;
    *(uint *)uVar26 = uVar26;
    *puVar8 = 2;
    iVar15 = 0;
                    /* WARNING (jumptable): Read-only address (ram,0x0000fda4) is written */
                    /* WARNING: Read-only address (ram,0x0000fda4) is written */
    _UNK_0000fda4 = &UNK_0000fda4;
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x0000fbfc) is written */
                    /* WARNING: Read-only address (ram,0x0000fbfc) is written */
    _DAT_0000fbfc = &DAT_0000fbfc;
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
    _UNK_00000000 = (int *)0x0;
    *(uint *)uVar26 = uVar26;
    _UNK_00000000 = (int *)(*(in_tbr + 0xd40))(0);
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
    (*(in_tbr + 0xf40))();
                    /* WARNING (jumptable): Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
    UNK_0000000c = (undefined1)uVar26;
    *(uint *)uVar26 = uVar26;
    _UNK_00000000 = (int *)(*(in_tbr + 0x9c0))();
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
    (*(in_tbr + 0xbc0))();
    *(uint *)uVar26 = uVar26;
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
    *(uint *)uVar26 = uVar26;
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
    _UNK_00000000 = (int *)(iVar19 + 0xec);
    *(uint *)uVar26 = uVar26;
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
    iVar20 = *(int *)(extraout_r3 + 0x10);
    *(uint *)uVar26 = uVar26;
    iVar22 = *(int *)(iVar15 + 0x10);
    *(uint *)uVar26 = uVar26;
                    /* WARNING (jumptable): Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000000) is written */
    iVar19 = *_UNK_00000000;
    iVar15 = 0;
    if ((uVar26 & 1) == 0) {
      iVar15 = 0xfffe;
    }
    *(int *)(uVar26 + iVar15) = iVar15;
    *(char *)(iVar15 + 0x2c) = (char)iVar15;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0x38;
                    /* WARNING (jumptable): Read-only address (ram,0x00000006) is written */
                    /* WARNING: Read-only address (ram,0x00000006) is written */
    UNK_00000006 = 6;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0x50;
    uRam010201ff = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0x60;
    puVar13 = (undefined1 *)(uVar26 - 1);
    *puVar13 = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0x70;
    puVar14 = (undefined1 *)(uVar26 - 1);
    *puVar14 = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0x80;
                    /* WARNING (jumptable): Read-only address (ram,0x00000045) is written */
                    /* WARNING: Read-only address (ram,0x00000045) is written */
    UNK_00000045 = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0x90;
                    /* WARNING (jumptable): Read-only address (ram,0x000b05ff) is written */
                    /* WARNING: Read-only address (ram,0x000b05ff) is written */
    uRam000b05ff = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0xa0;
    puVar17 = (undefined1 *)(iVar19 + -1);
    *puVar17 = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0xb0;
                    /* WARNING (jumptable): Read-only address (ram,0x000d0cff) is written */
                    /* WARNING: Read-only address (ram,0x000d0cff) is written */
    uRam000d0cff = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0xc0;
                    /* WARNING (jumptable): Read-only address (ram,0x0000002b) is written */
                    /* WARNING: Read-only address (ram,0x0000002b) is written */
    UNK_0000002b = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0xd0;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0xe0;
    puVar21 = (undefined1 *)(iVar20 + -1);
    *puVar21 = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) & 0xf0;
                    /* WARNING (jumptable): Read-only address (ram,0x000f0dff) is written */
                    /* WARNING: Read-only address (ram,0x000f0dff) is written */
    uRam000f0dff = 7;
    *(undefined1 *)(unaff_gbr + 7) = *(undefined1 *)(unaff_gbr + 7);
    uRamffffffff = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x10;
    puVar23 = (undefined1 *)(iVar22 + -1);
    *puVar23 = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x20;
    pcVar24 = unaff_r14 + -1;
    *pcVar24 = (code)0x7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x30;
                    /* WARNING (jumptable): Read-only address (ram,0x001010ff) is written */
                    /* WARNING: Read-only address (ram,0x001010ff) is written */
    uRam001010ff = 7;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x40;
    uVar5 = (byte)(uVar26 & 0xfffffeff) & 1 | 0xe;
    bVar3 = ((byte)(uVar26 >> 8) & 1) == ((byte)(uVar26 >> 9) & 1);
    bVar4 = (uVar26 >> 9 & 1) == 0;
    uVar6 = (uint)bVar3 * (uVar5 - 7) + (uint)!bVar3 * (uVar5 + 7);
    cVar16 = bVar3 * (uVar5 < uVar6) + !bVar3 * (uVar6 < uVar5);
    uVar6 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar26 & 0xfffffeff | uVar6;
    uVar26 = uVar26 & 0xfffffefe;
    uVar11 = uVar26 | uVar6;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x50;
    uVar5 = uVar26 | uVar6 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (byte)uVar5 & 1 | 0x20403fe;
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar4 = (uVar11 >> 9 & 1) == 0;
    uVar11 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar11) + !bVar3 * (uVar11 < uVar10);
    uVar11 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar11;
    uVar26 = uVar26 | uVar6 & 0xfffffefe;
    uVar6 = uVar26 | uVar11;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x60;
    uVar5 = uVar26 | uVar11 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (int)puVar13 * 2 | (uint)((byte)uVar5 & 1);
    bVar3 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
    bVar4 = (bool)((byte)(uVar6 >> 9) & 1) == (((uint)puVar13 & 0x80000000) != 0);
    uVar6 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar6) + !bVar3 * (uVar6 < uVar10);
    uVar6 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar6;
    uVar26 = uVar26 | uVar11 & 0xfffffefe;
    uVar11 = uVar26 | uVar6;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x70;
    uVar5 = uVar26 | uVar6 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (int)puVar14 * 2 | (uint)((byte)uVar5 & 1);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar4 = (bool)((byte)(uVar11 >> 9) & 1) == (((uint)puVar14 & 0x80000000) != 0);
    uVar11 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar11) + !bVar3 * (uVar11 < uVar10);
    uVar11 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar11;
    uVar26 = uVar26 | uVar6 & 0xfffffefe;
    uVar6 = uVar26 | uVar11;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x80;
    uVar5 = uVar26 | uVar11 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (byte)uVar5 & 1 | 0x8a;
    bVar3 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
    bVar4 = (uVar6 >> 9 & 1) == 0;
    uVar6 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar6) + !bVar3 * (uVar6 < uVar10);
    uVar6 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar6;
    uVar26 = uVar26 | uVar11 & 0xfffffefe;
    uVar11 = uVar26 | uVar6;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0x90;
    uVar5 = uVar26 | uVar6 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (byte)uVar5 & 1 | 0x160bfe;
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar4 = (uVar11 >> 9 & 1) == 0;
    uVar11 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar11) + !bVar3 * (uVar11 < uVar10);
    uVar11 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar11;
    uVar26 = uVar26 | uVar6 & 0xfffffefe;
    uVar6 = uVar26 | uVar11;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0xa0;
    uVar5 = uVar26 | uVar11 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (int)puVar17 * 2 | (uint)((byte)uVar5 & 1);
    bVar3 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
    bVar4 = (bool)((byte)(uVar6 >> 9) & 1) == (((uint)puVar17 & 0x80000000) != 0);
    uVar6 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar6) + !bVar3 * (uVar6 < uVar10);
    uVar6 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar6;
    uVar26 = uVar26 | uVar11 & 0xfffffefe;
    uVar11 = uVar26 | uVar6;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0xb0;
    uVar5 = uVar26 | uVar6 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (byte)uVar5 & 1 | 0x1a19fe;
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar4 = (uVar11 >> 9 & 1) == 0;
    uVar11 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar11) + !bVar3 * (uVar11 < uVar10);
    uVar11 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar11;
    uVar26 = uVar26 | uVar6 & 0xfffffefe;
    uVar6 = uVar26 | uVar11;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0xc0;
    uVar5 = uVar26 | uVar11 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (byte)uVar5 & 1 | 0x56;
    bVar3 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
    bVar4 = (uVar6 >> 9 & 1) == 0;
    uVar6 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar6) + !bVar3 * (uVar6 < uVar10);
    uVar6 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar6;
    uVar26 = uVar26 | uVar11 & 0xfffffefe;
    uVar11 = uVar26 | uVar6;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0xd0;
    uVar5 = uVar26 | uVar6 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (byte)uVar5 & 1 | 0xfffffffe;
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar4 = ((byte)(uVar11 >> 9) & 1) == 1;
    uVar11 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar11) + !bVar3 * (uVar11 < uVar10);
    uVar11 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar11;
    uVar26 = uVar26 | uVar6 & 0xfffffefe;
    uVar6 = uVar26 | uVar11;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0xe0;
    uVar5 = uVar26 | uVar11 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (int)puVar21 * 2 | (uint)((byte)uVar5 & 1);
    bVar3 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
    bVar4 = (bool)((byte)(uVar6 >> 9) & 1) == (((uint)puVar21 & 0x80000000) != 0);
    uVar6 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar6) + !bVar3 * (uVar6 < uVar10);
    uVar6 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar6;
    uVar26 = uVar26 | uVar11 & 0xfffffefe;
    uVar11 = uVar26 | uVar6;
    *(byte *)(unaff_gbr + 7) = *(byte *)(unaff_gbr + 7) | 0xf0;
    uVar5 = uVar26 | uVar6 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (byte)uVar5 & 1 | 0x1e1bfe;
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar4 = (uVar11 >> 9 & 1) == 0;
    uVar11 = (uint)bVar3 * (uVar10 - 7) + (uint)!bVar3 * (uVar10 + 7);
    cVar16 = bVar3 * (uVar10 < uVar11) + !bVar3 * (uVar11 < uVar10);
    uVar11 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar11;
    uVar26 = uVar26 | uVar6 & 0xfffffefe;
    uVar6 = uVar26 | uVar11;
    uVar5 = uVar26 | uVar11 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (byte)uVar5 & 1 | 0xfffffffe;
    bVar3 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
    bVar4 = ((byte)(uVar6 >> 9) & 1) == 1;
    uVar6 = (uint)bVar3 * (uVar10 + 0xc3fc0000) + (uint)!bVar3 * (uVar10 + 0x3c040000);
    cVar16 = bVar3 * (uVar10 < uVar6) + !bVar3 * (uVar6 < uVar10);
    uVar6 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar6;
    uVar26 = uVar26 | uVar11 & 0xfffffefe;
    uVar11 = uVar26 | uVar6;
    uVar5 = uVar26 | uVar6 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (int)puVar23 * 2 | (uint)((byte)uVar5 & 1);
    bVar3 = ((byte)(uVar11 >> 8) & 1) == ((byte)(uVar11 >> 9) & 1);
    bVar4 = (bool)((byte)(uVar11 >> 9) & 1) == (((uint)puVar23 & 0x80000000) != 0);
    uVar11 = (uint)bVar3 * (uVar10 + 0xbafc0000) + (uint)!bVar3 * (uVar10 + 0x45040000);
    cVar16 = bVar3 * (uVar10 < uVar11) + !bVar3 * (uVar11 < uVar10);
    uVar11 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar11;
    uVar26 = uVar26 | uVar6 & 0xfffffefe;
    uVar6 = uVar26 | uVar11;
    uVar5 = uVar26 | uVar11 & 0xfffffeff |
            (uint)(((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1));
    uVar10 = (int)pcVar24 * 2 | (uint)((byte)uVar5 & 1);
    bVar3 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
    bVar4 = (bool)((byte)(uVar6 >> 9) & 1) == (((uint)pcVar24 & 0x80000000) != 0);
    uVar6 = (uint)bVar3 * (uVar10 + 0xb1fc0000) + (uint)!bVar3 * (uVar10 + 0x4e040000);
    cVar16 = bVar3 * (uVar10 < uVar6) + !bVar3 * (uVar6 < uVar10);
    uVar6 = (uint)(byte)(bVar4 * cVar16 + (!bVar4 && cVar16 == '\0')) << 8;
    uVar5 = uVar5 | uVar6;
    uVar6 = uVar26 | uVar11 & 0xfffffefe | uVar6;
    uVar25 = ((byte)(uVar5 >> 8) & 1) == ((byte)(uVar5 >> 9) & 1) | 0x2021fe;
    bVar3 = ((byte)(uVar6 >> 8) & 1) == ((byte)(uVar6 >> 9) & 1);
    uVar26 = (uint)(((uint)bVar3 * (uVar25 + 0xa8fc0000) + (uint)!bVar3 * (uVar25 + 0x57040000) &
                    0x80000000) != 0);
    iVar15 = 4;
    puVar13 = &UNK_00008051;
                    /* WARNING (jumptable): Read-only address (ram,0x00000008) is written */
                    /* WARNING: Read-only address (ram,0x00000008) is written */
    _UNK_00000008 = 0x8000;
    (*in_tbr)(&UNK_00008051,4,4,4);
    if (((byte)uVar26 & 1) != 1) {
      *extraout_r2 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((uVar26 & 1) != 0) {
      *puVar13 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar13[1] = 0;
    *(undefined2 *)(extraout_r1 + 0x16) = 0;
    *(undefined1 *)(iVar15 + 1) = 0;
    uRamffff9720 = 0;
    uRamffff9722 = 0;
                    /* WARNING (jumptable): Read-only address (ram,0x00000024) is written */
                    /* WARNING: Read-only address (ram,0x00000024) is written */
    _UNK_00000024 = 0;
    uRamffff9115 = 0;
    *(undefined **)(extraout_r3_00 + 0x20) = &UNK_00007bb5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    _UNK_00000000 = (int *)0x6e4;
    UNK_00000006 = 0xc0;
    UNK_0000000c = 0;
    UNK_0000002b = 0xe4;
    UNK_00000045 = 0;
    _UNK_00008756 = (undefined *)0xab3c68ef;
    _UNK_00008776 = (undefined *)0xab3c68ef;
    _UNK_00008796 = (undefined *)0xab3c68ef;
    _UNK_00008812 = (undefined *)0x6427620f;
    _UNK_0000db70 = (undefined *)0xfffdfffd;
    _DAT_0000fbfc = (undefined *)0xffffffff;
    _UNK_0000fc39 = (undefined *)0x1020304;
    _UNK_0000fc3e = (undefined *)0xfa00fa00;
    _UNK_0000fcde = (undefined *)0x1020304;
    _UNK_0000fce4 = (undefined *)0xfa00fa00;
    _UNK_0000fda4 = (undefined *)0x64006400;
    _UNK_00010a01 = (int *)0x703f7040;
    uRam00088400 = 0x22288b03;
    uRam000b05ff = 0x10;
    uRam000d0cff = 1;
    uRam000f0dff = 1;
    uRam001010ff = 0x2c;
    _UNK_00000008 = 0;
    _UNK_00000024 = 0x6e4;
    PTR_LAB_001611c4 = &LAB_00141b88;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_r9 + 2) = (short)(char)bVar1;
  DAT_fffebd64 = 0;
  cVar16 = '\0';
  if ((char)bVar9 != 0) {
    cVar16 = DAT_fffebd60;
  }
  puVar8 = (undefined4 *)((uint)piVar12 & 0xff);
  if (puVar8 == (undefined4 *)&UNK_00000003) {
    puVar8 = (undefined4 *)0xffffffff;
    if ((0xfe < ((uint)unaff_r14 & 0xff)) &&
       (puVar8 = (undefined4 *)0xffffffff, ((uint)unaff_r14 & 0xff) < 0x100)) {
      if (unaff_r13 != 0) {
        puVar8 = &DAT_000007d0;
        if ((((uint)unaff_r11 & 0xffff) < 2000) ||
           (puVar8 = &DAT_000007d0, 2000 < ((uint)unaff_r11 & 0xffff))) goto LAB_0009006c;
      }
      if (((unaff_r12 == (byte *)0x0) && ((unaff_r10 & 0xffff) < 0x321)) &&
         ((param_7 != (int *)0x0 || (cVar16 != '\0')))) {
        *in_stack_00000024 = 0xff;
        return puVar8;
      }
    }
  }
LAB_0009006c:
  *in_stack_00000024 = 0xff;
                    /* WARNING: Read-only address (ram,0x00000000) is written */
                    /* WARNING: Read-only address (ram,0x00000006) is written */
                    /* WARNING: Read-only address (ram,0x00000008) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x00000024) is written */
                    /* WARNING: Read-only address (ram,0x0000002b) is written */
                    /* WARNING: Read-only address (ram,0x00000045) is written */
                    /* WARNING: Read-only address (ram,0x00008756) is written */
                    /* WARNING: Read-only address (ram,0x00008776) is written */
                    /* WARNING: Read-only address (ram,0x00008796) is written */
                    /* WARNING: Read-only address (ram,0x00008812) is written */
                    /* WARNING: Read-only address (ram,0x0000db70) is written */
                    /* WARNING: Read-only address (ram,0x0000fbfc) is written */
                    /* WARNING: Read-only address (ram,0x0000fc39) is written */
                    /* WARNING: Read-only address (ram,0x0000fc3e) is written */
                    /* WARNING: Read-only address (ram,0x0000fcde) is written */
                    /* WARNING: Read-only address (ram,0x0000fce4) is written */
                    /* WARNING: Read-only address (ram,0x0000fda4) is written */
                    /* WARNING: Read-only address (ram,0x00010a01) is written */
                    /* WARNING: Read-only address (ram,0x00088400) is written */
                    /* WARNING: Read-only address (ram,0x000b05ff) is written */
                    /* WARNING: Read-only address (ram,0x000d0cff) is written */
                    /* WARNING: Read-only address (ram,0x000f0dff) is written */
                    /* WARNING: Read-only address (ram,0x001010ff) is written */
                    /* WARNING: Read-only address (ram,0x001611c4) is written */
  return puVar8;
}

