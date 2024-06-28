#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN3(VAR3);
 }
 }
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN3(VAR3);
 }
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 VAR2 = new wchar_t;
 }
 if(FUN2())
 {
 delete VAR2;
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new wchar_t;
 }
 if(FUN2())
 {
 delete VAR2;
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
