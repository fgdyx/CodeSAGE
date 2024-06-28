#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 10;
 VAR3* VAR4 = new VAR6;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
