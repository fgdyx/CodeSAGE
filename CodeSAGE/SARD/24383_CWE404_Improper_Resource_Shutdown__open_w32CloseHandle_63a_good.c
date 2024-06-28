#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN3("", VAR3|VAR4, VAR5|VAR6);
 FUN1(&VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
