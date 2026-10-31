
/* WARNING: Removing unreachable block (ram,0x000df796) */

void FUN_000df6c8(char param_1,uint param_2,int param_3,uint param_4,int param_5,undefined1 *param_6
                 )

{
  undefined1 uVar1;
  undefined *puVar2;
  uint local_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  undefined *puStack_14;
  
  if (param_3 == 0) {
    param_3 = 1;
  }
  if (param_3 == 0) {
    puVar2 = (undefined *)0xffffffff;
  }
  else {
    puStack_24 = (undefined *)(param_2 << 0xf);
    local_28 = param_2 >> 0x11;
    FUN_0016c364(&local_28,param_3,puStack_24,param_4,&local_28);
    if (local_28 == 0) {
      puStack_1c = puStack_24;
    }
    else {
      puStack_1c = (undefined *)0xffffffff;
    }
    uStack_20 = 0;
    puVar2 = puStack_1c;
  }
  if (param_5 == 0) {
    param_5 = 1;
  }
  if (param_5 == 0) {
    puStack_1c = (undefined *)0xffffffff;
  }
  else {
    puStack_14 = (undefined *)(param_4 << 0xf);
    uStack_18 = param_4 >> 0x11;
    FUN_0016c364(&uStack_18);
    puStack_1c = puStack_14;
    if (uStack_18 != 0) {
      puStack_1c = (undefined *)0xffffffff;
    }
  }
  uVar1 = 0;
  if ((((param_1 != '\0') && (&UNK_00007f7d < puVar2)) && (puVar2 < &UNK_00008083)) &&
     ((&UNK_00007f7d < puStack_1c && (puStack_1c < &UNK_00008083)))) {
    uVar1 = 1;
  }
  *param_6 = uVar1;
  return;
}

