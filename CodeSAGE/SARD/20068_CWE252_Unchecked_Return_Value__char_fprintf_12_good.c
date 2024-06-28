#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 if (fprintf(VAR2, "", "") < 0)
 {
 FUN3("");
 }
 }
 else
 {
 if (fprintf(VAR2, "", "") < 0)
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
