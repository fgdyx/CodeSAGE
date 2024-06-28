#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 {
 long * VAR3 = new long;
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR2);
 delete VAR5;
}
void FUN3()
{
 FUN1();
}
#endif
