#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 VAR2 = FUN2("", VAR4|VAR5, VAR6|VAR7);
 {
 int VAR2 = VAR3;
 if (VAR2 != -1)
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
