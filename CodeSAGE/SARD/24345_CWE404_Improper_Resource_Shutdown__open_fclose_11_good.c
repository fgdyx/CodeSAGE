#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 if (VAR2 != -1)
 {
 FUN5(VAR2);
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 if(FUN7())
 {
 if (VAR2 != -1)
 {
 FUN5(VAR2);
 }
 }
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
