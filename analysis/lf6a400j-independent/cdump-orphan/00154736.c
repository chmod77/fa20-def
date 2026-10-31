
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00154736(void)

{
  uint uVar1;
  byte bVar3;
  undefined2 uVar2;
  undefined *puVar4;
  
  _DAT_fffeef56 = FUN_001493a6();
  _DAT_fffef242 = _DAT_fffeef56 << 6;
  uVar1 = FUN_0014939a();
  if ((uVar1 & 0xffff) * 32000 < 0x7fff8000) {
    _v_Mass_Airflow_Sensor_Voltage_EEB2 =
         (undefined2)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 64000) >> 0x10);
  }
  else {
    _v_Mass_Airflow_Sensor_Voltage_EEB2 = 0xffff;
  }
  uVar1 = thunk_FUN_0014da4a();
  bVar3 = DAT_fffee6bc | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffee6bc & 0xef;
  }
  DAT_fffee6bc = bVar3;
  DAT_fffee738 = thunk_FUN_0014da1c(0);
  DAT_fffee739 = thunk_FUN_0014da1c(1);
  DAT_fffee73a = thunk_FUN_0014da1c(2);
  DAT_fffee73b = thunk_FUN_0014da1c(3);
  _DAT_fffef4ca = thunk_FUN_0014db78();
  uVar1 = thunk_FUN_0014dbc8();
  bVar3 = DAT_fffef499 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef499 & 0x7f;
  }
  DAT_fffef499 = bVar3;
  uVar1 = thunk_FUN_0014da26();
  bVar3 = DAT_fffef732 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef732 & 0xdf;
  }
  DAT_fffef732 = bVar3;
  uVar1 = thunk_FUN_0014da34();
  bVar3 = DAT_fffef77e | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef77e & 0x7f;
  }
  DAT_fffef77e = bVar3;
  uVar1 = thunk_FUN_0014dbbc();
  bVar3 = DAT_ffff04f5 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff04f5 & 0xef;
  }
  DAT_ffff04f5 = bVar3;
  DAT_fffef044 = FUN_00144cea();
  uVar2 = FUN_00149764();
  _DAT_fffef046 = FUN_00001540(uVar2);
  DAT_fffef045 = FUN_00144cea();
  _DAT_fffeef5a = FUN_0014965c(0);
  _DAT_fffeef5c = FUN_00149652(0);
  if (DAT_fffef1e0 == '\0') {
    uVar1 = FUN_00149432();
    puVar4 = &DAT_0000ffff;
    if ((uVar1 & 0xffff) * 32000 < 0x7fff8000) {
      puVar4 = (undefined *)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 64000) >> 0x10);
    }
    DAT_fffef1e5 = (undefined1)((uint)((int)puVar4 * 0xfa) >> 0x10);
  }
  uVar1 = FUN_0014984e();
  _DAT_fffeefe0 = (short)uVar1;
  if ((uVar1 & 0xffff) * 32000 < 0x7fff8000) {
    _DAT_fffeefdc = (undefined2)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 64000) >> 0x10);
  }
  else {
    _DAT_fffeefdc = 0xffff;
  }
  return uVar1;
}

