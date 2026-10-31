
/* WARNING: Removing unreachable block (ram,0x0013c690) */
/* WARNING: Removing unreachable block (ram,0x0013dbdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0013c5f0(void)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 in_pr;
  undefined8 uVar5;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint in_stack_00000028;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  _DAT_ffff2634 = _DAT_ffff2634 - 1;
  if (((_DAT_ffff2634 & 0x7fffffff) == 0 && (in_stack_00000028 & 0xf0) == 0) &&
     (DAT_ffff262c != 0xff)) {
    if ((int)(_DAT_ffff2634 | in_stack_00000028 & 0xf0) < 0) {
      puVar4 = (undefined4 *)&DAT_ffff5d88;
      in_stack_0000001c = in_pr;
    }
    else {
      if ((*(char *)((int)_DAT_ffff2644 + 1) == '\x01') || (DAT_ffff262c <= (byte)_DAT_ffff2640[1]))
      goto LAB_0013c632;
      _DAT_ffff2638 = &uStack_28;
      puVar4 = &uStack_28;
      uStack_c = in_stack_00000018;
      uStack_10 = in_stack_00000014;
      uStack_14 = in_stack_00000010;
      uStack_18 = in_stack_0000000c;
      uStack_1c = in_stack_00000008;
      uStack_20 = in_stack_00000004;
      uStack_24 = in_stack_00000000;
      uStack_28 = in_stack_0000001c;
      *_DAT_ffff2640 = 0xc;
    }
    *(undefined4 *)((int)puVar4 + -4) = in_stack_0000001c;
    iVar2 = (int)_DAT_ffff2632;
    _DAT_ffff2644 = &DAT_00169768 + iVar2 * 0x10;
    pcVar3 = (char *)(&DAT_0016976c)[iVar2 * 4];
    _DAT_ffff2630 = _DAT_ffff2632;
    _DAT_ffff2634 = 0;
    _DAT_ffff2640 = pcVar3;
    if (*pcVar3 == 0) {
      pcVar3[1] = (&DAT_0016976a)[iVar2 * 0x10];
      puVar1 = (undefined1 *)_DAT_ffff2638;
      *(undefined4 **)(pcVar3 + 4) = _DAT_ffff2638;
      uVar5 = FUN_0013ddd4((&PTR_FUN_00169770)[iVar2 * 4],puVar1);
      return uVar5;
    }
                    /* WARNING: Jumptable at 0x0013dc06 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(&DAT_0013de7c + *pcVar3))(_DAT_ffff2638);
    return uVar5;
  }
LAB_0013c632:
  return CONCAT44(in_stack_00000018,in_stack_00000020);
}

