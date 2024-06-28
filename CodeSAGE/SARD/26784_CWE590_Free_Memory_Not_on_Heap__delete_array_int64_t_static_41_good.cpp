#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 FUN2(VAR3[0]);
 delete [] VAR3;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR4 = new VAR2[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5LL;
 }
 }
 VAR3 = VAR4;
 }
 FUN1(VAR3);
}
void FUN4()
{
 FUN3();
}
#endif
