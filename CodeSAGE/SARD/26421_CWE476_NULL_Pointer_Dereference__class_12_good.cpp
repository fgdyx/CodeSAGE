#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 VAR3 = NULL;
 }
 else
 {
 VAR3 = NULL;
 }
 if(FUN2())
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR4);
 delete VAR3;
 }
 else
 {
 FUN4("");
 }
 }
 else
 {
 if (VAR3 != NULL)
 {
 FUN3(VAR3->VAR4);
 delete VAR3;
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 if(FUN2())
 {
 {
 VAR2 * VAR5 = new VAR2;
 VAR5->VAR4 = 0;
 VAR5->VAR4 = 0;
 VAR3 = VAR5;
 }
 }
 else
 {
 {
 VAR2 * VAR5 = new VAR2;
 VAR5->VAR4 = 0;
 VAR5->VAR4 = 0;
 VAR3 = VAR5;
 }
 }
 if(FUN2())
 {
 FUN3(VAR3->VAR4);
 delete VAR3;
 }
 else
 {
 FUN3(VAR3->VAR4);
 delete VAR3;
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
