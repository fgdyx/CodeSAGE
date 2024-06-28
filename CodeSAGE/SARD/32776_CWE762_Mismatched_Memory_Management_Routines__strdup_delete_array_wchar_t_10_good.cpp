#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 wchar_t VAR4[] = VAR5"";
 VAR2 = FUN2(VAR4);
 }
 }
 if(VAR6)
 {
 FUN3("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 wchar_t VAR4[] = VAR5"";
 VAR2 = FUN2(VAR4);
 }
 }
 if(VAR3)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR6)
 {
 FUN3("");
 }
 else
 {
 VAR2 = new wchar_t[100];
 }
 if(VAR3)
 {
 delete [] VAR2;
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new wchar_t[100];
 }
 if(VAR3)
 {
 delete [] VAR2;
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
