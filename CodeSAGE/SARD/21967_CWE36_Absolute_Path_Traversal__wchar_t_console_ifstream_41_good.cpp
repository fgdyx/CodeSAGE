#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 ifstream VAR3;
 VAR3.open((char *)VAR2);
 VAR3.close();
 }
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR2 = VAR4;
#ifdef VAR7
 wcscat(VAR2, VAR6"");
#else
 wcscat(VAR2, VAR6"");
#endif
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
