#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = VAR3-5;
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
