#ifndef VAR1
void FUN1(HANDLE VAR2);
static void FUN2()
{
 HANDLE VAR2;
 VAR2 = VAR3;
 VAR2 = FUN3("",
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
