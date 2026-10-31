
/* WARNING: Removing unreachable block (ram,0x0006b772) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0006b1de(void)

{
  short sVar2;
  int iVar1;
  char cVar3;
  bool bVar4;
  undefined2 unaff_r8;
  undefined2 unaff_r9;
  undefined2 unaff_r10;
  undefined2 unaff_r11;
  undefined2 unaff_r12;
  undefined2 unaff_r13;
  short sVar5;
  undefined2 uStack_118;
  undefined2 uStack_114;
  undefined2 uStack_110;
  undefined2 uStack_10c;
  undefined2 uStack_108;
  undefined2 uStack_104;
  undefined2 uStack_100;
  undefined2 uStack_fc;
  undefined2 uStack_f8;
  undefined2 uStack_f4;
  undefined2 uStack_f0;
  undefined2 uStack_ec;
  undefined2 uStack_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e0;
  undefined2 uStack_dc;
  undefined2 uStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b4;
  undefined2 uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_88;
  undefined2 uStack_84;
  undefined2 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_74;
  undefined2 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_24;
  
  sVar2 = FUN_0000151c(&DAT_ffff2f80,&DAT_ffff3b60);
  iVar1 = FUN_0004a5c2(&DAT_ffff2f80);
  if ((((_DAT_ffff2fc8 != 0x4055) || (_DAT_ffffabac != 0x55aa)) || (_DAT_ffff3b64 != -0x5a5b)) ||
     ((_DAT_ffff3b60 != sVar2 || (DAT_fffef5af = _DAT_ffff3b68 == iVar1, !(bool)DAT_fffef5af)))) {
    if (((_DAT_ffff2fc8 == 0x405a) && ((_DAT_ffffabac == 0x55aa && (_DAT_ffff3b64 == -0x5a5b)))) &&
       ((_DAT_ffff3b60 == sVar2 && (_DAT_ffff3b68 == iVar1)))) {
      DAT_fffef5af = '\x03';
    }
    else if (((((_DAT_ffff2fc8 == 0x4055) || (_DAT_ffff2fc8 == -0x55ab)) ||
              (_DAT_ffff2fc8 == 0x405a)) && (_DAT_ffffabac == 0x55aa)) &&
            (((_DAT_ffff3b64 != -0x5a5b || (_DAT_ffff3b60 == sVar2)) && (_DAT_ffff3b68 == iVar1))))
    {
      DAT_fffef5af = '\0';
    }
    else {
      DAT_fffef5af = '\x02';
    }
  }
  if ((((_DAT_ffffabac == 0x55aa) && ((_DAT_ffff3b64 != -0x5a5b || (_DAT_ffff3b60 == sVar2)))) &&
      ((_DAT_ffff3b64 == -0x5a5b || (_DAT_ffff3b64 == 0x5a5a)))) && (_DAT_ffff2f70 == -0x55ab)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (DAT_fffef5af == '\x01') {
    DAT_fffef53d = DAT_fffef53d | 8;
  }
  else {
    sVar5 = sVar2;
    if (DAT_fffef5af != '\x03') goto LAB_0006b74a;
  }
  uStack_118 = _DAT_ffff2fcc;
  uStack_114 = _DAT_ffff3aaa;
  uStack_110 = _DAT_ffff3a30;
  uStack_10c = _DAT_ffff3a28;
  uStack_108 = _DAT_ffff3a26;
  uStack_104 = _DAT_ffff3a1e;
  uStack_100 = _DAT_ffff3a22;
  uStack_fc = _DAT_ffff3a32;
  uStack_f8 = _DAT_ffff3a34;
  uStack_f4 = _DAT_ffff3a56;
  uStack_f0 = _DAT_ffff3ab8;
  uStack_ec = _DAT_ffff3a52;
  uStack_e8 = _DAT_ffff3ab0;
  uStack_e4 = _DAT_ffff3a5e;
  uStack_e0 = _DAT_ffff3acc;
  uStack_dc = _DAT_ffff3a60;
  uStack_d8 = _DAT_ffff3ad0;
  uStack_d4 = _DAT_ffff3a4c;
  uStack_d0 = _DAT_ffff3aa2;
  uStack_cc = _DAT_ffff3a3e;
  uStack_c8 = _DAT_ffff3a82;
  uStack_c4 = _DAT_ffff3a68;
  uStack_c0 = _DAT_ffff3a66;
  uStack_bc = _DAT_ffff3ae0;
  uStack_b8 = _DAT_ffff3adc;
  uStack_b4 = _DAT_ffff3a74;
  uStack_b0 = _DAT_ffff3a72;
  uStack_ac = _DAT_ffff3af8;
  uStack_a8 = _DAT_ffff3af4;
  uStack_a4 = _DAT_ffff3a4a;
  uStack_a0 = _DAT_ffff3a48;
  uStack_9c = _DAT_ffff3a9e;
  uStack_98 = _DAT_ffff3a64;
  uStack_94 = _DAT_ffff3a62;
  uStack_90 = _DAT_ffff3ad8;
  uStack_8c = _DAT_ffff3ad4;
  uStack_88 = _DAT_ffff3a46;
  uStack_84 = _DAT_ffff3a44;
  uStack_80 = _DAT_ffff3a96;
  uStack_7c = _DAT_ffff3a92;
  uStack_78 = _DAT_ffff3a40;
  uStack_74 = _DAT_ffff3a8a;
  uStack_70 = _DAT_ffff3a2c;
  uStack_6c = _DAT_ffff3a2e;
  uStack_68 = _DAT_ffff3a5c;
  uStack_64 = _DAT_ffff3ac6;
  uStack_60 = _DAT_ffff3a3a;
  uStack_5c = _DAT_ffff3a78;
  uStack_58 = _DAT_ffff3a54;
  uStack_54 = _DAT_ffff3a50;
  uStack_50 = _DAT_ffff3aac;
  uStack_4c = _DAT_ffff3a4e;
  uStack_48 = _DAT_ffff3abc;
  uStack_44 = _DAT_ffff3a6e;
  uStack_40 = _DAT_ffff3aec;
  uStack_3c = _DAT_ffff3a70;
  uStack_38 = _DAT_ffff3af0;
  uStack_34 = _DAT_ffff3ae8;
  uStack_30 = _DAT_ffff3a42;
  uStack_2c = _DAT_ffff3a8e;
  uStack_28 = _DAT_ffff3a3c;
  uStack_24 = _DAT_ffff3a7e;
  unaff_r12 = _DAT_ffff3a6a;
  unaff_r13 = _DAT_ffff3ae4;
  unaff_r9 = _DAT_ffff3a9a;
  sVar5 = _DAT_ffff3ab4;
  unaff_r11 = _DAT_ffff3aa6;
  unaff_r8 = _DAT_ffff3a58;
  unaff_r10 = _DAT_ffff3a6c;
LAB_0006b74a:
  _DAT_ffff3b62 = sVar2;
  if ((((DAT_ffff6569 & 0x20) != 0) || (bVar4)) || (DAT_fffef5af != '\0')) {
    DAT_ffff6569 = DAT_ffff6569 | 0x20;
    FUN_0004a4ac();
  }
  _DAT_ffffabac = 0x55aa;
  _DAT_ffff3b64 = 0x5a5a;
  _DAT_ffff2fd2 = 0xf910;
  if ((DAT_fffef5af == '\x01') || (cVar3 = DAT_fffef5af, DAT_fffef5af == '\x03')) {
    _DAT_ffff2fcc = uStack_118;
    _DAT_ffff3aaa = uStack_114;
    _DAT_ffff3a30 = uStack_110;
    _DAT_ffff3a28 = uStack_10c;
    _DAT_ffff3a26 = uStack_108;
    _DAT_ffff3a1e = uStack_104;
    _DAT_ffff3a22 = uStack_100;
    _DAT_ffff3a32 = uStack_fc;
    _DAT_ffff3a34 = uStack_f8;
    _DAT_ffff3a56 = uStack_f4;
    _DAT_ffff3ab8 = uStack_f0;
    _DAT_ffff3a52 = uStack_ec;
    _DAT_ffff3ab0 = uStack_e8;
    _DAT_ffff3a5e = uStack_e4;
    _DAT_ffff3acc = uStack_e0;
    _DAT_ffff3a60 = uStack_dc;
    _DAT_ffff3ad0 = uStack_d8;
    _DAT_ffff3a4c = uStack_d4;
    _DAT_ffff3aa2 = uStack_d0;
    _DAT_ffff3a3e = uStack_cc;
    _DAT_ffff3a82 = uStack_c8;
    _DAT_ffff3a68 = uStack_c4;
    _DAT_ffff3a66 = uStack_c0;
    _DAT_ffff3ae0 = uStack_bc;
    _DAT_ffff3adc = uStack_b8;
    _DAT_ffff3a74 = uStack_b4;
    _DAT_ffff3a72 = uStack_b0;
    _DAT_ffff3af8 = uStack_ac;
    _DAT_ffff3af4 = uStack_a8;
    _DAT_ffff3a4a = uStack_a4;
    _DAT_ffff3a48 = uStack_a0;
    _DAT_ffff3a9e = uStack_9c;
    _DAT_ffff3a64 = uStack_98;
    _DAT_ffff3a62 = uStack_94;
    _DAT_ffff3ad8 = uStack_90;
    _DAT_ffff3ad4 = uStack_8c;
    _DAT_ffff3a46 = uStack_88;
    _DAT_ffff3a44 = uStack_84;
    _DAT_ffff3a96 = uStack_80;
    _DAT_ffff3a92 = uStack_7c;
    _DAT_ffff3a40 = uStack_78;
    _DAT_ffff3a8a = uStack_74;
    _DAT_ffff3a2c = uStack_70;
    _DAT_ffff3a2e = uStack_6c;
    _DAT_ffff3a5c = uStack_68;
    _DAT_ffff3ac6 = uStack_64;
    _DAT_ffff3a3a = uStack_60;
    _DAT_ffff3a78 = uStack_5c;
    _DAT_ffff3a54 = uStack_58;
    _DAT_ffff3a50 = uStack_54;
    _DAT_ffff3aac = uStack_50;
    _DAT_ffff3a4e = uStack_4c;
    _DAT_ffff3abc = uStack_48;
    _DAT_ffff3a6e = uStack_44;
    _DAT_ffff3aec = uStack_40;
    _DAT_ffff3a70 = uStack_3c;
    _DAT_ffff3af0 = uStack_38;
    _DAT_ffff3ae8 = uStack_34;
    _DAT_ffff3a42 = uStack_30;
    _DAT_ffff3a8e = uStack_2c;
    _DAT_ffff3a3c = uStack_28;
    _DAT_ffff3a7e = uStack_24;
    _DAT_ffff3a58 = unaff_r8;
    _DAT_ffff3a6a = unaff_r12;
    _DAT_ffff3a6c = unaff_r10;
    _DAT_ffff3a9a = unaff_r9;
    _DAT_ffff3aa6 = unaff_r11;
    _DAT_ffff3ab4 = sVar5;
    _DAT_ffff3ae4 = unaff_r13;
    cVar3 = -8;
  }
  return cVar3;
}

