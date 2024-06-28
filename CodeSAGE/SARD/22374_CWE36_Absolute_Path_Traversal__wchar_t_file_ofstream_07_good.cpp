#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(VAR6!=5)
 {
 FUN2("");
 }
 else
 {
#ifdef VAR7
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 ofstream VAR8;
 VAR8.open((char *)VAR2);
 VAR8.close();
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(VAR6==5)
 {
#ifdef VAR7
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 ofstream VAR8;
 VAR8.open((char *)VAR2);
 VAR8.close();
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
