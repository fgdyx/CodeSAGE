#ifndef VAR1
static void FUN1(VAR2 &VAR3)
{
 VAR3 = FUN2("",
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
}
static void FUN3()
{
 HANDLE VAR3;
 VAR3 = VAR8;
 FUN1(VAR3);
 if (VAR3 != VAR8)
 {
 FUN4(VAR3);
 }
}
void FUN5()
{
 FUN3();
}
#endif
