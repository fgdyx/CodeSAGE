#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 int * VAR4 = (int *)malloc(100*sizeof(int));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
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
 FUN4(VAR3[0]);
 free(VAR3);
}
void FUN5()
{
 FUN1();
}
#endif
