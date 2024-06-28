#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN2(VAR3);
 }
 }
 if(5!=5)
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
 if(5==5)
 {
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN2(VAR3);
 }
 }
 if(5==5)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = new wchar_t[100];
 }
 if(5==5)
 {
 delete [] VAR2;
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = new wchar_t[100];
 }
 if(5==5)
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
