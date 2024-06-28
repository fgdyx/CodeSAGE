#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 if (fprintf(VAR3, "", "") < 0)
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 if(VAR2==5)
 {
 if (fprintf(VAR3, "", "") < 0)
 {
 FUN2("");
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
