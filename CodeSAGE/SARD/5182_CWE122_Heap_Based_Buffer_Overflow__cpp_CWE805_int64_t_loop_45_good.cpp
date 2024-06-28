#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 {
 int64_t VAR5[100] = {0};
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR3[VAR6] = VAR5[VAR6];
 }
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 VAR4 = VAR3;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
