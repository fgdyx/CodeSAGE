#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 int * VAR4 = new int[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5;
 }
 }
 VAR2 = VAR4;
 }
 VAR3.VAR6 = VAR2;
 {
 int * VAR2 = VAR3.VAR7;
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
