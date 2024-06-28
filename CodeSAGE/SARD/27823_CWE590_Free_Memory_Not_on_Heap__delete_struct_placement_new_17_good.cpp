#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 VAR3 * VAR5 = new VAR3;
 VAR5->VAR6 = 1;
 VAR5->VAR7 = 1;
 VAR4 = VAR5;
 }
 }
 FUN2(VAR4);
 delete VAR4;
}
void FUN3()
{
 FUN1();
}
#endif
