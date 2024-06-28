#ifndef VAR1
static void FUN1()
{
 HANDLE VAR2 = VAR3;
 if (VAR2 != VAR4)
 {
 FUN2(VAR2);
 }
}
static void FUN3()
{
 HANDLE VAR2;
 VAR2 = VAR4;
 VAR2 = FUN4("",
 (VAR5|VAR6),
 0,
 NULL,
 VAR7,
 VAR8,
 NULL);
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
