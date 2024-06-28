#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 {
 wchar_t * VAR7 = VAR2;
 wchar_t * VAR2 = VAR7;
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
