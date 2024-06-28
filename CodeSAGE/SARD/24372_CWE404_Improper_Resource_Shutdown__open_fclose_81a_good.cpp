#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 const VAR7& VAR8 = FUN3();
 VAR8.FUN4(VAR2);
}
void FUN5()
{
 FUN1();
}
#endif
