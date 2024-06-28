#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 delete[] VAR2;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 }
 if(VAR3==5)
 {
 delete[] VAR2;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 wchar_t VAR5[100];
 VAR2 = VAR5;
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 }
 if(VAR3==5)
 {
 ;
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 wchar_t VAR5[100];
 VAR2 = VAR5;
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 }
 if(VAR3==5)
 {
 ;
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
