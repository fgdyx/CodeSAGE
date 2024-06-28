#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR3.VAR4 = VAR2;
 {
 int * VAR2 = VAR3.VAR5;
 {
 int VAR6[100] = {0};
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR6[VAR7];
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
