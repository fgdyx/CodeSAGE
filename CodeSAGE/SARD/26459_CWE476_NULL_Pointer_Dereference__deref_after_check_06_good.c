#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int *VAR3 = NULL;
 if (VAR3 == NULL)
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 if(VAR2==5)
 {
 {
 int *VAR3 = NULL;
 if (VAR3 == NULL)
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
