
/* WARNING: Removing unreachable block (ram,0x000450e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00044eac(void)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar4;
  uint uVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = FUN_0016b3c8(_DAT_ffff1564,0xa67);
  uVar2 = FUN_0016a8fc(uVar1,(uint)_DAT_ffff2986 << 3,0x7d);
  bVar4 = DAT_fffef4eb | 1;
  if ((uVar2 & 1) == 0) {
    bVar4 = DAT_fffef4eb & 0xfe;
  }
  uVar7 = (uint)_DAT_ffff0b90;
  uVar2 = (uint)_DAT_ffff0b8e;
  iVar5 = 0;
  DAT_fffef4eb = bVar4;
  if (0 < (int)(uVar7 - uVar2)) {
    uVar3 = __sdiv32_r1_by_r0((uint)_DAT_ffff2986,0x5a);
    iVar5 = (uVar7 - uVar2) * (uVar3 & 0xffff);
  }
  uVar2 = FUN_0016a8fc(uVar1,iVar5,0x7d);
  bVar4 = DAT_fffef4eb | 2;
  if ((uVar2 & 1) == 0) {
    bVar4 = DAT_fffef4eb & 0xfd;
  }
  DAT_fffef4eb = bVar4;
  uVar1 = FUN_0016b3c8(_DAT_ffff1568,0xa67);
  iVar5 = ((uint)_DAT_ffff0b8e - (uint)_DAT_ffff0b90) + 0x2d0;
  iVar6 = 0;
  if (0 < iVar5) {
    uVar2 = __sdiv32_r1_by_r0((uint)_DAT_ffff2986,0x5a);
    iVar6 = iVar5 * (uVar2 & 0xffff);
  }
  uVar2 = FUN_0016a8fc(uVar1,iVar6,0x7d);
  bVar4 = DAT_fffef4eb | 4;
  if ((uVar2 & 1) == 0) {
    bVar4 = DAT_fffef4eb & 0xfb;
  }
  if ((((DAT_ffff0541 == '\0') || (DAT_ffff0541 == '\x04')) && ((bVar4 & 1) != 0)) ||
     (((bVar4 & 2) != 0 || ((bVar4 & 4) != 0)))) {
    DAT_fffef4e9 = DAT_fffef4e9 | 1;
  }
  else {
    DAT_fffef4e9 = DAT_fffef4e9 & 0xfe;
  }
  DAT_fffef4eb = bVar4;
  uVar1 = FUN_0016b3c8(_DAT_ffff1564,0xd87);
  uVar2 = FUN_0016a8fc(uVar1,(uint)_DAT_ffff2986 << 3,0x7d);
  bVar4 = DAT_fffef4eb | 8;
  if ((uVar2 & 1) == 0) {
    bVar4 = DAT_fffef4eb & 0xf7;
  }
  uVar7 = (uint)_DAT_ffff0b90;
  uVar2 = (uint)_DAT_ffff0b8e;
  iVar5 = 0;
  DAT_fffef4eb = bVar4;
  if (0 < (int)(uVar7 - uVar2)) {
    uVar3 = __sdiv32_r1_by_r0((uint)_DAT_ffff2986,0x5a);
    iVar5 = (uVar7 - uVar2) * (uVar3 & 0xffff);
  }
  uVar2 = FUN_0016a8fc(uVar1,iVar5,0x7d);
  bVar4 = DAT_fffef4eb | 0x10;
  if ((uVar2 & 1) == 0) {
    bVar4 = DAT_fffef4eb & 0xef;
  }
  DAT_fffef4eb = bVar4;
  uVar1 = FUN_0016b3c8(_DAT_ffff1568,0xd87);
  iVar5 = ((uint)_DAT_ffff0b8e - (uint)_DAT_ffff0b90) + 0x2d0;
  iVar6 = 0;
  if (0 < iVar5) {
    uVar2 = __sdiv32_r1_by_r0((uint)_DAT_ffff2986,0x5a);
    iVar6 = iVar5 * (uVar2 & 0xffff);
  }
  uVar2 = FUN_0016a8fc(uVar1,iVar6,0x7d,(DAT_fffef4eb & 0x20) != 0);
  bVar4 = DAT_fffef4eb | 0x20;
  if ((uVar2 & 1) == 0) {
    bVar4 = DAT_fffef4eb & 0xdf;
  }
  if ((((DAT_ffff0541 == '\0') || (DAT_ffff0541 == '\x04')) && ((bVar4 & 8) != 0)) ||
     (((bVar4 & 0x10) != 0 || ((bVar4 & 0x20) != 0)))) {
    DAT_fffef4e9 = DAT_fffef4e9 | 2;
  }
  else {
    DAT_fffef4e9 = DAT_fffef4e9 & 0xfd;
  }
  DAT_fffef4eb = bVar4;
  if (((((DAT_fffeeec2 & 4) == 0) || (DAT_ffffab41 < 0x76)) || ((DAT_ffffab40 & 0x20) != 0)) ||
     ((((DAT_fffeef8d & 0x20) != 0 || ((DAT_fffeef8e & 0x20) != 0)) ||
      ((((DAT_fffeef8f & 0x20) != 0 || ((DAT_fffeef90 & 0x20) != 0)) ||
       (((DAT_ffff66b0 != '\x02' && (DAT_ffff66b0 != '\x03')) || (DAT_ffff08f4 != '\0')))))))) {
    DAT_fffef845 = 0;
    DAT_fffef847 = 0;
    DAT_fffef849 = 0;
    DAT_fffef84b = 0;
    DAT_fffef84d = 0;
    DAT_fffef84f = 0;
    DAT_fffef851 = 0;
    DAT_fffef853 = 0;
    DAT_fffef855 = 0;
    DAT_fffef857 = 0;
    DAT_fffef859 = 0;
    DAT_fffef85b = 0;
    DAT_fffef85d = 0;
    DAT_fffef85f = 0;
    DAT_fffef861 = 0;
    DAT_fffef863 = 0;
    DAT_fffef865 = 0;
    DAT_fffef867 = 0;
    DAT_fffef869 = 0;
    DAT_fffef86b = 0;
    DAT_fffef846 = 0;
    DAT_fffef848 = 0;
    DAT_fffef84a = 0;
    DAT_fffef84c = 0;
    DAT_fffef84e = 0;
    DAT_fffef850 = 0;
    DAT_fffef852 = 0;
    DAT_fffef854 = 0;
    DAT_fffef856 = 0;
    DAT_fffef858 = 0;
    DAT_fffef85a = 0;
    DAT_fffef85c = 0;
    DAT_fffef85e = 0;
    DAT_fffef860 = 0;
    DAT_fffef862 = 0;
    DAT_fffef864 = 0;
    DAT_fffef866 = 0;
    DAT_fffef868 = 0;
    DAT_fffef86a = 0;
    DAT_fffef86c = 0;
  }
  else {
    if (((DAT_fffeef8d & 8) == 0) || ((DAT_fffeef8d & 4) != 0)) {
      DAT_fffef846 = FUN_0000152c(DAT_fffef846 + 1);
      if (0x31 < DAT_fffef846) {
        DAT_fffef87a = DAT_fffef87a & 0xef;
        DAT_fffef845 = 0;
        goto LAB_00045210;
      }
    }
    else {
      DAT_fffef846 = 0;
      if (((DAT_fffef4e9 & 1) == 0) &&
         (DAT_fffef845 = FUN_0000152c(DAT_fffef845 + 1), 0x31 < DAT_fffef845)) {
        DAT_fffef87a = DAT_fffef87a | 0x10;
LAB_00045210:
        DAT_fffef9c0 = '\x01';
      }
    }
    if (((DAT_fffeef8e & 8) == 0) || ((DAT_fffeef8e & 4) != 0)) {
      DAT_fffef848 = FUN_0000152c(DAT_fffef848 + 1);
      if (0x31 < DAT_fffef848) {
        DAT_fffef87b = DAT_fffef87b & 0xef;
        DAT_fffef847 = 0;
        goto LAB_0004527c;
      }
    }
    else {
      DAT_fffef848 = 0;
      if (((DAT_fffef4e9 & 1) == 0) &&
         (DAT_fffef847 = FUN_0000152c(DAT_fffef847 + 1), 0x31 < DAT_fffef847)) {
        DAT_fffef87b = DAT_fffef87b | 0x10;
LAB_0004527c:
        DAT_fffef9c1 = '\x01';
      }
    }
    if (((DAT_fffeef8f & 8) == 0) || ((DAT_fffeef8f & 4) != 0)) {
      DAT_fffef84a = FUN_0000152c(DAT_fffef84a + 1);
      if (0x31 < DAT_fffef84a) {
        DAT_fffef87c = DAT_fffef87c & 0xef;
        DAT_fffef849 = 0;
        goto LAB_000452e8;
      }
    }
    else {
      DAT_fffef84a = 0;
      if (((DAT_fffef4e9 & 1) == 0) &&
         (DAT_fffef849 = FUN_0000152c(DAT_fffef849 + 1), 0x31 < DAT_fffef849)) {
        DAT_fffef87c = DAT_fffef87c | 0x10;
LAB_000452e8:
        DAT_fffef9c2 = '\x01';
      }
    }
    if (((DAT_fffeef90 & 8) == 0) || ((DAT_fffeef90 & 4) != 0)) {
      DAT_fffef84c = FUN_0000152c(DAT_fffef84c + 1);
      if (0x31 < DAT_fffef84c) {
        DAT_fffef87d = DAT_fffef87d & 0xef;
        DAT_fffef84b = 0;
        goto LAB_00045354;
      }
    }
    else {
      DAT_fffef84c = 0;
      if (((DAT_fffef4e9 & 1) == 0) &&
         (DAT_fffef84b = FUN_0000152c(DAT_fffef84b + 1), 0x31 < DAT_fffef84b)) {
        DAT_fffef87d = DAT_fffef87d | 0x10;
LAB_00045354:
        DAT_fffef9c3 = '\x01';
      }
    }
    if (((DAT_fffeef8d & 8) == 0) && ((DAT_fffeef8d & 4) != 0)) {
      DAT_fffef84e = 0;
      if (((DAT_fffef4e9 & 2) == 0) &&
         (DAT_fffef84d = FUN_0000152c(DAT_fffef84d + 1), 0x31 < DAT_fffef84d)) {
        DAT_fffef87a = DAT_fffef87a | 8;
LAB_0004542c:
        DAT_fffef9c4 = '\x01';
      }
    }
    else {
      DAT_fffef84e = FUN_0000152c(DAT_fffef84e + 1);
      if (0x31 < DAT_fffef84e) {
        DAT_fffef87a = DAT_fffef87a & 0xf7;
        DAT_fffef84d = 0;
        goto LAB_0004542c;
      }
    }
    if (((DAT_fffeef8e & 8) == 0) && ((DAT_fffeef8e & 4) != 0)) {
      DAT_fffef850 = 0;
      if (((DAT_fffef4e9 & 2) == 0) &&
         (DAT_fffef84f = FUN_0000152c(DAT_fffef84f + 1), 0x31 < DAT_fffef84f)) {
        DAT_fffef87b = DAT_fffef87b | 8;
LAB_00045498:
        DAT_fffef9c5 = '\x01';
      }
    }
    else {
      DAT_fffef850 = FUN_0000152c(DAT_fffef850 + 1);
      if (0x31 < DAT_fffef850) {
        DAT_fffef87b = DAT_fffef87b & 0xf7;
        DAT_fffef84f = 0;
        goto LAB_00045498;
      }
    }
    if (((DAT_fffeef8f & 8) == 0) && ((DAT_fffeef8f & 4) != 0)) {
      DAT_fffef852 = 0;
      if (((DAT_fffef4e9 & 2) == 0) &&
         (DAT_fffef851 = FUN_0000152c(DAT_fffef851 + 1), 0x31 < DAT_fffef851)) {
        DAT_fffef87c = DAT_fffef87c | 8;
LAB_00045504:
        DAT_fffef9c6 = '\x01';
      }
    }
    else {
      DAT_fffef852 = FUN_0000152c(DAT_fffef852 + 1);
      if (0x31 < DAT_fffef852) {
        DAT_fffef87c = DAT_fffef87c & 0xf7;
        DAT_fffef851 = 0;
        goto LAB_00045504;
      }
    }
    if (((DAT_fffeef90 & 8) == 0) && ((DAT_fffeef90 & 4) != 0)) {
      DAT_fffef854 = 0;
      if (((DAT_fffef4e9 & 2) == 0) &&
         (DAT_fffef853 = FUN_0000152c(DAT_fffef853 + 1), 0x31 < DAT_fffef853)) {
        DAT_fffef87d = DAT_fffef87d | 8;
LAB_00045570:
        DAT_fffef9c7 = '\x01';
      }
    }
    else {
      DAT_fffef854 = FUN_0000152c(DAT_fffef854 + 1);
      if (0x31 < DAT_fffef854) {
        DAT_fffef87d = DAT_fffef87d & 0xf7;
        DAT_fffef853 = 0;
        goto LAB_00045570;
      }
    }
    if (((DAT_fffeef8d & 8) == 0) || ((DAT_fffeef8d & 4) == 0)) {
      DAT_fffef856 = FUN_0000152c(DAT_fffef856 + 1);
      if (0x31 < DAT_fffef856) {
        DAT_fffef87a = DAT_fffef87a & 0xfb;
        DAT_fffef855 = 0;
        goto LAB_000455d6;
      }
    }
    else {
      DAT_fffef855 = FUN_0000152c(DAT_fffef855 + 1);
      DAT_fffef856 = 0;
      if (0x31 < DAT_fffef855) {
        DAT_fffef87a = DAT_fffef87a | 4;
LAB_000455d6:
        DAT_fffef9c8 = '\x01';
      }
    }
    if (((DAT_fffeef8e & 8) == 0) || ((DAT_fffeef8e & 4) == 0)) {
      DAT_fffef858 = FUN_0000152c(DAT_fffef858 + 1);
      if (0x31 < DAT_fffef858) {
        DAT_fffef87b = DAT_fffef87b & 0xfb;
        DAT_fffef857 = 0;
        goto LAB_000456b0;
      }
    }
    else {
      DAT_fffef857 = FUN_0000152c(DAT_fffef857 + 1);
      DAT_fffef858 = 0;
      if (0x31 < DAT_fffef857) {
        DAT_fffef87b = DAT_fffef87b | 4;
LAB_000456b0:
        DAT_fffef9c9 = '\x01';
      }
    }
    if (((DAT_fffeef8f & 8) == 0) || ((DAT_fffeef8f & 4) == 0)) {
      DAT_fffef85a = FUN_0000152c(DAT_fffef85a + 1);
      if (0x31 < DAT_fffef85a) {
        DAT_fffef87c = DAT_fffef87c & 0xfb;
        DAT_fffef859 = 0;
        goto LAB_00045716;
      }
    }
    else {
      DAT_fffef859 = FUN_0000152c(DAT_fffef859 + 1);
      DAT_fffef85a = 0;
      if (0x31 < DAT_fffef859) {
        DAT_fffef87c = DAT_fffef87c | 4;
LAB_00045716:
        DAT_fffef9ca = '\x01';
      }
    }
    if (((DAT_fffeef90 & 8) == 0) || ((DAT_fffeef90 & 4) == 0)) {
      DAT_fffef85c = FUN_0000152c(DAT_fffef85c + 1);
      if (0x31 < DAT_fffef85c) {
        DAT_fffef87d = DAT_fffef87d & 0xfb;
        DAT_fffef85b = 0;
        goto LAB_0004577c;
      }
    }
    else {
      DAT_fffef85b = FUN_0000152c(DAT_fffef85b + 1);
      DAT_fffef85c = 0;
      if (0x31 < DAT_fffef85b) {
        DAT_fffef87d = DAT_fffef87d | 4;
LAB_0004577c:
        DAT_fffef9cb = '\x01';
      }
    }
    if (((DAT_fffeef8d & 2) == 0) || ((DAT_fffeef8d & 1) == 0)) {
      DAT_fffef85e = FUN_0000152c(DAT_fffef85e + 1);
      if (0x31 < DAT_fffef85e) {
        DAT_fffef87a = DAT_fffef87a & 0xfd;
        DAT_fffef85d = 0;
        DAT_fffef9cc = '\x01';
      }
    }
    else {
      DAT_fffef85d = FUN_0000152c(DAT_fffef85d + 1);
      DAT_fffef85e = 0;
      if (0x31 < DAT_fffef85d) {
        DAT_fffef87a = DAT_fffef87a | 2;
        DAT_fffef9cc = '\x01';
      }
    }
    if (((DAT_fffeef8e & 2) == 0) || ((DAT_fffeef8e & 1) == 0)) {
      DAT_fffef860 = FUN_0000152c(DAT_fffef860 + 1);
      if (0x31 < DAT_fffef860) {
        DAT_fffef87b = DAT_fffef87b & 0xfd;
        DAT_fffef85f = 0;
        goto LAB_00045848;
      }
    }
    else {
      DAT_fffef85f = FUN_0000152c(DAT_fffef85f + 1);
      DAT_fffef860 = 0;
      if (0x31 < DAT_fffef85f) {
        DAT_fffef87b = DAT_fffef87b | 2;
LAB_00045848:
        DAT_fffef9cd = '\x01';
      }
    }
    if (((DAT_fffeef8f & 2) == 0) || ((DAT_fffeef8f & 1) == 0)) {
      DAT_fffef862 = FUN_0000152c(DAT_fffef862 + 1);
      if (0x31 < DAT_fffef862) {
        DAT_fffef87c = DAT_fffef87c & 0xfd;
        DAT_fffef861 = 0;
        goto LAB_000458a8;
      }
    }
    else {
      DAT_fffef861 = FUN_0000152c(DAT_fffef861 + 1);
      DAT_fffef862 = 0;
      if (0x31 < DAT_fffef861) {
        DAT_fffef87c = DAT_fffef87c | 2;
LAB_000458a8:
        DAT_fffef9ce = '\x01';
      }
    }
    if (((DAT_fffeef90 & 2) == 0) || ((DAT_fffeef90 & 1) == 0)) {
      DAT_fffef864 = FUN_0000152c(DAT_fffef864 + 1);
      if (0x31 < DAT_fffef864) {
        DAT_fffef87d = DAT_fffef87d & 0xfd;
        DAT_fffef863 = 0;
        goto LAB_0004598c;
      }
    }
    else {
      DAT_fffef863 = FUN_0000152c(DAT_fffef863 + 1);
      DAT_fffef864 = 0;
      if (0x31 < DAT_fffef863) {
        DAT_fffef87d = DAT_fffef87d | 2;
LAB_0004598c:
        DAT_fffef9cf = '\x01';
      }
    }
    if (((DAT_fffeef8d & 2) == 0) && ((DAT_fffeef8d & 1) != 0)) {
      DAT_fffef865 = FUN_0000152c(DAT_fffef865 + 1);
      DAT_fffef866 = 0;
      if (0x31 < DAT_fffef865) {
        DAT_fffef87a = DAT_fffef87a | 1;
LAB_000459ec:
        DAT_fffef9d0 = '\x01';
      }
    }
    else {
      DAT_fffef866 = FUN_0000152c(DAT_fffef866 + 1);
      if (0x31 < DAT_fffef866) {
        DAT_fffef87a = DAT_fffef87a & 0xfe;
        DAT_fffef865 = 0;
        goto LAB_000459ec;
      }
    }
    if (((DAT_fffeef8e & 2) == 0) && ((DAT_fffeef8e & 1) != 0)) {
      DAT_fffef867 = FUN_0000152c(DAT_fffef867 + 1);
      DAT_fffef868 = 0;
      if (0x31 < DAT_fffef867) {
        DAT_fffef87b = DAT_fffef87b | 1;
LAB_00045a4a:
        DAT_fffef9d1 = '\x01';
      }
    }
    else {
      DAT_fffef868 = FUN_0000152c(DAT_fffef868 + 1);
      if (0x31 < DAT_fffef868) {
        DAT_fffef87b = DAT_fffef87b & 0xfe;
        DAT_fffef867 = 0;
        goto LAB_00045a4a;
      }
    }
    if (((DAT_fffeef8f & 2) == 0) && ((DAT_fffeef8f & 1) != 0)) {
      DAT_fffef869 = FUN_0000152c(DAT_fffef869 + 1);
      DAT_fffef86a = 0;
      if (0x31 < DAT_fffef869) {
        DAT_fffef87c = DAT_fffef87c | 1;
LAB_00045aa4:
        DAT_fffef9d2 = '\x01';
      }
    }
    else {
      DAT_fffef86a = FUN_0000152c(DAT_fffef86a + 1);
      if (0x31 < DAT_fffef86a) {
        DAT_fffef87c = DAT_fffef87c & 0xfe;
        DAT_fffef869 = 0;
        goto LAB_00045aa4;
      }
    }
    if (((DAT_fffeef90 & 2) == 0) && ((DAT_fffeef90 & 1) != 0)) {
      DAT_fffef86b = FUN_0000152c(DAT_fffef86b + 1);
      DAT_fffef86c = 0;
      if (0x31 < DAT_fffef86b) {
        DAT_fffef87d = DAT_fffef87d | 1;
LAB_00045b04:
        DAT_fffef9d3 = '\x01';
      }
    }
    else {
      DAT_fffef86c = FUN_0000152c(DAT_fffef86c + 1);
      if (0x31 < DAT_fffef86c) {
        DAT_fffef87d = DAT_fffef87d & 0xfe;
        DAT_fffef86b = 0;
        goto LAB_00045b04;
      }
    }
  }
  if (DAT_ffffab41 < 0x76) {
    DAT_fffeef8b = 0;
  }
  else {
    DAT_fffeef8b = FUN_0000152c(DAT_fffeef8b + 1);
  }
  if (((((DAT_fffef87a & 4) == 0) && ((DAT_fffef87a & 8) == 0)) && ((DAT_fffef87a & 0x10) == 0)) &&
     (((DAT_fffef87a & 1) == 0 && ((DAT_fffef87a & 2) == 0)))) {
    if (((DAT_fffef9c8 != '\0') && (DAT_fffef9c4 != '\0')) &&
       ((DAT_fffef9c0 != '\0' && ((DAT_fffef9d0 != '\0' && (DAT_fffef9cc != '\0')))))) {
      DAT_fffef9d4 = DAT_fffef9d4 & 0xfd;
      goto LAB_00045c80;
    }
  }
  else {
    DAT_fffef9d4 = DAT_fffef9d4 | 2;
LAB_00045c80:
    DAT_fffef9d6 = 1;
  }
  if (((((DAT_fffef87b & 4) == 0) && ((DAT_fffef87b & 8) == 0)) && ((DAT_fffef87b & 0x10) == 0)) &&
     (((DAT_fffef87b & 1) == 0 && ((DAT_fffef87b & 2) == 0)))) {
    if (((DAT_fffef9c9 != '\0') && (DAT_fffef9c5 != '\0')) &&
       ((DAT_fffef9c1 != '\0' && ((DAT_fffef9d1 != '\0' && (DAT_fffef9cd != '\0')))))) {
      DAT_fffef9d4 = DAT_fffef9d4 & 0xfb;
      goto LAB_00045cde;
    }
  }
  else {
    DAT_fffef9d4 = DAT_fffef9d4 | 4;
LAB_00045cde:
    DAT_fffef9d7 = 1;
  }
  if (((((DAT_fffef87c & 4) == 0) && ((DAT_fffef87c & 8) == 0)) && ((DAT_fffef87c & 0x10) == 0)) &&
     (((DAT_fffef87c & 1) == 0 && ((DAT_fffef87c & 2) == 0)))) {
    if (((DAT_fffef9ca != '\0') && (DAT_fffef9c6 != '\0')) &&
       ((DAT_fffef9c2 != '\0' && ((DAT_fffef9d2 != '\0' && (DAT_fffef9ce != '\0')))))) {
      DAT_fffef9d4 = DAT_fffef9d4 & 0xf7;
      goto LAB_00045e6c;
    }
  }
  else {
    DAT_fffef9d4 = DAT_fffef9d4 | 8;
LAB_00045e6c:
    DAT_fffef9d8 = 1;
  }
  if (((((DAT_fffef87d & 4) == 0) && ((DAT_fffef87d & 8) == 0)) && ((DAT_fffef87d & 0x10) == 0)) &&
     (((DAT_fffef87d & 1) == 0 && ((DAT_fffef87d & 2) == 0)))) {
    if (((DAT_fffef9cb == '\0') || (DAT_fffef9c7 == '\0')) ||
       ((DAT_fffef9c3 == '\0' || ((DAT_fffef9d3 == '\0' || (DAT_fffef9cf == '\0'))))))
    goto LAB_00045ed0;
    DAT_fffef9d4 = DAT_fffef9d4 & 0xef;
  }
  else {
    DAT_fffef9d4 = DAT_fffef9d4 | 0x10;
  }
  DAT_fffef9d9 = 1;
LAB_00045ed0:
  if (((((DAT_fffef879 & 8) == 0) && ((DAT_fffef879 & 4) == 0)) && ((DAT_fffef879 & 2) == 0)) &&
     ((DAT_fffef879 & 1) == 0)) {
    if (DAT_fffef9bc == '\0') {
      return;
    }
    if (DAT_fffef9bd == '\0') {
      return;
    }
    if (DAT_fffef9be == '\0') {
      return;
    }
    if (DAT_fffef9bf == '\0') {
      return;
    }
    DAT_fffef9d4 = DAT_fffef9d4 & 0xfe;
  }
  else {
    DAT_fffef9d4 = DAT_fffef9d4 | 1;
  }
  DAT_fffef9d5 = 1;
  return;
}

