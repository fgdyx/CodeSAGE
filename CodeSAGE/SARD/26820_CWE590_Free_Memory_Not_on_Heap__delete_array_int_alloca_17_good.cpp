#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 int * VAR4 = new int[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5;
 }
 }
 VAR3 = VAR4;
 }
 }
 FUN2(VAR3[0]);
 delete [] VAR3;
}
void FUN3()
{
 FUN1();
}
#endif
