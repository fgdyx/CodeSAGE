#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 ofstream VAR4;
 VAR4.open((char *)VAR2);
 VAR4.close();
 }
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 wcscat(VAR2, VAR8"");
 VAR3 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
