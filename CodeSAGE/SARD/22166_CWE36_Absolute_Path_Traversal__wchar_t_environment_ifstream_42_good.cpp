#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
#ifdef VAR3
 wcscat(VAR2, VAR4"");
#else
 wcscat(VAR2, VAR4"");
#endif
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR5[VAR6] = VAR4"";
 VAR2 = VAR5;
 VAR2 = FUN1(VAR2);
 {
 ifstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
void FUN3()
{
 FUN2();
}
#endif
