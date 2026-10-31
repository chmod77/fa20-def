
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015afa4(int param_1)

{
  undefined4 uVar1;
  ushort *in_stack_00000000;
  undefined2 local_c;
  ushort uStack_a;
  
  if (param_1 == 0) {
    uStack_a = _DAT_fffff4e4;
    uVar1 = FUN_00001550(0xf0);
    _DAT_fffff480 = _DAT_fffff480 & 0xf7ff;
    local_c = CONCAT11(DAT_fffff4eb >> 4,(undefined1)local_c) & 0x7ff;
    FUN_00001550(uVar1);
  }
  *in_stack_00000000 = local_c;
  in_stack_00000000[1] = uStack_a;
  return;
}

