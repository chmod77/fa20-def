
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_001607a8(void)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ushort local_14 [2];
  undefined1 *puStack_10;
  uint local_c;
  undefined1 *local_8;
  
  puVar2 = (undefined1 *)(int)(char)DAT_fffeb8c6;
  if (((uint)puVar2 & 4) != 0) {
    if ((((_DAT_ffffecf8 == 0) && (1 < DAT_fffeb8c7)) && ((int)(DAT_fffeb8c7 - 2) < 0x15)) &&
       ((int)(uint)DAT_fffeb8c8 <= (int)(DAT_fffeb8c7 - 2))) {
      bVar1 = DAT_fffeb9e8;
      if (((int)(char)DAT_fffeb8c6 & 0x80U) != 0) {
        bVar1 = DAT_fffeb8c5;
      }
      puVar2 = puStack_10;
      if (bVar1 == DAT_fffeb8c8) {
        puStack_10 = &DAT_fffeb8c9;
        puVar2 = &DAT_fffeb8c9;
        if (DAT_fffeb9e9 == (char)((&DAT_fffeb8c9)[DAT_fffeb8c8] << 1)) {
          DAT_fffeb8c5 = DAT_fffeb8c8;
          DAT_fffeb8c6 = DAT_fffeb8c6 | 0x80;
          for (uVar4 = 0; local_c = uVar4 & 0xff, puVar2 = puStack_10, local_c < DAT_fffeb8c5;
              uVar4 = uVar4 + 1) {
            uVar4 = uVar4 & 0xff;
            iVar3 = uVar4 * 4;
            if (((*(undefined **)(iVar3 + -0x14708) < (undefined *)0x180000) ||
                ((0xfffe7fff < *(uint *)(iVar3 + -0x14708) &&
                 (*(uint *)(iVar3 + -0x14708) < 0xffffc000)))) ||
               ((0xffffcfff < *(uint *)(iVar3 + -0x14708) &&
                (*(uint *)(iVar3 + -0x14708) < 0xfffffc1d)))) {
              if (*(undefined **)(iVar3 + -0x14708) == &DAT_0000fe7e) {
                DAT_fffeb8c4 = (&DAT_fffeb8c9)[uVar4];
                *(undefined1 **)(iVar3 + -0x14708) = &DAT_fffeb8c4;
              }
              else if ((((*(uint *)(iVar3 + -0x14708) & 0xfffffffe) == *(uint *)(iVar3 + -0x14708))
                       && (*(int *)(iVar3 + -0x14708) + 1 == *(int *)((uVar4 + 1) * 4 + -0x14708)))
                      && ((int)local_c < (int)(DAT_fffeb8c5 - 1))) {
                local_14[0] = (ushort)(byte)(&DAT_fffeb8ca)[uVar4] +
                              (ushort)(byte)(&DAT_fffeb8c9)[uVar4] * 0x100;
                **(ushort **)(iVar3 + -0x14708) = local_14[0];
                uVar4 = uVar4 + 1;
              }
              else {
                **(undefined1 **)(iVar3 + -0x14708) = (&DAT_fffeb8c9)[uVar4];
              }
            }
            else {
              (&DAT_fffeb8e0)[uVar4] = 0;
            }
          }
        }
      }
      puStack_10 = puVar2;
      FUN_00160d98();
      DAT_fffeb9e8 = 0;
      local_14[0] = (ushort)DAT_fffeb8c5;
      puVar2 = (undefined1 *)FUN_00160bc6(local_14);
    }
    return puVar2;
  }
  if ((DAT_fffeb8c6 & 2) != 0) {
    local_8 = &DAT_fffeb8c6;
    puVar2 = (undefined1 *)0x0;
    if (_DAT_ffffecf8 == 0) {
      if (((int)(char)DAT_fffeb8c6 & 0x80U) == 0) {
        DAT_fffeb8c6 = DAT_fffeb8c6 | 0x80;
        DAT_fffeb8c5 = DAT_fffeb9e8;
      }
      DAT_fffeb9e8 = 0;
      FUN_00160d98();
      if ((DAT_fffeb8c4 & 0xf) == 0) {
        local_c = CONCAT22(1,local_c._2_2_);
        puVar2 = (undefined1 *)FUN_00160bc6(&local_c);
      }
      else {
        puVar2 = &DAT_fffeb8c4;
        DAT_fffeb8c4 = DAT_fffeb8c4 | 0x80;
      }
    }
    return puVar2;
  }
  if (((uint)(int)(char)DAT_fffeb8c6 & 8) == 0) {
    if (((uint)(int)(char)DAT_fffeb8c6 & 1) == 0) {
      return (undefined1 *)(int)(char)DAT_fffeb8c6;
    }
    local_8 = &DAT_fffeb8c6;
    puVar2 = (undefined1 *)0x0;
    uVar4 = 0;
    if ((_DAT_ffffecf8 == 0) && (3 < DAT_fffeb8c7)) {
      if (DAT_fffeb9e9 == (byte)(DAT_fffeb8cb << 1)) {
        if (DAT_fffeb9e8 == 0x14) {
          DAT_fffeb8c4 = DAT_fffeb8c4 & 0xf0;
          DAT_fffeb9e8 = 0;
        }
        if (0xfd < DAT_fffeb8c8) {
          uVar4 = 0xff000000;
        }
        *(uint *)((uint)DAT_fffeb9e8 * 4 + -0x14708) =
             uVar4 | (uint)DAT_fffeb8c8 << 0x10 | (uint)DAT_fffeb8c9 << 8 | (uint)DAT_fffeb8ca;
        DAT_fffeb9e8 = DAT_fffeb9e8 + 1;
        DAT_fffeb8df = 0x42;
        FUN_00160d5c(&DAT_fffeb8df,1);
      }
      FUN_00160d98();
      puVar2 = &DAT_fffeb8c6;
      DAT_fffeb8c6 = DAT_fffeb8c6 & 0x7f;
    }
    return puVar2;
  }
  if (_DAT_ffffecf8 != 0) {
    return (undefined1 *)(int)(char)DAT_fffeb8c6;
  }
  if (((int)(char)DAT_fffeb8c4 & 0x80U) == 0) {
    puVar2 = (undefined1 *)(int)(char)DAT_fffeb8c6;
    if (((uint)puVar2 & 0x80) != 0) {
      uVar4 = 0;
      if (0xfd < DAT_fffeb8c9) {
        uVar4 = 0xff000000;
      }
      _DAT_fffeb880 =
           uVar4 | (uint)DAT_fffeb8c9 << 0x10 | (uint)DAT_fffeb8ca << 8 | (uint)DAT_fffeb8cb;
      _DAT_fffeb884 = _DAT_fffeb8cc;
      _DAT_fffeb886 = 0;
      FUN_00160b66();
      uVar4 = (uint)(char)DAT_fffeb8c4;
      DAT_fffeb8c4 = (char)(undefined1 *)(uVar4 | 0x80);
      DAT_fffeb8c6 = DAT_fffeb8c6 & 0x7f;
      return (undefined1 *)(uVar4 | 0x80);
    }
    if (5 < DAT_fffeb8c7) {
      if ((char)((&DAT_fffeb8c7)[DAT_fffeb8c7] << 1) != DAT_fffeb9e9) {
        puVar2 = (undefined1 *)FUN_00160d98();
        return puVar2;
      }
      for (uVar4 = (uint)(char)DAT_fffeb8c7; (uVar4 & 0xff) != 0; uVar4 = uVar4 - 1) {
        uVar4 = uVar4 & 0xff;
        (&DAT_fffeb8c8)[uVar4] = (&DAT_fffeb8c7)[uVar4];
      }
      DAT_fffeb8c8 = 0x52;
      FUN_00160d5c(&DAT_fffeb8c8,6);
      puVar2 = (undefined1 *)((int)(char)DAT_fffeb8c6 | 0x80);
      DAT_fffeb8c6 = (byte)puVar2;
    }
    return puVar2;
  }
  if (_DAT_fffeb884 == 0) {
    FUN_00160d5c(&DAT_fffeb886,2);
    FUN_00160d98();
    uVar4 = (uint)(char)DAT_fffeb8c6;
    DAT_fffeb8c6 = (char)(undefined1 *)(uVar4 & 0x7f);
    return (undefined1 *)(uVar4 & 0x7f);
  }
  puVar2 = (undefined1 *)FUN_00160b66();
  return puVar2;
}

