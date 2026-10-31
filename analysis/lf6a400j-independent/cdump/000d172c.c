
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d172c(void)

{
  int iVar1;
  byte bVar2;
  undefined2 local_1c [4];
  undefined4 local_14;
  
  local_14 = 0xffff29d0;
  FUN_000d2764((int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff29d3);
  FUN_000d27b8((int)_v_Engine_Speed_OBD_copy_2ADA,&DAT_fffef474,(int)DAT_ffff29d3,local_1c);
  iVar1 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar1 + -0xe958) = *(undefined2 *)((int)local_1c + iVar1);
    iVar1 = iVar1 + 2;
  }
  FUN_000d28d4((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0f6c,0xffff16a8,&DAT_ffff0f6e);
  FUN_000d290c((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0f6c,0xffff16a8,&DAT_ffff0f70);
  FUN_000d2944((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0f6c,0xffff16a8,&DAT_ffff0f72);
  FUN_000d297c((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0f6c,0xffff16a8,&DAT_ffff0f74);
  return;
}

