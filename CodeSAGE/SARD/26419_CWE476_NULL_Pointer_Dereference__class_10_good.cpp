#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 if(VAR4)
 {
 VAR3 = NULL;
 }
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR6);
 delete VAR3;
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 if(VAR4)
 {
 VAR3 = NULL;
 }
 if(VAR4)
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR6);
 delete VAR3;
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 {
 VAR2 * VAR7 = new VAR2;
 VAR7->VAR6 = 0;
 VAR7->VAR6 = 0;
 VAR3 = VAR7;
 }
 }
 if(VAR4)
 {
 FUN3(VAR3->VAR6);
 delete VAR3;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 if(VAR4)
 {
 {
 VAR2 * VAR7 = new VAR2;
 VAR7->VAR6 = 0;
 VAR7->VAR6 = 0;
 VAR3 = VAR7;
 }
 }
 if(VAR4)
 {
 FUN3(VAR3->VAR6);
 delete VAR3;
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
