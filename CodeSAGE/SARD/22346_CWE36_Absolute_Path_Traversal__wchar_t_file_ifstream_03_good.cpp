#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
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
 ifstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(5==5)
 {
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 ifstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
