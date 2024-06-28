#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 {
 int * VAR4 = (int *)malloc(100*sizeof(int));
 if (VAR4 == NULL)
 {
 FUN3("");
 FUN4(1);
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
 FUN1(&VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
