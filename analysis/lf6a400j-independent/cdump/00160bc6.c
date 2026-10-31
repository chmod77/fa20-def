
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00160bc6(ushort *param_1)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (_DAT_ffffecf8 == 0) {
    if (0x14 < *param_1) {
      *param_1 = 0;
    }
    DAT_fffeb8df = 0x43;
    DAT_fffeb8e0 = (undefined1)*param_1;
    DAT_fffeb9e9 = (char)*param_1;
    uVar7 = 2;
    if (DAT_fffeb9e9 != '\0') {
      uVar5 = 0;
      while ((uVar5 & 0xff) < (uint)*param_1) {
        uVar6 = uVar5 & 0xff;
        iVar2 = uVar6 * 4;
        pcVar4 = *(char **)(iVar2 + -0x14708);
        uVar8 = uVar7 & 0xff;
        uVar7 = uVar8 + 1;
        if (pcVar4 == (char *)0x0) {
          (&DAT_fffeb8df)[uVar8] = 0xfe;
          DAT_fffeb9e9 = DAT_fffeb9e9 + -2;
        }
        else if (((*(undefined **)(iVar2 + -0x14708) < (undefined *)0x180000) ||
                 ((0xfffe7fff < *(uint *)(iVar2 + -0x14708) &&
                  (*(uint *)(iVar2 + -0x14708) < 0xffffc000)))) ||
                ((0xffffcfff < *(uint *)(iVar2 + -0x14708) &&
                 (*(uint *)(iVar2 + -0x14708) < 0xfffffc1d)))) {
          if (pcVar4 == &DAT_0000fe7e) {
            pcVar4 = &DAT_fffeb8c4;
          }
          else if ((((char *)((uint)pcVar4 & 0xfffffffe) == pcVar4) &&
                   (*(int *)(iVar2 + -0x14708) + 1 == *(int *)((uVar6 + 1) * 4 + -0x14708))) &&
                  ((int)(uVar5 & 0xff) < (int)(*param_1 - 1))) {
            uVar1 = *(undefined2 *)pcVar4;
            cVar3 = (char)((ushort)uVar1 >> 8);
            (&DAT_fffeb8df)[uVar8] = cVar3;
            DAT_fffeb9e9 = DAT_fffeb9e9 + cVar3;
            cVar3 = (char)uVar1;
            (&DAT_fffeb8df)[uVar7 & 0xff] = cVar3;
            uVar7 = (uVar7 & 0xff) + 1;
            DAT_fffeb9e9 = DAT_fffeb9e9 + cVar3;
            uVar6 = uVar6 + 1;
            goto LAB_00160d24;
          }
          cVar3 = *pcVar4;
          (&DAT_fffeb8df)[uVar8] = cVar3;
          DAT_fffeb9e9 = DAT_fffeb9e9 + cVar3;
        }
        else {
          (&DAT_fffeb8df)[uVar8] = 0;
        }
LAB_00160d24:
        uVar5 = uVar6 + 1;
      }
    }
    (&DAT_fffeb8df)[uVar7 & 0xff] = DAT_fffeb9e9;
    *param_1 = *param_1 + 3;
    if (_DAT_ffffecf8 == 0) {
      FUN_00160d5c(&DAT_fffeb8df,(int)(short)*param_1);
    }
  }
  return;
}

