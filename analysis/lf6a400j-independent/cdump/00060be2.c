
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00060be2(uint param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0xff) * 0x40;
  (&DAT_ffff2fea)[iVar2] = 0;
  (&DAT_ffff2feb)[iVar2] = 1;
  *(undefined2 *)(&DAT_ffff2fec + iVar2) = param_2;
  *(undefined2 *)(&DAT_ffff2fee + iVar2) = 0;
  *(undefined1 *)(iVar2 + -0xd010) = DAT_ffff07bd;
  *(undefined1 *)(iVar2 + -0xd00f) = 0;
  *(undefined1 *)(iVar2 + -0xd00e) = DAT_ffff07c5;
  *(undefined1 *)(iVar2 + -0xd00d) = DAT_ffff07d1;
  *(undefined1 *)(iVar2 + -0xd00c) = DAT_ffff07bb;
  *(undefined1 *)(iVar2 + -0xd00b) = DAT_ffff07be;
  *(undefined1 *)(iVar2 + -0xd00a) = DAT_ffff07c7;
  uVar1 = _DAT_ffff12ec;
  *(char *)(iVar2 + -0xd009) = (char)((ushort)_DAT_ffff12ec >> 8);
  *(char *)(iVar2 + -0xd008) = (char)uVar1;
  *(undefined1 *)(iVar2 + -0xd007) = DAT_ffff07d2;
  *(undefined1 *)(iVar2 + -0xd006) = DAT_ffff07b5;
  *(undefined1 *)(iVar2 + -0xd005) = DAT_ffff07cc;
  uVar1 = _DAT_ffff12e6;
  *(char *)(iVar2 + -0xd004) = (char)((ushort)_DAT_ffff12e6 >> 8);
  *(char *)(iVar2 + -0xd003) = (char)uVar1;
  *(undefined1 *)(iVar2 + -0xd002) = DAT_ffff07cf;
  uVar1 = _DAT_fffef3dc;
  *(char *)(iVar2 + -0xd001) = (char)((ushort)_DAT_fffef3dc >> 8);
  *(char *)(iVar2 + -0xd000) = (char)uVar1;
  *(undefined1 *)(iVar2 + -0xcfff) = 10;
  uVar1 = _DAT_ffff12e0;
  *(char *)(iVar2 + -0xcffe) = (char)((ushort)_DAT_ffff12e0 >> 8);
  *(char *)(iVar2 + -0xcffd) = (char)uVar1;
  uVar1 = _DAT_ffff12e4;
  *(char *)(iVar2 + -0xcffc) = (char)((ushort)_DAT_ffff12e4 >> 8);
  *(char *)(iVar2 + -0xcffb) = (char)uVar1;
  *(undefined1 *)(iVar2 + -0xcffa) = DAT_ffff07ba;
  *(undefined1 *)(iVar2 + -0xcff9) = DAT_ffff07b9;
  *(undefined1 *)(iVar2 + -0xcff8) = DAT_ffff07b8;
  *(undefined1 *)(iVar2 + -0xcff7) = DAT_ffff07c0;
  *(undefined1 *)(iVar2 + -0xcff6) = DAT_ffff07c6;
  uVar1 = _DAT_ffff12f8;
  *(char *)(iVar2 + -0xcff5) = (char)((ushort)_DAT_ffff12f8 >> 8);
  *(char *)(iVar2 + -0xcff4) = (char)uVar1;
  uVar1 = _DAT_ffff12dc;
  *(char *)(iVar2 + -0xcff3) = (char)((ushort)_DAT_ffff12dc >> 8);
  *(char *)(iVar2 + -0xcff2) = (char)uVar1;
  uVar1 = _DAT_ffff12f4;
  *(char *)(iVar2 + -0xcff1) = (char)((ushort)_DAT_ffff12f4 >> 8);
  *(char *)(iVar2 + -0xcff0) = (char)uVar1;
  *(undefined1 *)(iVar2 + -0xcfef) = DAT_ffff07cb;
  *(undefined1 *)(iVar2 + -0xcfee) = DAT_ffff07cd;
  *(undefined1 *)(iVar2 + -0xcfed) = DAT_ffff07d0;
  *(undefined1 *)(iVar2 + -0xcfec) = DAT_ffff07b6;
  *(undefined1 *)(iVar2 + -0xcfeb) = DAT_ffff07b7;
  *(undefined1 *)(iVar2 + -0xcfea) = DAT_ffff07ce;
  *(undefined1 *)(iVar2 + -0xcfe9) = DAT_ffff07c9;
  *(undefined1 *)(iVar2 + -0xcfe8) = DAT_ffff07c8;
  *(undefined1 *)(iVar2 + -0xcfe7) = DAT_ffff0646;
  uVar1 = _DAT_ffff0f76;
  *(char *)(iVar2 + -0xcfe6) = (char)((ushort)_DAT_ffff0f76 >> 8);
  *(char *)(iVar2 + -0xcfe5) = (char)uVar1;
  *(undefined1 *)(iVar2 + -0xcfe2) = 3;
  *(undefined1 *)(iVar2 + -0xcfe1) = DAT_ffff0586;
  *(undefined1 *)(iVar2 + -0xcfe0) = DAT_ffff0f5e;
  *(undefined1 *)(iVar2 + -0xcfdf) = DAT_ffff0f5f;
  *(undefined1 *)(iVar2 + -0xcfde) = DAT_ffff0f60;
  *(undefined1 *)(iVar2 + -0xcfdd) = DAT_ffff0f61;
  *(undefined1 *)(iVar2 + -0xcfdc) = DAT_ffff0f62;
  *(undefined1 *)(iVar2 + -0xcfdb) = DAT_ffff0f63;
  *(undefined1 *)(iVar2 + -0xcfda) = DAT_ffff05f1;
  *(undefined1 *)(iVar2 + -0xcfd9) = DAT_ffff0586;
  return;
}

