#ifndef VAR1
static void FUN1()
{
 HANDLE VAR2;
 VAR2 = VAR3;
 VAR2 = FUN2("",
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 if (VAR2 != VAR3)
 {
 FUN5(VAR2);
 }
 }
}
static void FUN6()
{
 HANDLE VAR2;
 VAR2 = VAR3;
 VAR2 = FUN2("",
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 if(FUN7())
 {
 if (VAR2 != VAR3)
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
