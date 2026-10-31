
/* WARNING: Removing unreachable block (ram,0x0003bf80) */
/* WARNING: Removing unreachable block (ram,0x0003bfbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003bf24(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  _DAT_ffff299a = _DAT_ffff2998;
  _DAT_ffff2998 = _DAT_ffff2ad4;
  _DAT_ffff298a = _DAT_ffff2992;
  _DAT_ffff2992 = _DAT_ffff2990;
  _DAT_ffff2990 = _DAT_ffff298e;
  _DAT_ffff298e = _DAT_ffff298c;
  _DAT_ffff298c = _DAT_ffff2988;
  DAT_ffff29a1 = DAT_ffff29a0;
  DAT_ffff29a0 = DAT_ffff299f;
  DAT_ffff299f = DAT_ffff299e;
  DAT_ffff299e = DAT_ffff299d;
  DAT_ffff299d = DAT_ffff2ad3;
  _DAT_ffff2988 = (ushort)(((int)(uint)_v_Engine_Speed_2994 >> 4) + 1U >> 1);
  uVar1 = FUN_00001540(((int)(uint)_v_Engine_Speed_2994 >> 4) + 2U >> 2);
  DAT_ffff29a2 = FUN_0000152c(uVar1);
  DAT_ffff2ad3 = DAT_ffff299c;
  _DAT_ffff2ad4 = _v_Engine_Speed_2994;
  DAT_ffff2996 = (undefined1)(_v_Engine_Speed_2994 >> 8);
  iVar3 = (uint)_v_Engine_Speed_2994 - (uint)_DAT_ffff299a;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x1f;
  }
  uVar1 = FUN_0016b5d4((iVar3 >> 5) + 0x80);
  DAT_ffff29a3 = FUN_0000152c(uVar1);
  uVar1 = FUN_0016b5d4(_DAT_ffff2988 - 0x48);
  DAT_ffff29ec = FUN_0000152c(uVar1);
  uVar1 = FUN_0016b5d4(((int)(((uint)_DAT_ffff2988 - (uint)_DAT_ffff298a) +
                             (uint)((int)((uint)_DAT_ffff2988 - (uint)_DAT_ffff298a) < 0)) >> 1) +
                       0x80);
  DAT_ffff2a10 = FUN_0000152c(uVar1);
  uVar2 = FUN_0016bd34(((int)(uint)_DAT_ffff2988 >> 1) + -0x28);
  iVar3 = 0;
  if ((uVar2 & 0xffff) != 0) {
    iVar3 = __sdiv32_r1_by_r0((uVar2 & 0xffff) << 2,10);
  }
  DAT_ffff2a04 = FUN_0000152c(iVar3);
  DAT_ffff29a4 = FUN_0016caec((int)(short)((ushort)DAT_ffff299c - (ushort)DAT_ffff29a1));
  return;
}

