
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004e6d4(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  
  uVar2 = FUN_0016bc08(&PTR_DAT_00163a84,(int)_DAT_fffeeede);
  iVar3 = __sdiv32_r1_by_r0(uVar2 & 0xffff,0x4b);
  _v_Mass_Airflow_EEE4 = (undefined2)iVar3;
  _DAT_fffeeeec = _v_Mass_Airflow_EEE4;
  _DAT_fffeeeee = _v_Mass_Airflow_EEE4;
  _DAT_fffeeef0 = _v_Mass_Airflow_EEE4;
  _DAT_fffeeef4 = _v_Mass_Airflow_EEE4;
  _DAT_fffef2c6 = _v_Mass_Airflow_EEE4;
  _DAT_fffeeee0 = _v_Coolant_Temperature_OBD_F322;
  if ((DAT_ffff6569 & 0x20) != 0) {
    if ((DAT_fffef5af != '\x01') && (DAT_fffef5af != '\x03')) {
      _DAT_ffff2fcc = _DAT_fffeeede;
    }
    _DAT_ffff2faa = _v_Coolant_Temperature_OBD_F322;
    _DAT_ffff2fac = _DAT_fffeeede;
    _DAT_ffff2fca = 0x9000;
  }
  bVar1 = ((int)DAT_fffee710 & 0x80U) == 0;
  bVar4 = DAT_fffef364 | 0x10;
  if (bVar1) {
    bVar4 = DAT_fffef364 & 0xef;
  }
  DAT_fffef364 = bVar4;
  bVar4 = DAT_fffeef76 | 0x80;
  if (bVar1) {
    bVar4 = DAT_fffeef76 & 0x7f;
  }
  DAT_fffeef76 = bVar4;
  return;
}

