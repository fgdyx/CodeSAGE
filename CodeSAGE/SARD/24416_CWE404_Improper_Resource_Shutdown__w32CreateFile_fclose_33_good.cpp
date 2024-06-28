#ifndef VAR1
static void FUN1()
{
 HANDLE VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = VAR5;
 VAR2 = FUN2("",
 (VAR6|VAR7),
 0,
 NULL,
 VAR8,
 VAR9,
 NULL);
 {
 HANDLE VAR2 = VAR4;
 if (VAR2 != VAR5)
 {
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
