#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 {
 int * VAR5 = (int *)malloc(100*sizeof(int));
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5;
 }
 }
 VAR2 = VAR5;
 }
 FUN5(VAR2);
}
void FUN6()
{
 FUN2();
}
#endif
