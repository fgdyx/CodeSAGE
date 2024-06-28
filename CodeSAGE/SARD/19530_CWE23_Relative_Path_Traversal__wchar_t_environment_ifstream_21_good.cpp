#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static wchar_t * FUN1(wchar_t * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR4, VAR5"");
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 wchar_t VAR6[VAR7] = VAR8;
 VAR4 = VAR6;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 ifstream VAR9;
 VAR9.open((char *)VAR4);
 VAR9.close();
 }
 ;
}
static wchar_t * FUN4(wchar_t * VAR4)
{
 if(VAR3)
 {
 wcscat(VAR4, VAR5"");
 }
 return VAR4;
}
static void FUN5()
{
 wchar_t * VAR4;
 wchar_t VAR6[VAR7] = VAR8;
 VAR4 = VAR6;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 ifstream VAR9;
 VAR9.open((char *)VAR4);
 VAR9.close();
 }
 ;
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
