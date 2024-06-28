#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR2 = VAR4;
#ifdef VAR7
 wcscat(VAR2, VAR6"");
#else
 wcscat(VAR2, VAR6"");
#endif
 {
 wchar_t * VAR2 = VAR3;
 {
 ofstream VAR8;
 VAR8.open((char *)VAR2);
 VAR8.close();
 }
 }
}
void FUN2()
{
 FUN1();
}
#endif
