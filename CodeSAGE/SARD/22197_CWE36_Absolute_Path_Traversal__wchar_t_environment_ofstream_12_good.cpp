#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(FUN2())
 {
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 else
 {
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 ofstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
void FUN3()
{
 FUN1();
}
#endif
