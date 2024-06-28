#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 if (fprintf(VAR2, "", "") < 0)
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 if(FUN5())
 {
 if (fprintf(VAR2, "", "") < 0)
 {
 FUN3("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
