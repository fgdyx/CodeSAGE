#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 {
 int VAR7 = VAR2;
 int VAR2 = VAR7;
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
