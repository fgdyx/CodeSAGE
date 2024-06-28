#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wcscat(VAR2, VAR3"");
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 FUN1(VAR2);
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
