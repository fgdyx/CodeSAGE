#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 {
 int * VAR2 = VAR3;
 {
 int VAR4[100] = {0};
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR2[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
