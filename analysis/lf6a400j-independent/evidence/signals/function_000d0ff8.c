
void FUN_000d0ff8(ushort param_1,char param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = (*(code *)PTR_FUN_000d103c)
                    (0x13,(int)(short)((param_1 & 0xff) * 0x13 + param_2 * 0x13) + (int)DAT_000d1036
                    );
  uVar2 = (undefined1)uVar1;
  if ((int)DAT_000d1038 < (int)(uVar1 & 0xffff)) {
    uVar2 = (undefined1)DAT_000d1038;
  }
  *param_3 = uVar2;
  return;
}

