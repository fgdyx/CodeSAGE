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
 if(VAR8!=5)
 {
 FUN3("");
 }
 else
 {
 if (VAR2 != VAR3)
 {
 FUN4(VAR2);
 }
 }
}
static void FUN5()
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
 if(VAR8==5)
 {
 if (VAR2 != VAR3)
 {
 FUN4(VAR2);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
