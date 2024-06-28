#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 ofstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
void FUN3()
{
 FUN2();
}
#endif
