
void FUN_0006cb8a(short param_1,byte param_2)

{
  param_2 = ~param_2;
  if (param_1 == 0) {
    DAT_fffef79b = DAT_fffef79b & param_2;
    DAT_fffef79c = DAT_fffef79c & param_2;
    DAT_fffef79d = DAT_fffef79d & param_2;
    DAT_fffef79e = DAT_fffef79e & param_2;
    return;
  }
  if (param_1 == 1) {
    DAT_fffef799 = DAT_fffef799 & param_2;
    DAT_fffef79f = DAT_fffef79f & param_2;
    return;
  }
  DAT_fffef79a = DAT_fffef79a & param_2;
  DAT_fffef7a0 = DAT_fffef7a0 & param_2;
  return;
}

