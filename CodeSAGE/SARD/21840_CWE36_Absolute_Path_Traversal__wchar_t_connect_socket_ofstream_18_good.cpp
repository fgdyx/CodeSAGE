#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 goto VAR6;
VAR6:
#ifdef VAR7
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 {
 ofstream VAR8;
 VAR8.open((char *)VAR2);
 VAR8.close();
 }
}
void FUN2()
{
 FUN1();
}
#endif
