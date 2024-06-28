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
 goto VAR8;
VAR8:
 if (VAR2 != VAR3)
 {
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
