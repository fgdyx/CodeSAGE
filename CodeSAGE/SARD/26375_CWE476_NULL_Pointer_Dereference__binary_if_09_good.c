#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 VAR3 *VAR4 = NULL;
 if ((VAR4 != NULL) && (VAR4->VAR5 == 5))
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 if(VAR6)
 {
 {
 VAR3 *VAR4 = NULL;
 if ((VAR4 != NULL) && (VAR4->VAR5 == 5))
 {
 FUN2("");
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
