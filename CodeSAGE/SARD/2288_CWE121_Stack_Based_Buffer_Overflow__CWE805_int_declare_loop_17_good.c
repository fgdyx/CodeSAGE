#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int * VAR3;
 int VAR4[50];
 int VAR5[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR5;
 }
 {
 int VAR6[100] = {0};
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR3[VAR7] = VAR6[VAR7];
 }
 FUN2(VAR3[0]);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
