#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR5 = new VAR2[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5LL;
 }
 }
 VAR3 = VAR5;
 }
 {
 VAR2 * VAR3 = VAR4;
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
